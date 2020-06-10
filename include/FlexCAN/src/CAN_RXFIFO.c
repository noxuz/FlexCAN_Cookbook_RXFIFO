/**
 * Source file
 */

#include <FlexCAN/include/CAN_RXFIFO.h>
#include "register_bit_fields.h"


/* Structure for the CAN bit timings */
 typedef struct {
    uint8_t PRESDIV;
    uint8_t PROPSEG;
    uint8_t PSEG1;
    uint8_t PSEG2;
    uint8_t RJW;
} CAN_bit_timings_t;


/* CAN bit timings for 500 Kbit/s  */
CAN_bit_timings_t timings = {
        .PRESDIV = 0,
        .PROPSEG = 5,
        .PSEG1 = 5,
        .PSEG2 = 2,
        .RJW = 2,
};

/* The message buffers and RX FIFO have different structures in the register_bit_fields header,
 * and the RX FIFO and the Message Buffer used for transmission are the 0th of each type */
typedef enum {
    RX_FIFO = 0,
    TX_MB = 0
} MB_index_Enum;

status_t FlexCAN_init_RXFIFO(void)
{
    /* Set asynchronous clock source SOSCDIV2 for feeding @ 8 Mhz to FlexCAN ----------*/
    /* System Oscillator (SOSC) initialization for 8Mhz external crystal */
    SCG->SCG_SOSCCSR_b.LK       = SCG_SOSCCSR_LK_0;         /* Ensure the register is unlocked */
    SCG->SCG_SOSCCSR_b.SOSCEN   = SCG_SOSCCSR_SOSCEN_0;     /* Disable SOSC for setup */
    SCG->SCG_SOSCCFG_b.EREFS    = SCG_SOSCCFG_EREFS_1;      /* Setup external crystal for SOSC reference */
    SCG->SCG_SOSCCFG_b.RANGE    = SCG_SOSCCFG_RANGE_10;     /* Select 8Mhz range */
    SCG->SCG_SOSCCSR_b.SOSCEN   = SCG_SOSCCSR_SOSCEN_1;     /* Enable SOSC reference */
    SCG->SCG_SOSCDIV_b.SOSCDIV2 = SCG_SOSCDIV_SOSCDIV2_001; /* Asynch source for FlexCAN */
    SCG->SCG_SOSCCSR_b.LK       = SCG_SOSCCSR_LK_1;         /* Lock the register from accidental writes */

    /* Poll for valid SOSC reference, needs 4096 cycles */
    while(!(SCG->SCG_SOSCCSR_b.SOSCVLD));

    /*-------------------------------- FlexCAN0 Startup  ----------------------------------*/
    PCC->PCC_FlexCAN0_b.CGC   = PCC_PCC_FlexCAN0_CGC_1; /* FlexCAN0 clock gating */
    CAN0->CAN0_MCR_b.MDIS     = CAN0_MCR_MDIS_1;        /* Disable FlexCAN module for clock source selection */
    CAN0->CAN0_CTRL1_b.CLKSRC = CAN0_CTRL1_CLKSRC_0;    /* Select SOSCDIV2 as source (8Mhz)*/
    CAN0->CAN0_MCR_b.MDIS     = CAN0_MCR_MDIS_0;        /* Enable FlexCAN peripheral */
    CAN0->CAN0_MCR_b.HALT     = CAN0_MCR_HALT_1;        /* Request freeze mode eBtry */
    CAN0->CAN0_MCR_b.FRZ      = CAN0_MCR_FRZ_1;

    /* Block for freeze mode entry */
    while(!(CAN0->CAN0_MCR_b.FRZACK));

    /* Enable individual masks for RX FIFO ID table */
    CAN0->CAN0_MCR_b.IRMQ = CAN0_MCR_IRMQ_1;

    /* Disable self reception */
    CAN0->CAN0_MCR_b.SRXDIS = CAN0_MCR_SRXDIS_1;

    /* Enable RX FIFO */
    CAN0->CAN0_MCR_b.RFEN = CAN0_MCR_RFEN_1;

    /* One full ID per ID filter table element  */
    CAN0->CAN0_MCR_b.IDAM = CAN0_MCR_IDAM_00;

    /* Choose 8 ID filter elements for RX FIFO */
    CAN0->CAN0_CTRL2_b.RFFN = 0;

    /* CAN Bit Timing (CBT) configuration for a bitrate of 500 Kbit/s with 16 time quantas,
       in accordance with Bosch 2012 specification */
    CAN0->CAN0_CTRL1_b.PRESDIV = timings.PRESDIV;
    CAN0->CAN0_CTRL1_b.PROPSEG = timings.PROPSEG;
    CAN0->CAN0_CTRL1_b.PSEG1   = timings.PSEG1;
    CAN0->CAN0_CTRL1_b.PSEG2   = timings.PSEG2;
    CAN0->CAN0_CTRL1_b.RJW     = timings.RJW;

    /* Exit from freeze mode */
    CAN0->CAN0_MCR_b.HALT = CAN0_MCR_HALT_0;
    CAN0->CAN0_MCR_b.FRZ  = CAN0_MCR_FRZ_0;

    /* Block for freeze mode exit */
    while(CAN0->CAN0_MCR_b.FRZACK);

    /* Block for module ready flag */
    while(CAN0->CAN0_MCR_b.NOTRDY);

    /* Pin multiplexing for FlexCAN */
    PCC->PCC_PORTE_b.CGC = PCC_PCC_PORTE_CGC_1;   /* Clock gating to PORT E */
    PORTE->PORTE_PCR4_b.MUX = PORTE_PCR4_MUX_101; /* CAN0_RX at PORT E pin 4 */
    PORTE->PORTE_PCR5_b.MUX = PORTE_PCR5_MUX_101; /* CAN0_TX at PORT E pin 5 */

    /* Success code if this point is reached */
    return Success;

}

status_t install_ID(uint32_t id)
{
    /* Request freeze mode entry */
    CAN0->CAN0_MCR_b.HALT = CAN0_MCR_HALT_1;
    CAN0->CAN0_MCR_b.FRZ  = CAN0_MCR_FRZ_1;

    /* Block for freeze mode entry */
    while (!(CAN0->CAN0_MCR_b.FRZACK));

    /* Configure the ID, from the ID filter table */
    CAN0->ID_TABLE_RXFIFO[0].STD_ID = id;

    /* All-bits care mask for ID filter table of RX FIFO */
    CAN0->CAN0_RXIMR0_b.MI = 0x7FF << 19;

    /* Exit from freeze mode */
    CAN0->CAN0_MCR_b.HALT = CAN0_MCR_HALT_0;
    CAN0->CAN0_MCR_b.FRZ  = CAN0_MCR_FRZ_0;

    /* Block for freeze mode exit */
    while(CAN0->CAN0_MCR_b.FRZACK);

    /* Block for module ready flag */
    while(CAN0->CAN0_MCR_b.NOTRDY);

    return Success;
}

status_t transmit_frame(frame_t* frame)
{
    /* Insert he payload for transmission */
    for(uint8_t i = 0; i < MAX_MTU_WORDS; i++)
    {
        CAN0->Classic_MessageBuffer[TX_MB].payload[i] = frame->payload[i];
    }

    /* Set the frame's destination ID */
    //CAN0->Classic_MessageBuffer[TX_MB].STD_ID = 0;
    CAN0->Classic_MessageBuffer[TX_MB].STD_ID = frame->ID;

    /* Fill rest of parameters for transmission and send */
    CAN0->Classic_MessageBuffer[TX_MB].EDL =  0;   /* No extended data length */
    CAN0->Classic_MessageBuffer[TX_MB].BRS =  0;   /* No bit-rate switch */
    CAN0->Classic_MessageBuffer[TX_MB].ESI =  0;
    CAN0->Classic_MessageBuffer[TX_MB].SRR =  0;
    CAN0->Classic_MessageBuffer[TX_MB].IDE =  0;   /* Standard UD */
    CAN0->Classic_MessageBuffer[TX_MB].RTR =  0;
    CAN0->Classic_MessageBuffer[TX_MB].DLC = 0x8;  /* 8 bytes of payload */
    CAN0->Classic_MessageBuffer[TX_MB].CODE = 0xC; /* Frame is sent when this field is written */

    /* After a successful transmission the interrupt flag of the corresponding message buffer is set */
    while(!(CAN0->CAN0_IFLAG1_b.BUF31TO8I));

    /* Clear the flag previously polled (W1C register) */
    CAN0->CAN0_IFLAG1_b.BUF31TO8I = 1;

    /* Return successful transmission request status */
    return Success;

}

status_t receive_frame(frame_t* frame)
{

    /* Default output and return values */
    status_t status = Failure;

    /* Check if the RX FIFO received */
    if( CAN0->CAN0_IFLAG1_b.BUF5I )
    {
        /* Harvest the ID */
        frame->ID = CAN0->Classic_RX_FIFO[RX_FIFO].STD_ID;

        /* Harvest the payload */
        for(uint8_t i = 0; i < MAX_MTU_WORDS; i++)
        {
            frame->payload[i] = CAN0->Classic_RX_FIFO[RX_FIFO].payload[i];
        }

        /* Force update of the RX FIFO by clearing its flag (w1c register) */
        CAN0->CAN0_IFLAG1_b.BUF5I = 1;

        /* Return success status code */
        status = Success;
    }

    return status;
}

void greenLED_init(void)
{
    PCC->PCC_PORTD_b.CGC = PCC_PCC_PORTD_CGC_1; /* Clock gating */
    PORTD->PORTD_PCR16_b.MUX = PORTD_PCR16_MUX_001; /* GPIO multiplexing */
    PTD->GPIOD_PDDR |= 1<<16; /* Direction as output */
}

