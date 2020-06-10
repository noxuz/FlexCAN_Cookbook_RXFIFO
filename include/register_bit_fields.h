/**
 * Register bit fields used in the example
 */

#ifndef FLEXCAN_INCLUDE_REGISTER_BIT_FIELDS_H_
#define FLEXCAN_INCLUDE_REGISTER_BIT_FIELDS_H_

/* Register qualifiers macros */
#ifndef __I                       /*!< Read-only register */
  #define __I   volatile const
#endif
#ifndef __O                       /*!< Output register */
  #define __O   volatile
#endif
#ifndef __IO                      /*!< Input and output register */
  #define __IO  volatile
#endif

/* Base address for the peripherals used, their respective type castings are locating at the bottom of the file */
#define CAN0_BASE                   0x40024000UL
#define SCG_BASE                    0x40064000UL
#define PCC_BASE                    0x40065000UL
#define PORTD_BASE                  0x4004C000UL
#define PORTE_BASE                  0x4004D000UL
#define PTD_BASE                    0x400FF0C0UL


/* =========================================================================================================================== */
/* ================                                           CAN0                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Flex Controller Area Network module (CAN0)
  */

typedef struct {                                /*!< (@ 0x40024000) CAN0 Structure                                             */

  union {
    __IO uint32_t CAN0_MCR;                    /*!< (@ 0x00000000) Module Configuration Register                              */

    struct {
      __IO uint32_t MAXMB      : 7;            /*!< [6..0] Number Of The Last Message Buffer                                  */
            uint32_t            : 1;
      __IO uint32_t IDAM       : 2;            /*!< [9..8] ID Acceptance Mode                                                 */
            uint32_t            : 1;
      __IO uint32_t FDEN       : 1;            /*!< [11..11] CAN FD operation enable                                          */
      __IO uint32_t AEN        : 1;            /*!< [12..12] Abort Enable                                                     */
      __IO uint32_t LPRIOEN    : 1;            /*!< [13..13] Local Priority Enable                                            */
      __IO uint32_t PNET_EN    : 1;            /*!< [14..14] Pretended Networking Enable                                      */
      __IO uint32_t DMA        : 1;            /*!< [15..15] DMA Enable                                                       */
      __IO uint32_t IRMQ       : 1;            /*!< [16..16] Individual Rx Masking And Queue Enable                           */
      __IO uint32_t SRXDIS     : 1;            /*!< [17..17] Self Reception Disable                                           */
            uint32_t            : 2;
      __I  uint32_t LPMACK     : 1;            /*!< [20..20] Low-Power Mode Acknowledge                                       */
      __IO uint32_t WRNEN      : 1;            /*!< [21..21] Warning Interrupt Enable                                         */
            uint32_t            : 1;
      __IO uint32_t SUPV       : 1;            /*!< [23..23] Supervisor Mode                                                  */
      __I  uint32_t FRZACK     : 1;            /*!< [24..24] Freeze Mode Acknowledge                                          */
      __IO uint32_t SOFTRST    : 1;            /*!< [25..25] Soft Reset                                                       */
            uint32_t            : 1;
      __I  uint32_t NOTRDY     : 1;            /*!< [27..27] FlexCAN Not Ready                                                */
      __IO uint32_t HALT       : 1;            /*!< [28..28] Halt FlexCAN                                                     */
      __IO uint32_t RFEN       : 1;            /*!< [29..29] Rx FIFO Enable                                                   */
      __IO uint32_t FRZ        : 1;            /*!< [30..30] Freeze Enable                                                    */
      __IO uint32_t MDIS       : 1;            /*!< [31..31] Module Disable                                                   */
    } CAN0_MCR_b;
  } ;

  union {
    __IO uint32_t CAN0_CTRL1;                  /*!< (@ 0x00000004) Control 1 register                                         */

    struct {
      __IO uint32_t PROPSEG    : 3;            /*!< [2..0] Propagation Segment                                                */
      __IO uint32_t LOM        : 1;            /*!< [3..3] Listen-Only Mode                                                   */
      __IO uint32_t LBUF       : 1;            /*!< [4..4] Lowest Buffer Transmitted First                                    */
      __IO uint32_t TSYN       : 1;            /*!< [5..5] Timer Sync                                                         */
      __IO uint32_t BOFFREC    : 1;            /*!< [6..6] Bus Off Recovery                                                   */
      __IO uint32_t SMP        : 1;            /*!< [7..7] CAN Bit Sampling                                                   */
            uint32_t            : 2;
      __IO uint32_t RWRNMSK    : 1;            /*!< [10..10] Rx Warning Interrupt Mask                                        */
      __IO uint32_t TWRNMSK    : 1;            /*!< [11..11] Tx Warning Interrupt Mask                                        */
      __IO uint32_t LPB        : 1;            /*!< [12..12] Loop Back Mode                                                   */
      __IO uint32_t CLKSRC     : 1;            /*!< [13..13] CAN Engine Clock Source                                          */
      __IO uint32_t ERRMSK     : 1;            /*!< [14..14] Error Interrupt Mask                                             */
      __IO uint32_t BOFFMSK    : 1;            /*!< [15..15] Bus Off Interrupt Mask                                           */
      __IO uint32_t PSEG2      : 3;            /*!< [18..16] Phase Segment 2                                                  */
      __IO uint32_t PSEG1      : 3;            /*!< [21..19] Phase Segment 1                                                  */
      __IO uint32_t RJW        : 2;            /*!< [23..22] Resync Jump Width                                                */
      __IO uint32_t PRESDIV    : 8;            /*!< [31..24] Prescaler Division Factor                                        */
    } CAN0_CTRL1_b;
  } ;

  union {
    __IO uint32_t CAN0_TIMER;                  /*!< (@ 0x00000008) Free Running Timer                                         */

    struct {
      __IO uint32_t TIMER      : 16;           /*!< [15..0] Timer Value                                                       */
            uint32_t            : 16;
    } CAN0_TIMER_b;
  } ;
  __I  uint32_t  RESERVED;

  union {
    __IO uint32_t CAN0_RXMGMASK;               /*!< (@ 0x00000010) Rx Mailboxes Global Mask Register                          */

    struct {
      __IO uint32_t MG         : 32;           /*!< [31..0] Rx Mailboxes Global Mask Bits                                     */
    } CAN0_RXMGMASK_b;
  } ;

  union {
    __IO uint32_t CAN0_RX14MASK;               /*!< (@ 0x00000014) Rx 14 Mask register                                        */

    struct {
      __IO uint32_t RX14M      : 32;           /*!< [31..0] Rx Buffer 14 Mask Bits                                            */
    } CAN0_RX14MASK_b;
  } ;

  union {
    __IO uint32_t CAN0_RX15MASK;               /*!< (@ 0x00000018) Rx 15 Mask register                                        */

    struct {
      __IO uint32_t RX15M      : 32;           /*!< [31..0] Rx Buffer 15 Mask Bits                                            */
    } CAN0_RX15MASK_b;
  } ;

  union {
    __IO uint32_t CAN0_ECR;                    /*!< (@ 0x0000001C) Error Counter                                              */

    struct {
      __IO uint32_t TXERRCNT   : 8;            /*!< [7..0] Transmit Error Counter                                             */
      __IO uint32_t RXERRCNT   : 8;            /*!< [15..8] Receive Error Counter                                             */
      __IO uint32_t TXERRCNT_FAST : 8;         /*!< [23..16] Transmit Error Counter for fast bits                             */
      __IO uint32_t RXERRCNT_FAST : 8;         /*!< [31..24] Receive Error Counter for fast bits                              */
    } CAN0_ECR_b;
  } ;

  union {
    __IO uint32_t CAN0_ESR1;                   /*!< (@ 0x00000020) Error and Status 1 register                                */

    struct {
            uint32_t            : 1;
      __IO uint32_t ERRINT     : 1;            /*!< [1..1] Error Interrupt                                                    */
      __IO uint32_t BOFFINT    : 1;            /*!< [2..2] Bus Off Interrupt                                                  */
      __I  uint32_t RX         : 1;            /*!< [3..3] FlexCAN In Reception                                               */
      __I  uint32_t FLTCONF    : 2;            /*!< [5..4] Fault Confinement State                                            */
      __I  uint32_t TX         : 1;            /*!< [6..6] FlexCAN In Transmission                                            */
      __I  uint32_t IDLE       : 1;            /*!< [7..7] IDLE                                                               */
      __I  uint32_t RXWRN      : 1;            /*!< [8..8] Rx Error Warning                                                   */
      __I  uint32_t TXWRN      : 1;            /*!< [9..9] TX Error Warning                                                   */
      __I  uint32_t STFERR     : 1;            /*!< [10..10] Stuffing Error                                                   */
      __I  uint32_t FRMERR     : 1;            /*!< [11..11] Form Error                                                       */
      __I  uint32_t CRCERR     : 1;            /*!< [12..12] Cyclic Redundancy Check Error                                    */
      __I  uint32_t ACKERR     : 1;            /*!< [13..13] Acknowledge Error                                                */
      __I  uint32_t BIT0ERR    : 1;            /*!< [14..14] Bit0 Error                                                       */
      __I  uint32_t BIT1ERR    : 1;            /*!< [15..15] Bit1 Error                                                       */
      __IO uint32_t RWRNINT    : 1;            /*!< [16..16] Rx Warning Interrupt Flag                                        */
      __IO uint32_t TWRNINT    : 1;            /*!< [17..17] Tx Warning Interrupt Flag                                        */
      __I  uint32_t SYNCH      : 1;            /*!< [18..18] CAN Synchronization Status                                       */
      __IO uint32_t BOFFDONEINT : 1;           /*!< [19..19] Bus Off Done Interrupt                                           */
      __IO uint32_t ERRINT_FAST : 1;           /*!< [20..20] Error Interrupt for errors detected in the Data Phase
                                                     of CAN FD frames with the BRS bit set                                     */
      __IO uint32_t ERROVR     : 1;            /*!< [21..21] Error Overrun bit                                                */
            uint32_t            : 4;
      __I  uint32_t STFERR_FAST : 1;           /*!< [26..26] Stuffing Error in the Data Phase of CAN FD frames with
                                                     the BRS bit set                                                           */
      __I  uint32_t FRMERR_FAST : 1;           /*!< [27..27] Form Error in the Data Phase of CAN FD frames with
                                                     the BRS bit set                                                           */
      __I  uint32_t CRCERR_FAST : 1;           /*!< [28..28] Cyclic Redundancy Check Error in the CRC field of CAN
                                                     FD frames with the BRS bit set                                            */
            uint32_t            : 1;
      __I  uint32_t BIT0ERR_FAST : 1;          /*!< [30..30] Bit0 Error in the Data Phase of CAN FD frames with
                                                     the BRS bit set                                                           */
      __I  uint32_t BIT1ERR_FAST : 1;          /*!< [31..31] Bit1 Error in the Data Phase of CAN FD frames with
                                                     the BRS bit set                                                           */
    } CAN0_ESR1_b;
  } ;
  __I  uint32_t  RESERVED1;

  union {
    __IO uint32_t CAN0_IMASK1;                 /*!< (@ 0x00000028) Interrupt Masks 1 register                                 */

    struct {
      __IO uint32_t BUF31TO0M  : 32;           /*!< [31..0] Buffer MB i Mask                                                  */
    } CAN0_IMASK1_b;
  } ;
  __I  uint32_t  RESERVED2;

  union {
    __IO uint32_t CAN0_IFLAG1;                 /*!< (@ 0x00000030) Interrupt Flags 1 register                                 */

    struct {
      __IO uint32_t BUF0I      : 1;            /*!< [0..0] Buffer MB0 Interrupt Or Clear FIFO bit                             */
      __IO uint32_t BUF4TO1I   : 4;            /*!< [4..1] Buffer MB i Interrupt Or 'reserved'                                */
      __IO uint32_t BUF5I      : 1;            /*!< [5..5] Buffer MB5 Interrupt Or 'Frames available in Rx FIFO'              */
      __IO uint32_t BUF6I      : 1;            /*!< [6..6] Buffer MB6 Interrupt Or 'Rx FIFO Warning'                          */
      __IO uint32_t BUF7I      : 1;            /*!< [7..7] Buffer MB7 Interrupt Or 'Rx FIFO Overflow'                         */
      __IO uint32_t BUF31TO8I  : 24;           /*!< [31..8] Buffer MBi Interrupt                                              */
    } CAN0_IFLAG1_b;
  } ;

  union {
    __IO uint32_t CAN0_CTRL2;                  /*!< (@ 0x00000034) Control 2 register                                         */

    struct {
            uint32_t            : 11;
      __IO uint32_t EDFLTDIS   : 1;            /*!< [11..11] Edge Filter Disable                                              */
      __IO uint32_t ISOCANFDEN : 1;            /*!< [12..12] ISO CAN FD Enable                                                */
            uint32_t            : 1;
      __IO uint32_t PREXCEN    : 1;            /*!< [14..14] Protocol Exception Enable                                        */
      __IO uint32_t TIMER_SRC  : 1;            /*!< [15..15] Timer Source                                                     */
      __IO uint32_t EACEN      : 1;            /*!< [16..16] Entire Frame Arbitration Field Comparison Enable For
                                                     Rx Mailboxes                                                              */
      __IO uint32_t RRS        : 1;            /*!< [17..17] Remote Request Storing                                           */
      __IO uint32_t MRP        : 1;            /*!< [18..18] Mailboxes Reception Priority                                     */
      __IO uint32_t TASD       : 5;            /*!< [23..19] Tx Arbitration Start Delay                                       */
      __IO uint32_t RFFN       : 4;            /*!< [27..24] Number Of Rx FIFO Filters                                        */
            uint32_t            : 2;
      __IO uint32_t BOFFDONEMSK : 1;           /*!< [30..30] Bus Off Done Interrupt Mask                                      */
      __IO uint32_t ERRMSK_FAST : 1;           /*!< [31..31] Error Interrupt Mask for errors detected in the Data
                                                     Phase of fast CAN FD frames                                               */
    } CAN0_CTRL2_b;
  } ;

  union {
    __I  uint32_t CAN0_ESR2;                   /*!< (@ 0x00000038) Error and Status 2 register                                */

    struct {
            uint32_t            : 13;
      __I  uint32_t IMB        : 1;            /*!< [13..13] Inactive Mailbox                                                 */
      __I  uint32_t VPS        : 1;            /*!< [14..14] Valid Priority Status                                            */
            uint32_t            : 1;
      __I  uint32_t LPTM       : 7;            /*!< [22..16] Lowest Priority Tx Mailbox                                       */
            uint32_t            : 9;
    } CAN0_ESR2_b;
  } ;
  __I  uint32_t  RESERVED3[2];

  union {
    __I  uint32_t CAN0_CRCR;                   /*!< (@ 0x00000044) CRC Register                                               */

    struct {
      __I  uint32_t TXCRC      : 15;           /*!< [14..0] Transmitted CRC value                                             */
            uint32_t            : 1;
      __I  uint32_t MBCRC      : 7;            /*!< [22..16] CRC Mailbox                                                      */
            uint32_t            : 9;
    } CAN0_CRCR_b;
  } ;

  union {
    __IO uint32_t CAN0_RXFGMASK;               /*!< (@ 0x00000048) Rx FIFO Global Mask register                               */

    struct {
      __IO uint32_t FGM        : 32;           /*!< [31..0] Rx FIFO Global Mask Bits                                          */
    } CAN0_RXFGMASK_b;
  } ;

  union {
    __I  uint32_t CAN0_RXFIR;                  /*!< (@ 0x0000004C) Rx FIFO Information Register                               */

    struct {
      __I  uint32_t IDHIT      : 9;            /*!< [8..0] Identifier Acceptance Filter Hit Indicator                         */
            uint32_t            : 23;
    } CAN0_RXFIR_b;
  } ;

  union {
    __IO uint32_t CAN0_CBT;                    /*!< (@ 0x00000050) CAN Bit Timing Register                                    */

    struct {
      __IO uint32_t EPSEG2     : 5;            /*!< [4..0] Extended Phase Segment 2                                           */
      __IO uint32_t EPSEG1     : 5;            /*!< [9..5] Extended Phase Segment 1                                           */
      __IO uint32_t EPROPSEG   : 6;            /*!< [15..10] Extended Propagation Segment                                     */
      __IO uint32_t ERJW       : 5;            /*!< [20..16] Extended Resync Jump Width                                       */
      __IO uint32_t EPRESDIV   : 10;           /*!< [30..21] Extended Prescaler Division Factor                               */
      __IO uint32_t BTF        : 1;            /*!< [31..31] Bit Timing Format Enable                                         */
    } CAN0_CBT_b;
  } ;
  __I  uint32_t  RESERVED4[11];

   /*============= The next structures are particular only for RXFIFO usage in FlexCAN ======================================*/

  struct {
    __IO uint32_t TIMESTAMP  : 16;
    __IO uint32_t DLC        : 4;
    __IO uint32_t RTR        : 1;
    __IO uint32_t IDE        : 1;
    __IO uint32_t SRR        : 1;
    __IO uint32_t IDHIT      : 9;
          uint32_t            : 18;
    __IO uint32_t STD_ID     : 11;
          uint32_t            : 3;
    __IO uint32_t payload[2];
  } Classic_RX_FIFO[6];

  struct{
          uint32_t            : 19;
    __IO uint32_t STD_ID         : 11;
          uint32_t            : 2;
  } ID_TABLE_RXFIFO[8];

  struct {
    __IO uint32_t TIMESTAMP  : 16;
    __IO uint32_t DLC        : 4;
    __IO uint32_t RTR        : 1;
    __IO uint32_t IDE        : 1;
    __IO uint32_t SRR        : 1;
          uint32_t            : 1;
    __IO uint32_t CODE       : 4;
          uint32_t            : 1;
    __IO uint32_t ESI        : 1;
    __IO uint32_t BRS        : 1;
    __IO uint32_t EDL        : 1;
          uint32_t            : 18;
    __IO uint32_t STD_ID     : 11;
    __IO uint32_t PRIO       : 3;
    __IO uint32_t payload[2];
  } Classic_MessageBuffer[24];

   /*=========================================================================================================================*/


  __I  uint32_t  RESERVED5[384];

  union {
    __IO uint32_t CAN0_RXIMR0;                 /*!< (@ 0x00000880) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR0_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR1;                 /*!< (@ 0x00000884) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR1_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR2;                 /*!< (@ 0x00000888) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR2_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR3;                 /*!< (@ 0x0000088C) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR3_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR4;                 /*!< (@ 0x00000890) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR4_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR5;                 /*!< (@ 0x00000894) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR5_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR6;                 /*!< (@ 0x00000898) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR6_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR7;                 /*!< (@ 0x0000089C) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR7_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR8;                 /*!< (@ 0x000008A0) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR8_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR9;                 /*!< (@ 0x000008A4) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR9_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR10;                /*!< (@ 0x000008A8) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR10_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR11;                /*!< (@ 0x000008AC) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR11_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR12;                /*!< (@ 0x000008B0) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR12_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR13;                /*!< (@ 0x000008B4) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR13_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR14;                /*!< (@ 0x000008B8) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR14_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR15;                /*!< (@ 0x000008BC) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR15_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR16;                /*!< (@ 0x000008C0) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR16_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR17;                /*!< (@ 0x000008C4) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR17_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR18;                /*!< (@ 0x000008C8) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR18_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR19;                /*!< (@ 0x000008CC) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR19_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR20;                /*!< (@ 0x000008D0) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR20_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR21;                /*!< (@ 0x000008D4) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR21_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR22;                /*!< (@ 0x000008D8) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR22_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR23;                /*!< (@ 0x000008DC) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR23_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR24;                /*!< (@ 0x000008E0) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR24_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR25;                /*!< (@ 0x000008E4) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR25_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR26;                /*!< (@ 0x000008E8) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR26_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR27;                /*!< (@ 0x000008EC) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR27_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR28;                /*!< (@ 0x000008F0) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR28_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR29;                /*!< (@ 0x000008F4) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR29_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR30;                /*!< (@ 0x000008F8) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR30_b;
  } ;

  union {
    __IO uint32_t CAN0_RXIMR31;                /*!< (@ 0x000008FC) Rx Individual Mask Registers                               */

    struct {
      __IO uint32_t MI         : 32;           /*!< [31..0] Individual Mask Bits                                              */
    } CAN0_RXIMR31_b;
  } ;
  __I  uint32_t  RESERVED6[128];

  union {
    __IO uint32_t CAN0_CTRL1_PN;               /*!< (@ 0x00000B00) Pretended Networking Control 1 Register                    */

    struct {
      __IO uint32_t FCS        : 2;            /*!< [1..0] Filtering Combination Selection                                    */
      __IO uint32_t IDFS       : 2;            /*!< [3..2] ID Filtering Selection                                             */
      __IO uint32_t PLFS       : 2;            /*!< [5..4] Payload Filtering Selection                                        */
            uint32_t            : 2;
      __IO uint32_t NMATCH     : 8;            /*!< [15..8] Number of Messages Matching the Same Filtering Criteria           */
      __IO uint32_t WUMF_MSK   : 1;            /*!< [16..16] Wake Up by Match Flag Mask Bit                                   */
      __IO uint32_t WTOF_MSK   : 1;            /*!< [17..17] Wake Up by Timeout Flag Mask Bit                                 */
            uint32_t            : 14;
    } CAN0_CTRL1_PN_b;
  } ;

  union {
    __IO uint32_t CAN0_CTRL2_PN;               /*!< (@ 0x00000B04) Pretended Networking Control 2 Register                    */

    struct {
      __IO uint32_t MATCHTO    : 16;           /*!< [15..0] Timeout for No Message Matching the Filtering Criteria            */
            uint32_t            : 16;
    } CAN0_CTRL2_PN_b;
  } ;

  union {
    __IO uint32_t CAN0_WU_MTC;                 /*!< (@ 0x00000B08) Pretended Networking Wake Up Match Register                */

    struct {
            uint32_t            : 8;
      __I  uint32_t MCOUNTER   : 8;            /*!< [15..8] Number of Matches while in Pretended Networking                   */
      __IO uint32_t WUMF       : 1;            /*!< [16..16] Wake Up by Match Flag Bit                                        */
      __IO uint32_t WTOF       : 1;            /*!< [17..17] Wake Up by Timeout Flag Bit                                      */
            uint32_t            : 14;
    } CAN0_WU_MTC_b;
  } ;

  union {
    __IO uint32_t CAN0_FLT_ID1;                /*!< (@ 0x00000B0C) Pretended Networking ID Filter 1 Register                  */

    struct {
      __IO uint32_t FLT_ID1    : 29;           /*!< [28..0] ID Filter 1 for Pretended Networking filtering                    */
      __IO uint32_t FLT_RTR    : 1;            /*!< [29..29] Remote Transmission Request Filter                               */
      __IO uint32_t FLT_IDE    : 1;            /*!< [30..30] ID Extended Filter                                               */
            uint32_t            : 1;
    } CAN0_FLT_ID1_b;
  } ;

  union {
    __IO uint32_t CAN0_FLT_DLC;                /*!< (@ 0x00000B10) Pretended Networking DLC Filter Register                   */

    struct {
      __IO uint32_t FLT_DLC_HI : 4;            /*!< [3..0] Upper Limit for Length of Data Bytes Filter                        */
            uint32_t            : 12;
      __IO uint32_t FLT_DLC_LO : 4;            /*!< [19..16] Lower Limit for Length of Data Bytes Filter                      */
            uint32_t            : 12;
    } CAN0_FLT_DLC_b;
  } ;

  union {
    __IO uint32_t CAN0_PL1_LO;                 /*!< (@ 0x00000B14) Pretended Networking Payload Low Filter 1 Register         */

    struct {
      __IO uint32_t Data_byte_3 : 8;           /*!< [7..0] Payload Filter 1 low order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 3.                       */
      __IO uint32_t Data_byte_2 : 8;           /*!< [15..8] Payload Filter 1 low order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 2.                       */
      __IO uint32_t Data_byte_1 : 8;           /*!< [23..16] Payload Filter 1 low order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 1.                       */
      __IO uint32_t Data_byte_0 : 8;           /*!< [31..24] Payload Filter 1 low order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 0.                       */
    } CAN0_PL1_LO_b;
  } ;

  union {
    __IO uint32_t CAN0_PL1_HI;                 /*!< (@ 0x00000B18) Pretended Networking Payload High Filter 1 Register        */

    struct {
      __IO uint32_t Data_byte_7 : 8;           /*!< [7..0] Payload Filter 1 high order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 7.                       */
      __IO uint32_t Data_byte_6 : 8;           /*!< [15..8] Payload Filter 1 high order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 6.                       */
      __IO uint32_t Data_byte_5 : 8;           /*!< [23..16] Payload Filter 1 high order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 5.                       */
      __IO uint32_t Data_byte_4 : 8;           /*!< [31..24] Payload Filter 1 high order bits for Pretended Networking
                                                     payload filtering corresponding to the data byte 4.                       */
    } CAN0_PL1_HI_b;
  } ;

  union {
    __IO uint32_t CAN0_FLT_ID2_IDMASK;         /*!< (@ 0x00000B1C) Pretended Networking ID Filter 2 Register / ID
                                                                    Mask Register                                              */

    struct {
      __IO uint32_t FLT_ID2_IDMASK : 29;       /*!< [28..0] ID Filter 2 for Pretended Networking Filtering / ID
                                                     Mask Bits for Pretended Networking ID Filtering                           */
      __IO uint32_t RTR_MSK    : 1;            /*!< [29..29] Remote Transmission Request Mask Bit                             */
      __IO uint32_t IDE_MSK    : 1;            /*!< [30..30] ID Extended Mask Bit                                             */
            uint32_t            : 1;
    } CAN0_FLT_ID2_IDMASK_b;
  } ;

  union {
    __IO uint32_t CAN0_PL2_PLMASK_LO;          /*!< (@ 0x00000B20) Pretended Networking Payload Low Filter 2 Register
                                                                    / Payload Low Mask Register                                */

    struct {
      __IO uint32_t Data_byte_3 : 8;           /*!< [7..0] Payload Filter 2 low order bits / Payload Mask low order
                                                     bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 3.                                                       */
      __IO uint32_t Data_byte_2 : 8;           /*!< [15..8] Payload Filter 2 low order bits / Payload Mask low order
                                                     bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 2.                                                       */
      __IO uint32_t Data_byte_1 : 8;           /*!< [23..16] Payload Filter 2 low order bits / Payload Mask low
                                                     order bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 1.                                                       */
      __IO uint32_t Data_byte_0 : 8;           /*!< [31..24] Payload Filter 2 low order bits / Payload Mask low
                                                     order bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 0.                                                       */
    } CAN0_PL2_PLMASK_LO_b;
  } ;

  union {
    __IO uint32_t CAN0_PL2_PLMASK_HI;          /*!< (@ 0x00000B24) Pretended Networking Payload High Filter 2 low
                                                                    order bits / Payload High Mask Register                    */

    struct {
      __IO uint32_t Data_byte_7 : 8;           /*!< [7..0] Payload Filter 2 high order bits / Payload Mask high
                                                     order bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 7.                                                       */
      __IO uint32_t Data_byte_6 : 8;           /*!< [15..8] Payload Filter 2 high order bits / Payload Mask high
                                                     order bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 6.                                                       */
      __IO uint32_t Data_byte_5 : 8;           /*!< [23..16] Payload Filter 2 high order bits / Payload Mask high
                                                     order bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 5.                                                       */
      __IO uint32_t Data_byte_4 : 8;           /*!< [31..24] Payload Filter 2 high order bits / Payload Mask high
                                                     order bits for Pretended Networking payload filtering corresponding
                                                     to the data byte 4.                                                       */
    } CAN0_PL2_PLMASK_HI_b;
  } ;
  __I  uint32_t  RESERVED7[6];

  union {
    __I  uint32_t CAN0_WMB0_CS;                /*!< (@ 0x00000B40) Wake Up Message Buffer Register for C/S                    */

    struct {
            uint32_t            : 16;
      __I  uint32_t DLC        : 4;            /*!< [19..16] Length of Data in Bytes                                          */
      __I  uint32_t RTR        : 1;            /*!< [20..20] Remote Transmission Request Bit                                  */
      __I  uint32_t IDE        : 1;            /*!< [21..21] ID Extended Bit                                                  */
      __I  uint32_t SRR        : 1;            /*!< [22..22] Substitute Remote Request                                        */
            uint32_t            : 9;
    } CAN0_WMB0_CS_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB0_ID;                /*!< (@ 0x00000B44) Wake Up Message Buffer Register for ID                     */

    struct {
      __I  uint32_t ID         : 29;           /*!< [28..0] Received ID under Pretended Networking mode                       */
            uint32_t            : 3;
    } CAN0_WMB0_ID_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB0_D03;               /*!< (@ 0x00000B48) Wake Up Message Buffer Register for Data 0-3               */

    struct {
      __I  uint32_t Data_byte_3 : 8;           /*!< [7..0] Received payload corresponding to the data byte 3 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_2 : 8;           /*!< [15..8] Received payload corresponding to the data byte 2 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_1 : 8;           /*!< [23..16] Received payload corresponding to the data byte 1 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_0 : 8;           /*!< [31..24] Received payload corresponding to the data byte 0 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB0_D03_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB0_D47;               /*!< (@ 0x00000B4C) Wake Up Message Buffer Register Data 4-7                   */

    struct {
      __I  uint32_t Data_byte_7 : 8;           /*!< [7..0] Received payload corresponding to the data byte 7 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_6 : 8;           /*!< [15..8] Received payload corresponding to the data byte 6 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_5 : 8;           /*!< [23..16] Received payload corresponding to the data byte 5 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_4 : 8;           /*!< [31..24] Received payload corresponding to the data byte 4 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB0_D47_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB1_CS;                /*!< (@ 0x00000B50) Wake Up Message Buffer Register for C/S                    */

    struct {
            uint32_t            : 16;
      __I  uint32_t DLC        : 4;            /*!< [19..16] Length of Data in Bytes                                          */
      __I  uint32_t RTR        : 1;            /*!< [20..20] Remote Transmission Request Bit                                  */
      __I  uint32_t IDE        : 1;            /*!< [21..21] ID Extended Bit                                                  */
      __I  uint32_t SRR        : 1;            /*!< [22..22] Substitute Remote Request                                        */
            uint32_t            : 9;
    } CAN0_WMB1_CS_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB1_ID;                /*!< (@ 0x00000B54) Wake Up Message Buffer Register for ID                     */

    struct {
      __I  uint32_t ID         : 29;           /*!< [28..0] Received ID under Pretended Networking mode                       */
            uint32_t            : 3;
    } CAN0_WMB1_ID_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB1_D03;               /*!< (@ 0x00000B58) Wake Up Message Buffer Register for Data 0-3               */

    struct {
      __I  uint32_t Data_byte_3 : 8;           /*!< [7..0] Received payload corresponding to the data byte 3 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_2 : 8;           /*!< [15..8] Received payload corresponding to the data byte 2 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_1 : 8;           /*!< [23..16] Received payload corresponding to the data byte 1 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_0 : 8;           /*!< [31..24] Received payload corresponding to the data byte 0 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB1_D03_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB1_D47;               /*!< (@ 0x00000B5C) Wake Up Message Buffer Register Data 4-7                   */

    struct {
      __I  uint32_t Data_byte_7 : 8;           /*!< [7..0] Received payload corresponding to the data byte 7 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_6 : 8;           /*!< [15..8] Received payload corresponding to the data byte 6 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_5 : 8;           /*!< [23..16] Received payload corresponding to the data byte 5 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_4 : 8;           /*!< [31..24] Received payload corresponding to the data byte 4 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB1_D47_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB2_CS;                /*!< (@ 0x00000B60) Wake Up Message Buffer Register for C/S                    */

    struct {
            uint32_t            : 16;
      __I  uint32_t DLC        : 4;            /*!< [19..16] Length of Data in Bytes                                          */
      __I  uint32_t RTR        : 1;            /*!< [20..20] Remote Transmission Request Bit                                  */
      __I  uint32_t IDE        : 1;            /*!< [21..21] ID Extended Bit                                                  */
      __I  uint32_t SRR        : 1;            /*!< [22..22] Substitute Remote Request                                        */
            uint32_t            : 9;
    } CAN0_WMB2_CS_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB2_ID;                /*!< (@ 0x00000B64) Wake Up Message Buffer Register for ID                     */

    struct {
      __I  uint32_t ID         : 29;           /*!< [28..0] Received ID under Pretended Networking mode                       */
            uint32_t            : 3;
    } CAN0_WMB2_ID_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB2_D03;               /*!< (@ 0x00000B68) Wake Up Message Buffer Register for Data 0-3               */

    struct {
      __I  uint32_t Data_byte_3 : 8;           /*!< [7..0] Received payload corresponding to the data byte 3 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_2 : 8;           /*!< [15..8] Received payload corresponding to the data byte 2 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_1 : 8;           /*!< [23..16] Received payload corresponding to the data byte 1 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_0 : 8;           /*!< [31..24] Received payload corresponding to the data byte 0 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB2_D03_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB2_D47;               /*!< (@ 0x00000B6C) Wake Up Message Buffer Register Data 4-7                   */

    struct {
      __I  uint32_t Data_byte_7 : 8;           /*!< [7..0] Received payload corresponding to the data byte 7 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_6 : 8;           /*!< [15..8] Received payload corresponding to the data byte 6 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_5 : 8;           /*!< [23..16] Received payload corresponding to the data byte 5 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_4 : 8;           /*!< [31..24] Received payload corresponding to the data byte 4 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB2_D47_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB3_CS;                /*!< (@ 0x00000B70) Wake Up Message Buffer Register for C/S                    */

    struct {
            uint32_t            : 16;
      __I  uint32_t DLC        : 4;            /*!< [19..16] Length of Data in Bytes                                          */
      __I  uint32_t RTR        : 1;            /*!< [20..20] Remote Transmission Request Bit                                  */
      __I  uint32_t IDE        : 1;            /*!< [21..21] ID Extended Bit                                                  */
      __I  uint32_t SRR        : 1;            /*!< [22..22] Substitute Remote Request                                        */
            uint32_t            : 9;
    } CAN0_WMB3_CS_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB3_ID;                /*!< (@ 0x00000B74) Wake Up Message Buffer Register for ID                     */

    struct {
      __I  uint32_t ID         : 29;           /*!< [28..0] Received ID under Pretended Networking mode                       */
            uint32_t            : 3;
    } CAN0_WMB3_ID_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB3_D03;               /*!< (@ 0x00000B78) Wake Up Message Buffer Register for Data 0-3               */

    struct {
      __I  uint32_t Data_byte_3 : 8;           /*!< [7..0] Received payload corresponding to the data byte 3 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_2 : 8;           /*!< [15..8] Received payload corresponding to the data byte 2 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_1 : 8;           /*!< [23..16] Received payload corresponding to the data byte 1 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_0 : 8;           /*!< [31..24] Received payload corresponding to the data byte 0 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB3_D03_b;
  } ;

  union {
    __I  uint32_t CAN0_WMB3_D47;               /*!< (@ 0x00000B7C) Wake Up Message Buffer Register Data 4-7                   */

    struct {
      __I  uint32_t Data_byte_7 : 8;           /*!< [7..0] Received payload corresponding to the data byte 7 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_6 : 8;           /*!< [15..8] Received payload corresponding to the data byte 6 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_5 : 8;           /*!< [23..16] Received payload corresponding to the data byte 5 under
                                                     Pretended Networking mode                                                 */
      __I  uint32_t Data_byte_4 : 8;           /*!< [31..24] Received payload corresponding to the data byte 4 under
                                                     Pretended Networking mode                                                 */
    } CAN0_WMB3_D47_b;
  } ;
  __I  uint32_t  RESERVED8[32];

  union {
    __IO uint32_t CAN0_FDCTRL;                 /*!< (@ 0x00000C00) CAN FD Control Register                                    */

    struct {
      __I  uint32_t TDCVAL     : 6;            /*!< [5..0] Transceiver Delay Compensation Value                               */
            uint32_t            : 2;
      __IO uint32_t TDCOFF     : 5;            /*!< [12..8] Transceiver Delay Compensation Offset                             */
            uint32_t            : 1;
      __IO uint32_t TDCFAIL    : 1;            /*!< [14..14] Transceiver Delay Compensation Fail                              */
      __IO uint32_t TDCEN      : 1;            /*!< [15..15] Transceiver Delay Compensation Enable                            */
      __IO uint32_t MBDSR0     : 2;            /*!< [17..16] Message Buffer Data Size for Region 0                            */
            uint32_t            : 13;
      __IO uint32_t FDRATE     : 1;            /*!< [31..31] Bit Rate Switch Enable                                           */
    } CAN0_FDCTRL_b;
  } ;

  union {
    __IO uint32_t CAN0_FDCBT;                  /*!< (@ 0x00000C04) CAN FD Bit Timing Register                                 */

    struct {
      __IO uint32_t FPSEG2     : 3;            /*!< [2..0] Fast Phase Segment 2                                               */
            uint32_t            : 2;
      __IO uint32_t FPSEG1     : 3;            /*!< [7..5] Fast Phase Segment 1                                               */
            uint32_t            : 2;
      __IO uint32_t FPROPSEG   : 5;            /*!< [14..10] Fast Propagation Segment                                         */
            uint32_t            : 1;
      __IO uint32_t FRJW       : 3;            /*!< [18..16] Fast Resync Jump Width                                           */
            uint32_t            : 1;
      __IO uint32_t FPRESDIV   : 10;           /*!< [29..20] Fast Prescaler Division Factor                                   */
            uint32_t            : 2;
    } CAN0_FDCBT_b;
  } ;

  union {
    __I  uint32_t CAN0_FDCRC;                  /*!< (@ 0x00000C08) CAN FD CRC Register                                        */

    struct {
      __I  uint32_t FD_TXCRC   : 21;           /*!< [20..0] Extended Transmitted CRC value                                    */
            uint32_t            : 3;
      __I  uint32_t FD_MBCRC   : 7;            /*!< [30..24] CRC Mailbox Number for FD_TXCRC                                  */
            uint32_t            : 1;
    } CAN0_FDCRC_b;
  } ;
} CAN0_Type;                                    /*!< Size = 3084 (0xc0c)                                                       */


/* =========================================================================================================================== */
/* ================                                            SCG                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief System Clock Generator (SCG)
  */

typedef struct {                                /*!< (@ 0x40064000) SCG Structure                                              */

  union {
    __I  uint32_t SCG_VERID;                   /*!< (@ 0x00000000) Version ID Register                                        */

    struct {
      __I  uint32_t VERSION    : 32;           /*!< [31..0] SCG Version Number                                                */
    } SCG_VERID_b;
  } ;

  union {
    __I  uint32_t SCG_PARAM;                   /*!< (@ 0x00000004) Parameter Register                                         */

    struct {
      __I  uint32_t CLKPRES    : 8;            /*!< [7..0] Clock Present                                                      */
            uint32_t            : 19;
      __I  uint32_t DIVPRES    : 5;            /*!< [31..27] Divider Present                                                  */
    } SCG_PARAM_b;
  } ;
  __I  uint32_t  RESERVED[2];

  union {
    __I  uint32_t SCG_CSR;                     /*!< (@ 0x00000010) Clock Status Register                                      */

    struct {
      __I  uint32_t DIVSLOW    : 4;            /*!< [3..0] Slow Clock Divide Ratio                                            */
      __I  uint32_t DIVBUS     : 4;            /*!< [7..4] Bus Clock Divide Ratio                                             */
            uint32_t            : 8;
      __I  uint32_t DIVCORE    : 4;            /*!< [19..16] Core Clock Divide Ratio                                          */
            uint32_t            : 4;
      __I  uint32_t SCS        : 4;            /*!< [27..24] System Clock Source                                              */
            uint32_t            : 4;
    } SCG_CSR_b;
  } ;

  union {
    __IO uint32_t SCG_RCCR;                    /*!< (@ 0x00000014) Run Clock Control Register                                 */

    struct {
      __IO uint32_t DIVSLOW    : 4;            /*!< [3..0] Slow Clock Divide Ratio                                            */
      __IO uint32_t DIVBUS     : 4;            /*!< [7..4] Bus Clock Divide Ratio                                             */
            uint32_t            : 8;
      __IO uint32_t DIVCORE    : 4;            /*!< [19..16] Core Clock Divide Ratio                                          */
            uint32_t            : 4;
      __IO uint32_t SCS        : 4;            /*!< [27..24] System Clock Source                                              */
            uint32_t            : 4;
    } SCG_RCCR_b;
  } ;

  union {
    __IO uint32_t SCG_VCCR;                    /*!< (@ 0x00000018) VLPR Clock Control Register                                */

    struct {
      __IO uint32_t DIVSLOW    : 4;            /*!< [3..0] Slow Clock Divide Ratio                                            */
      __IO uint32_t DIVBUS     : 4;            /*!< [7..4] Bus Clock Divide Ratio                                             */
            uint32_t            : 8;
      __IO uint32_t DIVCORE    : 4;            /*!< [19..16] Core Clock Divide Ratio                                          */
            uint32_t            : 4;
      __IO uint32_t SCS        : 4;            /*!< [27..24] System Clock Source                                              */
            uint32_t            : 4;
    } SCG_VCCR_b;
  } ;

  union {
    __IO uint32_t SCG_HCCR;                    /*!< (@ 0x0000001C) HSRUN Clock Control Register                               */

    struct {
      __IO uint32_t DIVSLOW    : 4;            /*!< [3..0] Slow Clock Divide Ratio                                            */
      __IO uint32_t DIVBUS     : 4;            /*!< [7..4] Bus Clock Divide Ratio                                             */
            uint32_t            : 8;
      __IO uint32_t DIVCORE    : 4;            /*!< [19..16] Core Clock Divide Ratio                                          */
            uint32_t            : 4;
      __IO uint32_t SCS        : 4;            /*!< [27..24] System Clock Source                                              */
            uint32_t            : 4;
    } SCG_HCCR_b;
  } ;

  union {
    __IO uint32_t SCG_CLKOUTCNFG;              /*!< (@ 0x00000020) SCG CLKOUT Configuration Register                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t CLKOUTSEL  : 4;            /*!< [27..24] SCG Clkout Select                                                */
            uint32_t            : 4;
    } SCG_CLKOUTCNFG_b;
  } ;
  __I  uint32_t  RESERVED1[55];

  union {
    __IO uint32_t SCG_SOSCCSR;                 /*!< (@ 0x00000100) System OSC Control Status Register                         */

    struct {
      __IO uint32_t SOSCEN     : 1;            /*!< [0..0] System OSC Enable                                                  */
            uint32_t            : 15;
      __IO uint32_t SOSCCM     : 1;            /*!< [16..16] System OSC Clock Monitor                                         */
      __IO uint32_t SOSCCMRE   : 1;            /*!< [17..17] System OSC Clock Monitor Reset Enable                            */
            uint32_t            : 5;
      __IO uint32_t LK         : 1;            /*!< [23..23] Lock Register                                                    */
      __I  uint32_t SOSCVLD    : 1;            /*!< [24..24] System OSC Valid                                                 */
      __I  uint32_t SOSCSEL    : 1;            /*!< [25..25] System OSC Selected                                              */
      __IO uint32_t SOSCERR    : 1;            /*!< [26..26] System OSC Clock Error                                           */
            uint32_t            : 5;
    } SCG_SOSCCSR_b;
  } ;

  union {
    __IO uint32_t SCG_SOSCDIV;                 /*!< (@ 0x00000104) System OSC Divide Register                                 */

    struct {
      __IO uint32_t SOSCDIV1   : 3;            /*!< [2..0] System OSC Clock Divide 1                                          */
            uint32_t            : 5;
      __IO uint32_t SOSCDIV2   : 3;            /*!< [10..8] System OSC Clock Divide 2                                         */
            uint32_t            : 21;
    } SCG_SOSCDIV_b;
  } ;

  union {
    __IO uint32_t SCG_SOSCCFG;                 /*!< (@ 0x00000108) System Oscillator Configuration Register                   */

    struct {
            uint32_t            : 2;
      __IO uint32_t EREFS      : 1;            /*!< [2..2] External Reference Select                                          */
      __IO uint32_t HGO        : 1;            /*!< [3..3] High Gain Oscillator Select                                        */
      __IO uint32_t RANGE      : 2;            /*!< [5..4] System OSC Range Select                                            */
            uint32_t            : 26;
    } SCG_SOSCCFG_b;
  } ;
  __I  uint32_t  RESERVED2[61];

  union {
    __IO uint32_t SCG_SIRCCSR;                 /*!< (@ 0x00000200) Slow IRC Control Status Register                           */

    struct {
      __IO uint32_t SIRCEN     : 1;            /*!< [0..0] Slow IRC Enable                                                    */
      __IO uint32_t SIRCSTEN   : 1;            /*!< [1..1] Slow IRC Stop Enable                                               */
      __IO uint32_t SIRCLPEN   : 1;            /*!< [2..2] Slow IRC Low Power Enable                                          */
            uint32_t            : 20;
      __IO uint32_t LK         : 1;            /*!< [23..23] Lock Register                                                    */
      __I  uint32_t SIRCVLD    : 1;            /*!< [24..24] Slow IRC Valid                                                   */
      __I  uint32_t SIRCSEL    : 1;            /*!< [25..25] Slow IRC Selected                                                */
            uint32_t            : 6;
    } SCG_SIRCCSR_b;
  } ;

  union {
    __IO uint32_t SCG_SIRCDIV;                 /*!< (@ 0x00000204) Slow IRC Divide Register                                   */

    struct {
      __IO uint32_t SIRCDIV1   : 3;            /*!< [2..0] Slow IRC Clock Divide 1                                            */
            uint32_t            : 5;
      __IO uint32_t SIRCDIV2   : 3;            /*!< [10..8] Slow IRC Clock Divide 2                                           */
            uint32_t            : 21;
    } SCG_SIRCDIV_b;
  } ;

  union {
    __IO uint32_t SCG_SIRCCFG;                 /*!< (@ 0x00000208) Slow IRC Configuration Register                            */

    struct {
      __IO uint32_t RANGE      : 1;            /*!< [0..0] Frequency Range                                                    */
            uint32_t            : 31;
    } SCG_SIRCCFG_b;
  } ;
  __I  uint32_t  RESERVED3[61];

  union {
    __IO uint32_t SCG_FIRCCSR;                 /*!< (@ 0x00000300) Fast IRC Control Status Register                           */

    struct {
      __IO uint32_t FIRCEN     : 1;            /*!< [0..0] Fast IRC Enable                                                    */
            uint32_t            : 2;
      __IO uint32_t FIRCREGOFF : 1;            /*!< [3..3] Fast IRC Regulator Enable                                          */
            uint32_t            : 19;
      __IO uint32_t LK         : 1;            /*!< [23..23] Lock Register                                                    */
      __I  uint32_t FIRCVLD    : 1;            /*!< [24..24] Fast IRC Valid status                                            */
      __I  uint32_t FIRCSEL    : 1;            /*!< [25..25] Fast IRC Selected status                                         */
      __IO uint32_t FIRCERR    : 1;            /*!< [26..26] Fast IRC Clock Error                                             */
            uint32_t            : 5;
    } SCG_FIRCCSR_b;
  } ;

  union {
    __IO uint32_t SCG_FIRCDIV;                 /*!< (@ 0x00000304) Fast IRC Divide Register                                   */

    struct {
      __IO uint32_t FIRCDIV1   : 3;            /*!< [2..0] Fast IRC Clock Divide 1                                            */
            uint32_t            : 5;
      __IO uint32_t FIRCDIV2   : 3;            /*!< [10..8] Fast IRC Clock Divide 2                                           */
            uint32_t            : 21;
    } SCG_FIRCDIV_b;
  } ;

  union {
    __IO uint32_t SCG_FIRCCFG;                 /*!< (@ 0x00000308) Fast IRC Configuration Register                            */

    struct {
      __IO uint32_t RANGE      : 2;            /*!< [1..0] Frequency Range                                                    */
            uint32_t            : 30;
    } SCG_FIRCCFG_b;
  } ;
  __I  uint32_t  RESERVED4[189];

  union {
    __IO uint32_t SCG_SPLLCSR;                 /*!< (@ 0x00000600) System PLL Control Status Register                         */

    struct {
      __IO uint32_t SPLLEN     : 1;            /*!< [0..0] System PLL Enable                                                  */
            uint32_t            : 15;
      __IO uint32_t SPLLCM     : 1;            /*!< [16..16] System PLL Clock Monitor                                         */
      __IO uint32_t SPLLCMRE   : 1;            /*!< [17..17] System PLL Clock Monitor Reset Enable                            */
            uint32_t            : 5;
      __IO uint32_t LK         : 1;            /*!< [23..23] Lock Register                                                    */
      __I  uint32_t SPLLVLD    : 1;            /*!< [24..24] System PLL Valid                                                 */
      __I  uint32_t SPLLSEL    : 1;            /*!< [25..25] System PLL Selected                                              */
      __IO uint32_t SPLLERR    : 1;            /*!< [26..26] System PLL Clock Error                                           */
            uint32_t            : 5;
    } SCG_SPLLCSR_b;
  } ;

  union {
    __IO uint32_t SCG_SPLLDIV;                 /*!< (@ 0x00000604) System PLL Divide Register                                 */

    struct {
      __IO uint32_t SPLLDIV1   : 3;            /*!< [2..0] System PLL Clock Divide 1                                          */
            uint32_t            : 5;
      __IO uint32_t SPLLDIV2   : 3;            /*!< [10..8] System PLL Clock Divide 2                                         */
            uint32_t            : 21;
    } SCG_SPLLDIV_b;
  } ;

  union {
    __IO uint32_t SCG_SPLLCFG;                 /*!< (@ 0x00000608) System PLL Configuration Register                          */

    struct {
            uint32_t            : 8;
      __IO uint32_t PREDIV     : 3;            /*!< [10..8] PLL Reference Clock Divider                                       */
            uint32_t            : 5;
      __IO uint32_t MULT       : 5;            /*!< [20..16] System PLL Multiplier                                            */
            uint32_t            : 11;
    } SCG_SPLLCFG_b;
  } ;
} SCG_Type;                                     /*!< Size = 1548 (0x60c)                                                       */


/* =========================================================================================================================== */
/* ================                                            PCC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief PCC (PCC)
  */

typedef struct {                                /*!< (@ 0x40065000) PCC Structure                                              */
  __I  uint32_t  RESERVED[32];

  union {
    __IO uint32_t PCC_FTFC;                    /*!< (@ 0x00000080) PCC FTFC Register                                          */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FTFC_b;
  } ;

  union {
    __IO uint32_t PCC_DMAMUX;                  /*!< (@ 0x00000084) PCC DMAMUX Register                                        */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_DMAMUX_b;
  } ;
  __I  uint32_t  RESERVED1[2];

  union {
    __IO uint32_t PCC_FlexCAN0;                /*!< (@ 0x00000090) PCC FlexCAN0 Register                                      */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FlexCAN0_b;
  } ;

  union {
    __IO uint32_t PCC_FlexCAN1;                /*!< (@ 0x00000094) PCC FlexCAN1 Register                                      */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FlexCAN1_b;
  } ;

  union {
    __IO uint32_t PCC_FTM3;                    /*!< (@ 0x00000098) PCC FTM3 Register                                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FTM3_b;
  } ;

  union {
    __IO uint32_t PCC_ADC1;                    /*!< (@ 0x0000009C) PCC ADC1 Register                                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_ADC1_b;
  } ;
  __I  uint32_t  RESERVED2[4];

  union {
    __IO uint32_t PCC_LPSPI0;                  /*!< (@ 0x000000B0) PCC LPSPI0 Register                                        */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_LPSPI0_b;
  } ;

  union {
    __IO uint32_t PCC_LPSPI1;                  /*!< (@ 0x000000B4) PCC LPSPI1 Register                                        */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_LPSPI1_b;
  } ;
  __I  uint32_t  RESERVED3[3];

  union {
    __IO uint32_t PCC_PDB1;                    /*!< (@ 0x000000C4) PCC PDB1 Register                                          */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_PDB1_b;
  } ;

  union {
    __IO uint32_t PCC_CRC;                     /*!< (@ 0x000000C8) PCC CRC Register                                           */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_CRC_b;
  } ;
  __I  uint32_t  RESERVED4[3];

  union {
    __IO uint32_t PCC_PDB0;                    /*!< (@ 0x000000D8) PCC PDB0 Register                                          */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_PDB0_b;
  } ;

  union {
    __IO uint32_t PCC_LPIT;                    /*!< (@ 0x000000DC) PCC LPIT Register                                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_LPIT_b;
  } ;

  union {
    __IO uint32_t PCC_FTM0;                    /*!< (@ 0x000000E0) PCC FTM0 Register                                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FTM0_b;
  } ;

  union {
    __IO uint32_t PCC_FTM1;                    /*!< (@ 0x000000E4) PCC FTM1 Register                                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FTM1_b;
  } ;

  union {
    __IO uint32_t PCC_FTM2;                    /*!< (@ 0x000000E8) PCC FTM2 Register                                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FTM2_b;
  } ;

  union {
    __IO uint32_t PCC_ADC0;                    /*!< (@ 0x000000EC) PCC ADC0 Register                                          */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_ADC0_b;
  } ;
  __I  uint32_t  RESERVED5;

  union {
    __IO uint32_t PCC_RTC;                     /*!< (@ 0x000000F4) PCC RTC Register                                           */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_RTC_b;
  } ;
  __I  uint32_t  RESERVED6[2];

  union {
    __IO uint32_t PCC_LPTMR0;                  /*!< (@ 0x00000100) PCC LPTMR0 Register                                        */

    struct {
      __IO uint32_t PCD        : 3;            /*!< [2..0] Peripheral Clock Divider Select                                    */
      __IO uint32_t FRAC       : 1;            /*!< [3..3] Peripheral Clock Divider Fraction                                  */
            uint32_t            : 20;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_LPTMR0_b;
  } ;
  __I  uint32_t  RESERVED7[8];

  union {
    __IO uint32_t PCC_PORTA;                   /*!< (@ 0x00000124) PCC PORTA Register                                         */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_PORTA_b;
  } ;

  union {
    __IO uint32_t PCC_PORTB;                   /*!< (@ 0x00000128) PCC PORTB Register                                         */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_PORTB_b;
  } ;

  union {
    __IO uint32_t PCC_PORTC;                   /*!< (@ 0x0000012C) PCC PORTC Register                                         */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_PORTC_b;
  } ;

  union {
    __IO uint32_t PCC_PORTD;                   /*!< (@ 0x00000130) PCC PORTD Register                                         */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_PORTD_b;
  } ;

  union {
    __IO uint32_t PCC_PORTE;                   /*!< (@ 0x00000134) PCC PORTE Register                                         */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_PORTE_b;
  } ;
  __I  uint32_t  RESERVED8[12];

  union {
    __IO uint32_t PCC_FlexIO;                  /*!< (@ 0x00000168) PCC FlexIO Register                                        */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_FlexIO_b;
  } ;
  __I  uint32_t  RESERVED9[6];

  union {
    __IO uint32_t PCC_EWM;                     /*!< (@ 0x00000184) PCC EWM Register                                           */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_EWM_b;
  } ;
  __I  uint32_t  RESERVED10[4];

  union {
    __IO uint32_t PCC_LPI2C0;                  /*!< (@ 0x00000198) PCC LPI2C0 Register                                        */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_LPI2C0_b;
  } ;
  __I  uint32_t  RESERVED11[3];

  union {
    __IO uint32_t PCC_LPUART0;                 /*!< (@ 0x000001A8) PCC LPUART0 Register                                       */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_LPUART0_b;
  } ;

  union {
    __IO uint32_t PCC_LPUART1;                 /*!< (@ 0x000001AC) PCC LPUART1 Register                                       */

    struct {
            uint32_t            : 24;
      __IO uint32_t PCS        : 3;            /*!< [26..24] Peripheral Clock Source Select                                   */
            uint32_t            : 3;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_LPUART1_b;
  } ;
  __I  uint32_t  RESERVED12[7];

  union {
    __IO uint32_t PCC_CMP0;                    /*!< (@ 0x000001CC) PCC CMP0 Register                                          */

    struct {
            uint32_t            : 30;
      __IO uint32_t CGC        : 1;            /*!< [30..30] Clock Gate Control                                               */
      __I  uint32_t PR         : 1;            /*!< [31..31] Present                                                          */
    } PCC_CMP0_b;
  } ;
} PCC_Type;                                     /*!< Size = 464 (0x1d0)                                                        */



/* =========================================================================================================================== */
/* ================                                            PTD                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief General Purpose Input/Output (PTD)
  */

typedef struct {                                /*!< (@ 0x400FF0C0) PTD Structure                                              */

  union {
    __IO uint32_t GPIOD_PDOR;                  /*!< (@ 0x00000000) Port Data Output Register                                  */

    struct {
      __IO uint32_t PDO        : 32;           /*!< [31..0] Port Data Output                                                  */
    } GPIOD_PDOR_b;
  } ;

  union {
    __O  uint32_t GPIOD_PSOR;                  /*!< (@ 0x00000004) Port Set Output Register                                   */

    struct {
      __O  uint32_t PTSO       : 32;           /*!< [31..0] Port Set Output                                                   */
    } GPIOD_PSOR_b;
  } ;

  union {
    __O  uint32_t GPIOD_PCOR;                  /*!< (@ 0x00000008) Port Clear Output Register                                 */

    struct {
      __O  uint32_t PTCO       : 32;           /*!< [31..0] Port Clear Output                                                 */
    } GPIOD_PCOR_b;
  } ;

  union {
    __O  uint32_t GPIOD_PTOR;                  /*!< (@ 0x0000000C) Port Toggle Output Register                                */

    struct {
      __O  uint32_t PTTO       : 32;           /*!< [31..0] Port Toggle Output                                                */
    } GPIOD_PTOR_b;
  } ;

  union {
    __I  uint32_t GPIOD_PDIR;                  /*!< (@ 0x00000010) Port Data Input Register                                   */

    struct {
      __I  uint32_t PDI        : 32;           /*!< [31..0] Port Data Input                                                   */
    } GPIOD_PDIR_b;
  } ;

  union {
    __IO uint32_t GPIOD_PDDR;                  /*!< (@ 0x00000014) Port Data Direction Register                               */

    struct {
      __IO uint32_t PDD        : 32;           /*!< [31..0] Port Data Direction                                               */
    } GPIOD_PDDR_b;
  } ;

  union {
    __IO uint32_t GPIOD_PIDR;                  /*!< (@ 0x00000018) Port Input Disable Register                                */

    struct {
      __IO uint32_t PID        : 32;           /*!< [31..0] Port Input Disable                                                */
    } GPIOD_PIDR_b;
  } ;
} PTD_Type;                                     /*!< Size = 28 (0x1c)                                                          */


/* =========================================================================================================================== */
/* ================                                           PORTD                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Pin Control and Interrupts (PORTD)
  */

typedef struct {                                /*!< (@ 0x4004C000) PORTD Structure                                            */

  union {
    __IO uint32_t PORTD_PCR0;                  /*!< (@ 0x00000000) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR0_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR1;                  /*!< (@ 0x00000004) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR1_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR2;                  /*!< (@ 0x00000008) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR2_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR3;                  /*!< (@ 0x0000000C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 2;
      __IO uint32_t PFE        : 1;            /*!< [4..4] Passive Filter Enable                                              */
            uint32_t            : 3;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR3_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR4;                  /*!< (@ 0x00000010) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR4_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR5;                  /*!< (@ 0x00000014) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR5_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR6;                  /*!< (@ 0x00000018) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR6_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR7;                  /*!< (@ 0x0000001C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR7_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR8;                  /*!< (@ 0x00000020) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR8_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR9;                  /*!< (@ 0x00000024) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR9_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR10;                 /*!< (@ 0x00000028) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR10_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR11;                 /*!< (@ 0x0000002C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR11_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR12;                 /*!< (@ 0x00000030) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR12_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR13;                 /*!< (@ 0x00000034) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR13_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR14;                 /*!< (@ 0x00000038) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR14_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR15;                 /*!< (@ 0x0000003C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR15_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR16;                 /*!< (@ 0x00000040) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR16_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR17;                 /*!< (@ 0x00000044) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR17_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR18;                 /*!< (@ 0x00000048) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR18_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR19;                 /*!< (@ 0x0000004C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR19_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR20;                 /*!< (@ 0x00000050) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR20_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR21;                 /*!< (@ 0x00000054) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR21_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR22;                 /*!< (@ 0x00000058) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR22_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR23;                 /*!< (@ 0x0000005C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR23_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR24;                 /*!< (@ 0x00000060) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR24_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR25;                 /*!< (@ 0x00000064) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR25_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR26;                 /*!< (@ 0x00000068) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR26_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR27;                 /*!< (@ 0x0000006C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR27_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR28;                 /*!< (@ 0x00000070) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR28_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR29;                 /*!< (@ 0x00000074) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR29_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR30;                 /*!< (@ 0x00000078) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR30_b;
  } ;

  union {
    __IO uint32_t PORTD_PCR31;                 /*!< (@ 0x0000007C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTD_PCR31_b;
  } ;

  union {
    __O  uint32_t PORTD_GPCLR;                 /*!< (@ 0x00000080) Global Pin Control Low Register                            */

    struct {
      __O  uint32_t GPWD       : 16;           /*!< [15..0] Global Pin Write Data                                             */
      __O  uint32_t GPWE       : 16;           /*!< [31..16] Global Pin Write Enable                                          */
    } PORTD_GPCLR_b;
  } ;

  union {
    __O  uint32_t PORTD_GPCHR;                 /*!< (@ 0x00000084) Global Pin Control High Register                           */

    struct {
      __O  uint32_t GPWD       : 16;           /*!< [15..0] Global Pin Write Data                                             */
      __O  uint32_t GPWE       : 16;           /*!< [31..16] Global Pin Write Enable                                          */
    } PORTD_GPCHR_b;
  } ;

  union {
    __O  uint32_t PORTD_GICLR;                 /*!< (@ 0x00000088) Global Interrupt Control Low Register                      */

    struct {
      __O  uint32_t GIWE       : 16;           /*!< [15..0] Global Interrupt Write Enable                                     */
      __O  uint32_t GIWD       : 16;           /*!< [31..16] Global Interrupt Write Data                                      */
    } PORTD_GICLR_b;
  } ;

  union {
    __O  uint32_t PORTD_GICHR;                 /*!< (@ 0x0000008C) Global Interrupt Control High Register                     */

    struct {
      __O  uint32_t GIWE       : 16;           /*!< [15..0] Global Interrupt Write Enable                                     */
      __O  uint32_t GIWD       : 16;           /*!< [31..16] Global Interrupt Write Data                                      */
    } PORTD_GICHR_b;
  } ;
  __I  uint32_t  RESERVED[4];

  union {
    __IO uint32_t PORTD_ISFR;                  /*!< (@ 0x000000A0) Interrupt Status Flag Register                             */

    struct {
      __IO uint32_t ISF        : 32;           /*!< [31..0] Interrupt Status Flag                                             */
    } PORTD_ISFR_b;
  } ;
  __I  uint32_t  RESERVED1[7];

  union {
    __IO uint32_t PORTD_DFER;                  /*!< (@ 0x000000C0) Digital Filter Enable Register                             */

    struct {
      __IO uint32_t DFE        : 32;           /*!< [31..0] Digital Filter Enable                                             */
    } PORTD_DFER_b;
  } ;

  union {
    __IO uint32_t PORTD_DFCR;                  /*!< (@ 0x000000C4) Digital Filter Clock Register                              */

    struct {
      __IO uint32_t CS         : 1;            /*!< [0..0] Clock Source                                                       */
            uint32_t            : 31;
    } PORTD_DFCR_b;
  } ;

  union {
    __IO uint32_t PORTD_DFWR;                  /*!< (@ 0x000000C8) Digital Filter Width Register                              */

    struct {
      __IO uint32_t FILT       : 5;            /*!< [4..0] Filter Length                                                      */
            uint32_t            : 27;
    } PORTD_DFWR_b;
  } ;
} PORTD_Type;                                   /*!< Size = 204 (0xcc)                                                         */



/* =========================================================================================================================== */
/* ================                                           PORTE                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Pin Control and Interrupts (PORTE)
  */

typedef struct {                                /*!< (@ 0x4004D000) PORTE Structure                                            */

  union {
    __IO uint32_t PORTE_PCR0;                  /*!< (@ 0x00000000) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR0_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR1;                  /*!< (@ 0x00000004) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR1_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR2;                  /*!< (@ 0x00000008) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR2_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR3;                  /*!< (@ 0x0000000C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR3_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR4;                  /*!< (@ 0x00000010) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR4_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR5;                  /*!< (@ 0x00000014) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR5_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR6;                  /*!< (@ 0x00000018) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR6_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR7;                  /*!< (@ 0x0000001C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR7_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR8;                  /*!< (@ 0x00000020) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR8_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR9;                  /*!< (@ 0x00000024) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR9_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR10;                 /*!< (@ 0x00000028) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR10_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR11;                 /*!< (@ 0x0000002C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR11_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR12;                 /*!< (@ 0x00000030) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR12_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR13;                 /*!< (@ 0x00000034) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR13_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR14;                 /*!< (@ 0x00000038) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR14_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR15;                 /*!< (@ 0x0000003C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR15_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR16;                 /*!< (@ 0x00000040) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR16_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR17;                 /*!< (@ 0x00000044) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR17_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR18;                 /*!< (@ 0x00000048) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR18_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR19;                 /*!< (@ 0x0000004C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR19_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR20;                 /*!< (@ 0x00000050) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR20_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR21;                 /*!< (@ 0x00000054) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR21_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR22;                 /*!< (@ 0x00000058) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR22_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR23;                 /*!< (@ 0x0000005C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR23_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR24;                 /*!< (@ 0x00000060) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR24_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR25;                 /*!< (@ 0x00000064) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 4;
      __IO uint32_t DSE        : 1;            /*!< [6..6] Drive Strength Enable                                              */
            uint32_t            : 1;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR25_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR26;                 /*!< (@ 0x00000068) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR26_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR27;                 /*!< (@ 0x0000006C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR27_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR28;                 /*!< (@ 0x00000070) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR28_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR29;                 /*!< (@ 0x00000074) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR29_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR30;                 /*!< (@ 0x00000078) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR30_b;
  } ;

  union {
    __IO uint32_t PORTE_PCR31;                 /*!< (@ 0x0000007C) Pin Control Register n                                     */

    struct {
      __IO uint32_t PS         : 1;            /*!< [0..0] Pull Select                                                        */
      __IO uint32_t PE         : 1;            /*!< [1..1] Pull Enable                                                        */
            uint32_t            : 6;
      __IO uint32_t MUX        : 3;            /*!< [10..8] Pin Mux Control                                                   */
            uint32_t            : 4;
      __IO uint32_t LK         : 1;            /*!< [15..15] Lock Register                                                    */
      __IO uint32_t IRQC       : 4;            /*!< [19..16] Interrupt Configuration                                          */
            uint32_t            : 4;
      __IO uint32_t ISF        : 1;            /*!< [24..24] Interrupt Status Flag                                            */
            uint32_t            : 7;
    } PORTE_PCR31_b;
  } ;

  union {
    __O  uint32_t PORTE_GPCLR;                 /*!< (@ 0x00000080) Global Pin Control Low Register                            */

    struct {
      __O  uint32_t GPWD       : 16;           /*!< [15..0] Global Pin Write Data                                             */
      __O  uint32_t GPWE       : 16;           /*!< [31..16] Global Pin Write Enable                                          */
    } PORTE_GPCLR_b;
  } ;

  union {
    __O  uint32_t PORTE_GPCHR;                 /*!< (@ 0x00000084) Global Pin Control High Register                           */

    struct {
      __O  uint32_t GPWD       : 16;           /*!< [15..0] Global Pin Write Data                                             */
      __O  uint32_t GPWE       : 16;           /*!< [31..16] Global Pin Write Enable                                          */
    } PORTE_GPCHR_b;
  } ;

  union {
    __O  uint32_t PORTE_GICLR;                 /*!< (@ 0x00000088) Global Interrupt Control Low Register                      */

    struct {
      __O  uint32_t GIWE       : 16;           /*!< [15..0] Global Interrupt Write Enable                                     */
      __O  uint32_t GIWD       : 16;           /*!< [31..16] Global Interrupt Write Data                                      */
    } PORTE_GICLR_b;
  } ;

  union {
    __O  uint32_t PORTE_GICHR;                 /*!< (@ 0x0000008C) Global Interrupt Control High Register                     */

    struct {
      __O  uint32_t GIWE       : 16;           /*!< [15..0] Global Interrupt Write Enable                                     */
      __O  uint32_t GIWD       : 16;           /*!< [31..16] Global Interrupt Write Data                                      */
    } PORTE_GICHR_b;
  } ;
  __I  uint32_t  RESERVED[4];

  union {
    __IO uint32_t PORTE_ISFR;                  /*!< (@ 0x000000A0) Interrupt Status Flag Register                             */

    struct {
      __IO uint32_t ISF        : 32;           /*!< [31..0] Interrupt Status Flag                                             */
    } PORTE_ISFR_b;
  } ;
  __I  uint32_t  RESERVED1[7];

  union {
    __IO uint32_t PORTE_DFER;                  /*!< (@ 0x000000C0) Digital Filter Enable Register                             */

    struct {
      __IO uint32_t DFE        : 32;           /*!< [31..0] Digital Filter Enable                                             */
    } PORTE_DFER_b;
  } ;

  union {
    __IO uint32_t PORTE_DFCR;                  /*!< (@ 0x000000C4) Digital Filter Clock Register                              */

    struct {
      __IO uint32_t CS         : 1;            /*!< [0..0] Clock Source                                                       */
            uint32_t            : 31;
    } PORTE_DFCR_b;
  } ;

  union {
    __IO uint32_t PORTE_DFWR;                  /*!< (@ 0x000000C8) Digital Filter Width Register                              */

    struct {
      __IO uint32_t FILT       : 5;            /*!< [4..0] Filter Length                                                      */
            uint32_t            : 27;
    } PORTE_DFWR_b;
  } ;
} PORTE_Type;                                   /*!< Size = 204 (0xcc)                                                         */

#define CAN0          ((CAN0_Type*)  CAN0_BASE)
#define SCG           ((SCG_Type*)   SCG_BASE)
#define PCC           ((PCC_Type*)   PCC_BASE)
#define PORTD         ((PORTD_Type*) PORTD_BASE)
#define PORTE         ((PORTE_Type*) PORTE_BASE)
#define PTD           ((PTD_Type*)   PTD_BASE)

/* =========================================================================================================================== */
/* ================                                           CAN0                                            ================ */
/* =========================================================================================================================== */

/* =======================================================  CAN0_MCR  ======================================================== */
/* ===============================================  CAN0 CAN0_MCR IDAM [8..9]  =============================================== */
typedef enum {                                  /*!< CAN0_MCR_IDAM                                                             */
  CAN0_MCR_IDAM_00                     = 0,     /*!< 00 : Format A: One full ID (standard and extended) per ID Filter
                                                     Table element.                                                            */
  CAN0_MCR_IDAM_01                     = 1,     /*!< 01 : Format B: Two full standard IDs or two partial 14-bit (standard
                                                     and extended) IDs per ID Filter Table element.                            */
  CAN0_MCR_IDAM_10                     = 2,     /*!< 10 : Format C: Four partial 8-bit Standard IDs per ID Filter
                                                     Table element.                                                            */
  CAN0_MCR_IDAM_11                     = 3,     /*!< 11 : Format D: All frames rejected.                                       */
} CAN0_MCR_IDAM_Enum;

/* ==============================================  CAN0 CAN0_MCR FDEN [11..11]  ============================================== */
typedef enum {                                  /*!< CAN0_MCR_FDEN                                                             */
  CAN0_MCR_FDEN_1                      = 1,     /*!< 1 : CAN FD is enabled. FlexCAN is able to receive and transmit
                                                     messages in both CAN FD and CAN 2.0 formats.                              */
  CAN0_MCR_FDEN_0                      = 0,     /*!< 0 : CAN FD is disabled. FlexCAN is able to receive and transmit
                                                     messages in CAN 2.0 format.                                               */
} CAN0_MCR_FDEN_Enum;

/* ==============================================  CAN0 CAN0_MCR AEN [12..12]  =============================================== */
typedef enum {                                  /*!< CAN0_MCR_AEN                                                              */
  CAN0_MCR_AEN_0                       = 0,     /*!< 0 : Abort disabled.                                                       */
  CAN0_MCR_AEN_1                       = 1,     /*!< 1 : Abort enabled.                                                        */
} CAN0_MCR_AEN_Enum;

/* ============================================  CAN0 CAN0_MCR LPRIOEN [13..13]  ============================================= */
typedef enum {                                  /*!< CAN0_MCR_LPRIOEN                                                          */
  CAN0_MCR_LPRIOEN_0                   = 0,     /*!< 0 : Local Priority disabled.                                              */
  CAN0_MCR_LPRIOEN_1                   = 1,     /*!< 1 : Local Priority enabled.                                               */
} CAN0_MCR_LPRIOEN_Enum;

/* ============================================  CAN0 CAN0_MCR PNET_EN [14..14]  ============================================= */
typedef enum {                                  /*!< CAN0_MCR_PNET_EN                                                          */
  CAN0_MCR_PNET_EN_0                   = 0,     /*!< 0 : Pretended Networking mode is disabled.                                */
  CAN0_MCR_PNET_EN_1                   = 1,     /*!< 1 : Pretended Networking mode is enabled.                                 */
} CAN0_MCR_PNET_EN_Enum;

/* ==============================================  CAN0 CAN0_MCR DMA [15..15]  =============================================== */
typedef enum {                                  /*!< CAN0_MCR_DMA                                                              */
  CAN0_MCR_DMA_0                       = 0,     /*!< 0 : DMA feature for RX FIFO disabled.                                     */
  CAN0_MCR_DMA_1                       = 1,     /*!< 1 : DMA feature for RX FIFO enabled.                                      */
} CAN0_MCR_DMA_Enum;

/* ==============================================  CAN0 CAN0_MCR IRMQ [16..16]  ============================================== */
typedef enum {                                  /*!< CAN0_MCR_IRMQ                                                             */
  CAN0_MCR_IRMQ_0                      = 0,     /*!< 0 : Individual Rx masking and queue feature are disabled. For
                                                     backward compatibility with legacy applications, the reading
                                                     of C/S word locks the MB even if it is EMPTY.                             */
  CAN0_MCR_IRMQ_1                      = 1,     /*!< 1 : Individual Rx masking and queue feature are enabled.                  */
} CAN0_MCR_IRMQ_Enum;

/* =============================================  CAN0 CAN0_MCR SRXDIS [17..17]  ============================================= */
typedef enum {                                  /*!< CAN0_MCR_SRXDIS                                                           */
  CAN0_MCR_SRXDIS_0                    = 0,     /*!< 0 : Self reception enabled.                                               */
  CAN0_MCR_SRXDIS_1                    = 1,     /*!< 1 : Self reception disabled.                                              */
} CAN0_MCR_SRXDIS_Enum;

/* =============================================  CAN0 CAN0_MCR LPMACK [20..20]  ============================================= */
typedef enum {                                  /*!< CAN0_MCR_LPMACK                                                           */
  CAN0_MCR_LPMACK_0                    = 0,     /*!< 0 : FlexCAN is not in a low-power mode.                                   */
  CAN0_MCR_LPMACK_1                    = 1,     /*!< 1 : FlexCAN is in a low-power mode.                                       */
} CAN0_MCR_LPMACK_Enum;

/* =============================================  CAN0 CAN0_MCR WRNEN [21..21]  ============================================== */
typedef enum {                                  /*!< CAN0_MCR_WRNEN                                                            */
  CAN0_MCR_WRNEN_0                     = 0,     /*!< 0 : TWRNINT and RWRNINT bits are zero, independent of the values
                                                     in the error counters.                                                    */
  CAN0_MCR_WRNEN_1                     = 1,     /*!< 1 : TWRNINT and RWRNINT bits are set when the respective error
                                                     counter transitions from less than 96 to greater than or
                                                     equal to 96.                                                              */
} CAN0_MCR_WRNEN_Enum;

/* =============================================  CAN0 CAN0_MCR FRZACK [24..24]  ============================================= */
typedef enum {                                  /*!< CAN0_MCR_FRZACK                                                           */
  CAN0_MCR_FRZACK_0                    = 0,     /*!< 0 : FlexCAN not in Freeze mode, prescaler running.                        */
  CAN0_MCR_FRZACK_1                    = 1,     /*!< 1 : FlexCAN in Freeze mode, prescaler stopped.                            */
} CAN0_MCR_FRZACK_Enum;

/* ============================================  CAN0 CAN0_MCR SOFTRST [25..25]  ============================================= */
typedef enum {                                  /*!< CAN0_MCR_SOFTRST                                                          */
  CAN0_MCR_SOFTRST_0                   = 0,     /*!< 0 : No reset request.                                                     */
  CAN0_MCR_SOFTRST_1                   = 1,     /*!< 1 : Resets the registers affected by soft reset.                          */
} CAN0_MCR_SOFTRST_Enum;

/* =============================================  CAN0 CAN0_MCR NOTRDY [27..27]  ============================================= */
typedef enum {                                  /*!< CAN0_MCR_NOTRDY                                                           */
  CAN0_MCR_NOTRDY_0                    = 0,     /*!< 0 : FlexCAN module is either in Normal mode, Listen-Only mode
                                                     or Loop-Back mode.                                                        */
} CAN0_MCR_NOTRDY_Enum;

/* ==============================================  CAN0 CAN0_MCR HALT [28..28]  ============================================== */
typedef enum {                                  /*!< CAN0_MCR_HALT                                                             */
  CAN0_MCR_HALT_0                      = 0,     /*!< 0 : No Freeze mode request.                                               */
  CAN0_MCR_HALT_1                      = 1,     /*!< 1 : Enters Freeze mode if the FRZ bit is asserted.                        */
} CAN0_MCR_HALT_Enum;

/* ==============================================  CAN0 CAN0_MCR RFEN [29..29]  ============================================== */
typedef enum {                                  /*!< CAN0_MCR_RFEN                                                             */
  CAN0_MCR_RFEN_0                      = 0,     /*!< 0 : Rx FIFO not enabled.                                                  */
  CAN0_MCR_RFEN_1                      = 1,     /*!< 1 : Rx FIFO enabled.                                                      */
} CAN0_MCR_RFEN_Enum;

/* ==============================================  CAN0 CAN0_MCR FRZ [30..30]  =============================================== */
typedef enum {                                  /*!< CAN0_MCR_FRZ                                                              */
  CAN0_MCR_FRZ_0                       = 0,     /*!< 0 : Not enabled to enter Freeze mode.                                     */
  CAN0_MCR_FRZ_1                       = 1,     /*!< 1 : Enabled to enter Freeze mode.                                         */
} CAN0_MCR_FRZ_Enum;

/* ==============================================  CAN0 CAN0_MCR MDIS [31..31]  ============================================== */
typedef enum {                                  /*!< CAN0_MCR_MDIS                                                             */
  CAN0_MCR_MDIS_0                      = 0,     /*!< 0 : Enable the FlexCAN module.                                            */
  CAN0_MCR_MDIS_1                      = 1,     /*!< 1 : Disable the FlexCAN module.                                           */
} CAN0_MCR_MDIS_Enum;

/* ======================================================  CAN0_CTRL1  ======================================================= */
/* ==============================================  CAN0 CAN0_CTRL1 LOM [3..3]  =============================================== */
typedef enum {                                  /*!< CAN0_CTRL1_LOM                                                            */
  CAN0_CTRL1_LOM_0                     = 0,     /*!< 0 : Listen-Only mode is deactivated.                                      */
  CAN0_CTRL1_LOM_1                     = 1,     /*!< 1 : FlexCAN module operates in Listen-Only mode.                          */
} CAN0_CTRL1_LOM_Enum;

/* ==============================================  CAN0 CAN0_CTRL1 LBUF [4..4]  ============================================== */
typedef enum {                                  /*!< CAN0_CTRL1_LBUF                                                           */
  CAN0_CTRL1_LBUF_0                    = 0,     /*!< 0 : Buffer with highest priority is transmitted first.                    */
  CAN0_CTRL1_LBUF_1                    = 1,     /*!< 1 : Lowest number buffer is transmitted first.                            */
} CAN0_CTRL1_LBUF_Enum;

/* ==============================================  CAN0 CAN0_CTRL1 TSYN [5..5]  ============================================== */
typedef enum {                                  /*!< CAN0_CTRL1_TSYN                                                           */
  CAN0_CTRL1_TSYN_0                    = 0,     /*!< 0 : Timer Sync feature disabled                                           */
  CAN0_CTRL1_TSYN_1                    = 1,     /*!< 1 : Timer Sync feature enabled                                            */
} CAN0_CTRL1_TSYN_Enum;

/* ============================================  CAN0 CAN0_CTRL1 BOFFREC [6..6]  ============================================= */
typedef enum {                                  /*!< CAN0_CTRL1_BOFFREC                                                        */
  CAN0_CTRL1_BOFFREC_0                 = 0,     /*!< 0 : Automatic recovering from Bus Off state enabled.                      */
  CAN0_CTRL1_BOFFREC_1                 = 1,     /*!< 1 : Automatic recovering from Bus Off state disabled.                     */
} CAN0_CTRL1_BOFFREC_Enum;

/* ==============================================  CAN0 CAN0_CTRL1 SMP [7..7]  =============================================== */
typedef enum {                                  /*!< CAN0_CTRL1_SMP                                                            */
  CAN0_CTRL1_SMP_0                     = 0,     /*!< 0 : Just one sample is used to determine the bit value.                   */
  CAN0_CTRL1_SMP_1                     = 1,     /*!< 1 : Three samples are used to determine the value of the received
                                                     bit: the regular one (sample point) and 2 preceding samples;
                                                     a majority rule is used.                                                  */
} CAN0_CTRL1_SMP_Enum;

/* ===========================================  CAN0 CAN0_CTRL1 RWRNMSK [10..10]  ============================================ */
typedef enum {                                  /*!< CAN0_CTRL1_RWRNMSK                                                        */
  CAN0_CTRL1_RWRNMSK_0                 = 0,     /*!< 0 : Rx Warning Interrupt disabled.                                        */
  CAN0_CTRL1_RWRNMSK_1                 = 1,     /*!< 1 : Rx Warning Interrupt enabled.                                         */
} CAN0_CTRL1_RWRNMSK_Enum;

/* ===========================================  CAN0 CAN0_CTRL1 TWRNMSK [11..11]  ============================================ */
typedef enum {                                  /*!< CAN0_CTRL1_TWRNMSK                                                        */
  CAN0_CTRL1_TWRNMSK_0                 = 0,     /*!< 0 : Tx Warning Interrupt disabled.                                        */
  CAN0_CTRL1_TWRNMSK_1                 = 1,     /*!< 1 : Tx Warning Interrupt enabled.                                         */
} CAN0_CTRL1_TWRNMSK_Enum;

/* =============================================  CAN0 CAN0_CTRL1 LPB [12..12]  ============================================== */
typedef enum {                                  /*!< CAN0_CTRL1_LPB                                                            */
  CAN0_CTRL1_LPB_0                     = 0,     /*!< 0 : Loop Back disabled.                                                   */
  CAN0_CTRL1_LPB_1                     = 1,     /*!< 1 : Loop Back enabled.                                                    */
} CAN0_CTRL1_LPB_Enum;

/* ============================================  CAN0 CAN0_CTRL1 CLKSRC [13..13]  ============================================ */
typedef enum {                                  /*!< CAN0_CTRL1_CLKSRC                                                         */
  CAN0_CTRL1_CLKSRC_0                  = 0,     /*!< 0 : The CAN engine clock source is the oscillator clock. Under
                                                     this condition, the oscillator clock frequency must be
                                                     lower than the bus clock.                                                 */
  CAN0_CTRL1_CLKSRC_1                  = 1,     /*!< 1 : The CAN engine clock source is the peripheral clock.                  */
} CAN0_CTRL1_CLKSRC_Enum;

/* ============================================  CAN0 CAN0_CTRL1 ERRMSK [14..14]  ============================================ */
typedef enum {                                  /*!< CAN0_CTRL1_ERRMSK                                                         */
  CAN0_CTRL1_ERRMSK_0                  = 0,     /*!< 0 : Error interrupt disabled.                                             */
  CAN0_CTRL1_ERRMSK_1                  = 1,     /*!< 1 : Error interrupt enabled.                                              */
} CAN0_CTRL1_ERRMSK_Enum;

/* ===========================================  CAN0 CAN0_CTRL1 BOFFMSK [15..15]  ============================================ */
typedef enum {                                  /*!< CAN0_CTRL1_BOFFMSK                                                        */
  CAN0_CTRL1_BOFFMSK_0                 = 0,     /*!< 0 : Bus Off interrupt disabled.                                           */
  CAN0_CTRL1_BOFFMSK_1                 = 1,     /*!< 1 : Bus Off interrupt enabled.                                            */
} CAN0_CTRL1_BOFFMSK_Enum;

/* ======================================================  CAN0_TIMER  ======================================================= */
/* =====================================================  CAN0_RXMGMASK  ===================================================== */
/* =====================================================  CAN0_RX14MASK  ===================================================== */
/* =====================================================  CAN0_RX15MASK  ===================================================== */
/* =======================================================  CAN0_ECR  ======================================================== */
/* =======================================================  CAN0_ESR1  ======================================================= */
/* =============================================  CAN0 CAN0_ESR1 ERRINT [1..1]  ============================================== */
typedef enum {                                  /*!< CAN0_ESR1_ERRINT                                                          */
  CAN0_ESR1_ERRINT_0                   = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_ERRINT_1                   = 1,     /*!< 1 : Indicates setting of any Error Bit in the Error and Status
                                                     Register.                                                                 */
} CAN0_ESR1_ERRINT_Enum;

/* =============================================  CAN0 CAN0_ESR1 BOFFINT [2..2]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_BOFFINT                                                         */
  CAN0_ESR1_BOFFINT_0                  = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_BOFFINT_1                  = 1,     /*!< 1 : FlexCAN module entered Bus Off state.                                 */
} CAN0_ESR1_BOFFINT_Enum;

/* ===============================================  CAN0 CAN0_ESR1 RX [3..3]  ================================================ */
typedef enum {                                  /*!< CAN0_ESR1_RX                                                              */
  CAN0_ESR1_RX_0                       = 0,     /*!< 0 : FlexCAN is not receiving a message.                                   */
  CAN0_ESR1_RX_1                       = 1,     /*!< 1 : FlexCAN is receiving a message.                                       */
} CAN0_ESR1_RX_Enum;

/* =============================================  CAN0 CAN0_ESR1 FLTCONF [4..5]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_FLTCONF                                                         */
  CAN0_ESR1_FLTCONF_00                 = 0,     /*!< 00 : Error Active                                                         */
  CAN0_ESR1_FLTCONF_01                 = 1,     /*!< 01 : Error Passive                                                        */
  CAN0_ESR1_FLTCONF_1x_2               = 2,     /*!< 1x_2 : Bus Off                                                            */
  CAN0_ESR1_FLTCONF_1x_3               = 3,     /*!< 1x_3 : Bus Off                                                            */
} CAN0_ESR1_FLTCONF_Enum;

/* ===============================================  CAN0 CAN0_ESR1 TX [6..6]  ================================================ */
typedef enum {                                  /*!< CAN0_ESR1_TX                                                              */
  CAN0_ESR1_TX_0                       = 0,     /*!< 0 : FlexCAN is not transmitting a message.                                */
  CAN0_ESR1_TX_1                       = 1,     /*!< 1 : FlexCAN is transmitting a message.                                    */
} CAN0_ESR1_TX_Enum;

/* ==============================================  CAN0 CAN0_ESR1 IDLE [7..7]  =============================================== */
typedef enum {                                  /*!< CAN0_ESR1_IDLE                                                            */
  CAN0_ESR1_IDLE_0                     = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_IDLE_1                     = 1,     /*!< 1 : CAN bus is now IDLE.                                                  */
} CAN0_ESR1_IDLE_Enum;

/* ==============================================  CAN0 CAN0_ESR1 RXWRN [8..8]  ============================================== */
typedef enum {                                  /*!< CAN0_ESR1_RXWRN                                                           */
  CAN0_ESR1_RXWRN_0                    = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_RXWRN_1                    = 1,     /*!< 1 : RXERRCNT is greater than or equal to 96.                              */
} CAN0_ESR1_RXWRN_Enum;

/* ==============================================  CAN0 CAN0_ESR1 TXWRN [9..9]  ============================================== */
typedef enum {                                  /*!< CAN0_ESR1_TXWRN                                                           */
  CAN0_ESR1_TXWRN_0                    = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_TXWRN_1                    = 1,     /*!< 1 : TXERRCNT is greater than or equal to 96.                              */
} CAN0_ESR1_TXWRN_Enum;

/* ============================================  CAN0 CAN0_ESR1 STFERR [10..10]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_STFERR                                                          */
  CAN0_ESR1_STFERR_0                   = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_STFERR_1                   = 1,     /*!< 1 : A Stuffing Error occurred since last read of this register.           */
} CAN0_ESR1_STFERR_Enum;

/* ============================================  CAN0 CAN0_ESR1 FRMERR [11..11]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_FRMERR                                                          */
  CAN0_ESR1_FRMERR_0                   = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_FRMERR_1                   = 1,     /*!< 1 : A Form Error occurred since last read of this register.               */
} CAN0_ESR1_FRMERR_Enum;

/* ============================================  CAN0 CAN0_ESR1 CRCERR [12..12]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_CRCERR                                                          */
  CAN0_ESR1_CRCERR_0                   = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_CRCERR_1                   = 1,     /*!< 1 : A CRC error occurred since last read of this register.                */
} CAN0_ESR1_CRCERR_Enum;

/* ============================================  CAN0 CAN0_ESR1 ACKERR [13..13]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_ACKERR                                                          */
  CAN0_ESR1_ACKERR_0                   = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_ACKERR_1                   = 1,     /*!< 1 : An ACK error occurred since last read of this register.               */
} CAN0_ESR1_ACKERR_Enum;

/* ============================================  CAN0 CAN0_ESR1 BIT0ERR [14..14]  ============================================ */
typedef enum {                                  /*!< CAN0_ESR1_BIT0ERR                                                         */
  CAN0_ESR1_BIT0ERR_0                  = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_BIT0ERR_1                  = 1,     /*!< 1 : At least one bit sent as dominant is received as recessive.           */
} CAN0_ESR1_BIT0ERR_Enum;

/* ============================================  CAN0 CAN0_ESR1 BIT1ERR [15..15]  ============================================ */
typedef enum {                                  /*!< CAN0_ESR1_BIT1ERR                                                         */
  CAN0_ESR1_BIT1ERR_0                  = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_BIT1ERR_1                  = 1,     /*!< 1 : At least one bit sent as recessive is received as dominant.           */
} CAN0_ESR1_BIT1ERR_Enum;

/* ============================================  CAN0 CAN0_ESR1 RWRNINT [16..16]  ============================================ */
typedef enum {                                  /*!< CAN0_ESR1_RWRNINT                                                         */
  CAN0_ESR1_RWRNINT_0                  = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_RWRNINT_1                  = 1,     /*!< 1 : The Rx error counter transitioned from less than 96 to greater
                                                     than or equal to 96.                                                      */
} CAN0_ESR1_RWRNINT_Enum;

/* ============================================  CAN0 CAN0_ESR1 TWRNINT [17..17]  ============================================ */
typedef enum {                                  /*!< CAN0_ESR1_TWRNINT                                                         */
  CAN0_ESR1_TWRNINT_0                  = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_TWRNINT_1                  = 1,     /*!< 1 : The Tx error counter transitioned from less than 96 to greater
                                                     than or equal to 96.                                                      */
} CAN0_ESR1_TWRNINT_Enum;

/* =============================================  CAN0 CAN0_ESR1 SYNCH [18..18]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_SYNCH                                                           */
  CAN0_ESR1_SYNCH_0                    = 0,     /*!< 0 : FlexCAN is not synchronized to the CAN bus.                           */
  CAN0_ESR1_SYNCH_1                    = 1,     /*!< 1 : FlexCAN is synchronized to the CAN bus.                               */
} CAN0_ESR1_SYNCH_Enum;

/* ==========================================  CAN0 CAN0_ESR1 BOFFDONEINT [19..19]  ========================================== */
typedef enum {                                  /*!< CAN0_ESR1_BOFFDONEINT                                                     */
  CAN0_ESR1_BOFFDONEINT_0              = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_BOFFDONEINT_1              = 1,     /*!< 1 : FlexCAN module has completed Bus Off process.                         */
} CAN0_ESR1_BOFFDONEINT_Enum;

/* ==========================================  CAN0 CAN0_ESR1 ERRINT_FAST [20..20]  ========================================== */
typedef enum {                                  /*!< CAN0_ESR1_ERRINT_FAST                                                     */
  CAN0_ESR1_ERRINT_FAST_0              = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_ERRINT_FAST_1              = 1,     /*!< 1 : Indicates setting of any Error Bit detected in the Data
                                                     Phase of CAN FD frames with the BRS bit set.                              */
} CAN0_ESR1_ERRINT_FAST_Enum;

/* ============================================  CAN0 CAN0_ESR1 ERROVR [21..21]  ============================================= */
typedef enum {                                  /*!< CAN0_ESR1_ERROVR                                                          */
  CAN0_ESR1_ERROVR_0                   = 0,     /*!< 0 : Overrun has not occurred.                                             */
  CAN0_ESR1_ERROVR_1                   = 1,     /*!< 1 : Overrun has occurred.                                                 */
} CAN0_ESR1_ERROVR_Enum;

/* ==========================================  CAN0 CAN0_ESR1 STFERR_FAST [26..26]  ========================================== */
typedef enum {                                  /*!< CAN0_ESR1_STFERR_FAST                                                     */
  CAN0_ESR1_STFERR_FAST_0              = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_STFERR_FAST_1              = 1,     /*!< 1 : A Stuffing Error occurred since last read of this register.           */
} CAN0_ESR1_STFERR_FAST_Enum;

/* ==========================================  CAN0 CAN0_ESR1 FRMERR_FAST [27..27]  ========================================== */
typedef enum {                                  /*!< CAN0_ESR1_FRMERR_FAST                                                     */
  CAN0_ESR1_FRMERR_FAST_0              = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_FRMERR_FAST_1              = 1,     /*!< 1 : A Form Error occurred since last read of this register.               */
} CAN0_ESR1_FRMERR_FAST_Enum;

/* ==========================================  CAN0 CAN0_ESR1 CRCERR_FAST [28..28]  ========================================== */
typedef enum {                                  /*!< CAN0_ESR1_CRCERR_FAST                                                     */
  CAN0_ESR1_CRCERR_FAST_0              = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_CRCERR_FAST_1              = 1,     /*!< 1 : A CRC error occurred since last read of this register.                */
} CAN0_ESR1_CRCERR_FAST_Enum;

/* =========================================  CAN0 CAN0_ESR1 BIT0ERR_FAST [30..30]  ========================================== */
typedef enum {                                  /*!< CAN0_ESR1_BIT0ERR_FAST                                                    */
  CAN0_ESR1_BIT0ERR_FAST_0             = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_BIT0ERR_FAST_1             = 1,     /*!< 1 : At least one bit sent as dominant is received as recessive.           */
} CAN0_ESR1_BIT0ERR_FAST_Enum;

/* =========================================  CAN0 CAN0_ESR1 BIT1ERR_FAST [31..31]  ========================================== */
typedef enum {                                  /*!< CAN0_ESR1_BIT1ERR_FAST                                                    */
  CAN0_ESR1_BIT1ERR_FAST_0             = 0,     /*!< 0 : No such occurrence.                                                   */
  CAN0_ESR1_BIT1ERR_FAST_1             = 1,     /*!< 1 : At least one bit sent as recessive is received as dominant.           */
} CAN0_ESR1_BIT1ERR_FAST_Enum;

/* ======================================================  CAN0_IMASK1  ====================================================== */
/* ======================================================  CAN0_IFLAG1  ====================================================== */
/* =============================================  CAN0 CAN0_IFLAG1 BUF0I [0..0]  ============================================= */
typedef enum {                                  /*!< CAN0_IFLAG1_BUF0I                                                         */
  CAN0_IFLAG1_BUF0I_0                  = 0,     /*!< 0 : The corresponding buffer has no occurrence of successfully
                                                     completed transmission or reception when MCR[RFEN]=0.                     */
  CAN0_IFLAG1_BUF0I_1                  = 1,     /*!< 1 : The corresponding buffer has successfully completed transmission
                                                     or reception when MCR[RFEN]=0.                                            */
} CAN0_IFLAG1_BUF0I_Enum;

/* =============================================  CAN0 CAN0_IFLAG1 BUF5I [5..5]  ============================================= */
typedef enum {                                  /*!< CAN0_IFLAG1_BUF5I                                                         */
  CAN0_IFLAG1_BUF5I_0                  = 0,     /*!< 0 : No occurrence of MB5 completing transmission/reception when
                                                     MCR[RFEN]=0, or of frame(s) available in the FIFO, when
                                                     MCR[RFEN]=1                                                               */
  CAN0_IFLAG1_BUF5I_1                  = 1,     /*!< 1 : MB5 completed transmission/reception when MCR[RFEN]=0, or
                                                     frame(s) available in the Rx FIFO when MCR[RFEN]=1. It
                                                     generates a DMA request in case of MCR[RFEN] and MCR[DMA]
                                                     are enabled.                                                              */
} CAN0_IFLAG1_BUF5I_Enum;

/* =============================================  CAN0 CAN0_IFLAG1 BUF6I [6..6]  ============================================= */
typedef enum {                                  /*!< CAN0_IFLAG1_BUF6I                                                         */
  CAN0_IFLAG1_BUF6I_0                  = 0,     /*!< 0 : No occurrence of MB6 completing transmission/reception when
                                                     MCR[RFEN]=0, or of Rx FIFO almost full when MCR[RFEN]=1                   */
  CAN0_IFLAG1_BUF6I_1                  = 1,     /*!< 1 : MB6 completed transmission/reception when MCR[RFEN]=0, or
                                                     Rx FIFO almost full when MCR[RFEN]=1                                      */
} CAN0_IFLAG1_BUF6I_Enum;

/* =============================================  CAN0 CAN0_IFLAG1 BUF7I [7..7]  ============================================= */
typedef enum {                                  /*!< CAN0_IFLAG1_BUF7I                                                         */
  CAN0_IFLAG1_BUF7I_0                  = 0,     /*!< 0 : No occurrence of MB7 completing transmission/reception when
                                                     MCR[RFEN]=0, or of Rx FIFO overflow when MCR[RFEN]=1                      */
  CAN0_IFLAG1_BUF7I_1                  = 1,     /*!< 1 : MB7 completed transmission/reception when MCR[RFEN]=0, or
                                                     Rx FIFO overflow when MCR[RFEN]=1                                         */
} CAN0_IFLAG1_BUF7I_Enum;

/* ======================================================  CAN0_CTRL2  ======================================================= */
/* ===========================================  CAN0 CAN0_CTRL2 EDFLTDIS [11..11]  =========================================== */
typedef enum {                                  /*!< CAN0_CTRL2_EDFLTDIS                                                       */
  CAN0_CTRL2_EDFLTDIS_0                = 0,     /*!< 0 : Edge Filter is enabled.                                               */
  CAN0_CTRL2_EDFLTDIS_1                = 1,     /*!< 1 : Edge Filter is disabled.                                              */
} CAN0_CTRL2_EDFLTDIS_Enum;

/* ==========================================  CAN0 CAN0_CTRL2 ISOCANFDEN [12..12]  ========================================== */
typedef enum {                                  /*!< CAN0_CTRL2_ISOCANFDEN                                                     */
  CAN0_CTRL2_ISOCANFDEN_0              = 0,     /*!< 0 : FlexCAN operates using the non-ISO CAN FD protocol.                   */
  CAN0_CTRL2_ISOCANFDEN_1              = 1,     /*!< 1 : FlexCAN operates using the ISO CAN FD protocol (ISO 11898-1).         */
} CAN0_CTRL2_ISOCANFDEN_Enum;

/* ===========================================  CAN0 CAN0_CTRL2 PREXCEN [14..14]  ============================================ */
typedef enum {                                  /*!< CAN0_CTRL2_PREXCEN                                                        */
  CAN0_CTRL2_PREXCEN_0                 = 0,     /*!< 0 : Protocol Exception is disabled.                                       */
  CAN0_CTRL2_PREXCEN_1                 = 1,     /*!< 1 : Protocol Exception is enabled.                                        */
} CAN0_CTRL2_PREXCEN_Enum;

/* ==========================================  CAN0 CAN0_CTRL2 TIMER_SRC [15..15]  =========================================== */
typedef enum {                                  /*!< CAN0_CTRL2_TIMER_SRC                                                      */
  CAN0_CTRL2_TIMER_SRC_0               = 0,     /*!< 0 : The Free Running Timer is clocked by the CAN bit clock,
                                                     which defines the baud rate on the CAN bus.                               */
  CAN0_CTRL2_TIMER_SRC_1               = 1,     /*!< 1 : The Free Running Timer is clocked by an external time tick.
                                                     The period can be either adjusted to be equal to the baud
                                                     rate on the CAN bus, or a different value as required.
                                                     See the device specific section for details about the external
                                                     time tick.                                                                */
} CAN0_CTRL2_TIMER_SRC_Enum;

/* ============================================  CAN0 CAN0_CTRL2 EACEN [16..16]  ============================================= */
typedef enum {                                  /*!< CAN0_CTRL2_EACEN                                                          */
  CAN0_CTRL2_EACEN_0                   = 0,     /*!< 0 : Rx Mailbox filters IDE bit is always compared and RTR is
                                                     never compared despite mask bits.                                         */
  CAN0_CTRL2_EACEN_1                   = 1,     /*!< 1 : Enables the comparison of both Rx Mailbox filters IDE and
                                                     RTR bit with their corresponding bits within the incoming
                                                     frame. Mask bits do apply.                                                */
} CAN0_CTRL2_EACEN_Enum;

/* =============================================  CAN0 CAN0_CTRL2 RRS [17..17]  ============================================== */
typedef enum {                                  /*!< CAN0_CTRL2_RRS                                                            */
  CAN0_CTRL2_RRS_0                     = 0,     /*!< 0 : Remote Response Frame is generated.                                   */
  CAN0_CTRL2_RRS_1                     = 1,     /*!< 1 : Remote Request Frame is stored.                                       */
} CAN0_CTRL2_RRS_Enum;

/* =============================================  CAN0 CAN0_CTRL2 MRP [18..18]  ============================================== */
typedef enum {                                  /*!< CAN0_CTRL2_MRP                                                            */
  CAN0_CTRL2_MRP_0                     = 0,     /*!< 0 : Matching starts from Rx FIFO and continues on Mailboxes.              */
  CAN0_CTRL2_MRP_1                     = 1,     /*!< 1 : Matching starts from Mailboxes and continues on Rx FIFO.              */
} CAN0_CTRL2_MRP_Enum;

/* =========================================  CAN0 CAN0_CTRL2 BOFFDONEMSK [30..30]  ========================================== */
typedef enum {                                  /*!< CAN0_CTRL2_BOFFDONEMSK                                                    */
  CAN0_CTRL2_BOFFDONEMSK_0             = 0,     /*!< 0 : Bus Off Done interrupt disabled.                                      */
  CAN0_CTRL2_BOFFDONEMSK_1             = 1,     /*!< 1 : Bus Off Done interrupt enabled.                                       */
} CAN0_CTRL2_BOFFDONEMSK_Enum;

/* =========================================  CAN0 CAN0_CTRL2 ERRMSK_FAST [31..31]  ========================================== */
typedef enum {                                  /*!< CAN0_CTRL2_ERRMSK_FAST                                                    */
  CAN0_CTRL2_ERRMSK_FAST_0             = 0,     /*!< 0 : ERRINT_FAST Error interrupt disabled.                                 */
  CAN0_CTRL2_ERRMSK_FAST_1             = 1,     /*!< 1 : ERRINT_FAST Error interrupt enabled.                                  */
} CAN0_CTRL2_ERRMSK_FAST_Enum;

/* =======================================================  CAN0_ESR2  ======================================================= */
/* ==============================================  CAN0 CAN0_ESR2 IMB [13..13]  ============================================== */
typedef enum {                                  /*!< CAN0_ESR2_IMB                                                             */
  CAN0_ESR2_IMB_0                      = 0,     /*!< 0 : If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive
                                                     Mailbox.                                                                  */
  CAN0_ESR2_IMB_1                      = 1,     /*!< 1 : If ESR2[VPS] is asserted, there is at least one inactive
                                                     Mailbox. LPTM content is the number of the first one.                     */
} CAN0_ESR2_IMB_Enum;

/* ==============================================  CAN0 CAN0_ESR2 VPS [14..14]  ============================================== */
typedef enum {                                  /*!< CAN0_ESR2_VPS                                                             */
  CAN0_ESR2_VPS_0                      = 0,     /*!< 0 : Contents of IMB and LPTM are invalid.                                 */
  CAN0_ESR2_VPS_1                      = 1,     /*!< 1 : Contents of IMB and LPTM are valid.                                   */
} CAN0_ESR2_VPS_Enum;

/* =======================================================  CAN0_CRCR  ======================================================= */
/* =====================================================  CAN0_RXFGMASK  ===================================================== */
/* ======================================================  CAN0_RXFIR  ======================================================= */
/* =======================================================  CAN0_CBT  ======================================================== */
/* ==============================================  CAN0 CAN0_CBT BTF [31..31]  =============================================== */
typedef enum {                                  /*!< CAN0_CBT_BTF                                                              */
  CAN0_CBT_BTF_0                       = 0,     /*!< 0 : Extended bit time definitions disabled.                               */
  CAN0_CBT_BTF_1                       = 1,     /*!< 1 : Extended bit time definitions enabled.                                */
} CAN0_CBT_BTF_Enum;

/* ======================================================  CAN0_RAMn0  ======================================================= */
/* ======================================================  CAN0_RAMn1  ======================================================= */
/* ======================================================  CAN0_RAMn2  ======================================================= */
/* ======================================================  CAN0_RAMn3  ======================================================= */
/* ======================================================  CAN0_RAMn4  ======================================================= */
/* ======================================================  CAN0_RAMn5  ======================================================= */
/* ======================================================  CAN0_RAMn6  ======================================================= */
/* ======================================================  CAN0_RAMn7  ======================================================= */
/* ======================================================  CAN0_RAMn8  ======================================================= */
/* ======================================================  CAN0_RAMn9  ======================================================= */
/* ======================================================  CAN0_RAMn10  ====================================================== */
/* ======================================================  CAN0_RAMn11  ====================================================== */
/* ======================================================  CAN0_RAMn12  ====================================================== */
/* ======================================================  CAN0_RAMn13  ====================================================== */
/* ======================================================  CAN0_RAMn14  ====================================================== */
/* ======================================================  CAN0_RAMn15  ====================================================== */
/* ======================================================  CAN0_RAMn16  ====================================================== */
/* ======================================================  CAN0_RAMn17  ====================================================== */
/* ======================================================  CAN0_RAMn18  ====================================================== */
/* ======================================================  CAN0_RAMn19  ====================================================== */
/* ======================================================  CAN0_RAMn20  ====================================================== */
/* ======================================================  CAN0_RAMn21  ====================================================== */
/* ======================================================  CAN0_RAMn22  ====================================================== */
/* ======================================================  CAN0_RAMn23  ====================================================== */
/* ======================================================  CAN0_RAMn24  ====================================================== */
/* ======================================================  CAN0_RAMn25  ====================================================== */
/* ======================================================  CAN0_RAMn26  ====================================================== */
/* ======================================================  CAN0_RAMn27  ====================================================== */
/* ======================================================  CAN0_RAMn28  ====================================================== */
/* ======================================================  CAN0_RAMn29  ====================================================== */
/* ======================================================  CAN0_RAMn30  ====================================================== */
/* ======================================================  CAN0_RAMn31  ====================================================== */
/* ======================================================  CAN0_RAMn32  ====================================================== */
/* ======================================================  CAN0_RAMn33  ====================================================== */
/* ======================================================  CAN0_RAMn34  ====================================================== */
/* ======================================================  CAN0_RAMn35  ====================================================== */
/* ======================================================  CAN0_RAMn36  ====================================================== */
/* ======================================================  CAN0_RAMn37  ====================================================== */
/* ======================================================  CAN0_RAMn38  ====================================================== */
/* ======================================================  CAN0_RAMn39  ====================================================== */
/* ======================================================  CAN0_RAMn40  ====================================================== */
/* ======================================================  CAN0_RAMn41  ====================================================== */
/* ======================================================  CAN0_RAMn42  ====================================================== */
/* ======================================================  CAN0_RAMn43  ====================================================== */
/* ======================================================  CAN0_RAMn44  ====================================================== */
/* ======================================================  CAN0_RAMn45  ====================================================== */
/* ======================================================  CAN0_RAMn46  ====================================================== */
/* ======================================================  CAN0_RAMn47  ====================================================== */
/* ======================================================  CAN0_RAMn48  ====================================================== */
/* ======================================================  CAN0_RAMn49  ====================================================== */
/* ======================================================  CAN0_RAMn50  ====================================================== */
/* ======================================================  CAN0_RAMn51  ====================================================== */
/* ======================================================  CAN0_RAMn52  ====================================================== */
/* ======================================================  CAN0_RAMn53  ====================================================== */
/* ======================================================  CAN0_RAMn54  ====================================================== */
/* ======================================================  CAN0_RAMn55  ====================================================== */
/* ======================================================  CAN0_RAMn56  ====================================================== */
/* ======================================================  CAN0_RAMn57  ====================================================== */
/* ======================================================  CAN0_RAMn58  ====================================================== */
/* ======================================================  CAN0_RAMn59  ====================================================== */
/* ======================================================  CAN0_RAMn60  ====================================================== */
/* ======================================================  CAN0_RAMn61  ====================================================== */
/* ======================================================  CAN0_RAMn62  ====================================================== */
/* ======================================================  CAN0_RAMn63  ====================================================== */
/* ======================================================  CAN0_RAMn64  ====================================================== */
/* ======================================================  CAN0_RAMn65  ====================================================== */
/* ======================================================  CAN0_RAMn66  ====================================================== */
/* ======================================================  CAN0_RAMn67  ====================================================== */
/* ======================================================  CAN0_RAMn68  ====================================================== */
/* ======================================================  CAN0_RAMn69  ====================================================== */
/* ======================================================  CAN0_RAMn70  ====================================================== */
/* ======================================================  CAN0_RAMn71  ====================================================== */
/* ======================================================  CAN0_RAMn72  ====================================================== */
/* ======================================================  CAN0_RAMn73  ====================================================== */
/* ======================================================  CAN0_RAMn74  ====================================================== */
/* ======================================================  CAN0_RAMn75  ====================================================== */
/* ======================================================  CAN0_RAMn76  ====================================================== */
/* ======================================================  CAN0_RAMn77  ====================================================== */
/* ======================================================  CAN0_RAMn78  ====================================================== */
/* ======================================================  CAN0_RAMn79  ====================================================== */
/* ======================================================  CAN0_RAMn80  ====================================================== */
/* ======================================================  CAN0_RAMn81  ====================================================== */
/* ======================================================  CAN0_RAMn82  ====================================================== */
/* ======================================================  CAN0_RAMn83  ====================================================== */
/* ======================================================  CAN0_RAMn84  ====================================================== */
/* ======================================================  CAN0_RAMn85  ====================================================== */
/* ======================================================  CAN0_RAMn86  ====================================================== */
/* ======================================================  CAN0_RAMn87  ====================================================== */
/* ======================================================  CAN0_RAMn88  ====================================================== */
/* ======================================================  CAN0_RAMn89  ====================================================== */
/* ======================================================  CAN0_RAMn90  ====================================================== */
/* ======================================================  CAN0_RAMn91  ====================================================== */
/* ======================================================  CAN0_RAMn92  ====================================================== */
/* ======================================================  CAN0_RAMn93  ====================================================== */
/* ======================================================  CAN0_RAMn94  ====================================================== */
/* ======================================================  CAN0_RAMn95  ====================================================== */
/* ======================================================  CAN0_RAMn96  ====================================================== */
/* ======================================================  CAN0_RAMn97  ====================================================== */
/* ======================================================  CAN0_RAMn98  ====================================================== */
/* ======================================================  CAN0_RAMn99  ====================================================== */
/* =====================================================  CAN0_RAMn100  ====================================================== */
/* =====================================================  CAN0_RAMn101  ====================================================== */
/* =====================================================  CAN0_RAMn102  ====================================================== */
/* =====================================================  CAN0_RAMn103  ====================================================== */
/* =====================================================  CAN0_RAMn104  ====================================================== */
/* =====================================================  CAN0_RAMn105  ====================================================== */
/* =====================================================  CAN0_RAMn106  ====================================================== */
/* =====================================================  CAN0_RAMn107  ====================================================== */
/* =====================================================  CAN0_RAMn108  ====================================================== */
/* =====================================================  CAN0_RAMn109  ====================================================== */
/* =====================================================  CAN0_RAMn110  ====================================================== */
/* =====================================================  CAN0_RAMn111  ====================================================== */
/* =====================================================  CAN0_RAMn112  ====================================================== */
/* =====================================================  CAN0_RAMn113  ====================================================== */
/* =====================================================  CAN0_RAMn114  ====================================================== */
/* =====================================================  CAN0_RAMn115  ====================================================== */
/* =====================================================  CAN0_RAMn116  ====================================================== */
/* =====================================================  CAN0_RAMn117  ====================================================== */
/* =====================================================  CAN0_RAMn118  ====================================================== */
/* =====================================================  CAN0_RAMn119  ====================================================== */
/* =====================================================  CAN0_RAMn120  ====================================================== */
/* =====================================================  CAN0_RAMn121  ====================================================== */
/* =====================================================  CAN0_RAMn122  ====================================================== */
/* =====================================================  CAN0_RAMn123  ====================================================== */
/* =====================================================  CAN0_RAMn124  ====================================================== */
/* =====================================================  CAN0_RAMn125  ====================================================== */
/* =====================================================  CAN0_RAMn126  ====================================================== */
/* =====================================================  CAN0_RAMn127  ====================================================== */
/* ======================================================  CAN0_RXIMR0  ====================================================== */
/* ======================================================  CAN0_RXIMR1  ====================================================== */
/* ======================================================  CAN0_RXIMR2  ====================================================== */
/* ======================================================  CAN0_RXIMR3  ====================================================== */
/* ======================================================  CAN0_RXIMR4  ====================================================== */
/* ======================================================  CAN0_RXIMR5  ====================================================== */
/* ======================================================  CAN0_RXIMR6  ====================================================== */
/* ======================================================  CAN0_RXIMR7  ====================================================== */
/* ======================================================  CAN0_RXIMR8  ====================================================== */
/* ======================================================  CAN0_RXIMR9  ====================================================== */
/* =====================================================  CAN0_RXIMR10  ====================================================== */
/* =====================================================  CAN0_RXIMR11  ====================================================== */
/* =====================================================  CAN0_RXIMR12  ====================================================== */
/* =====================================================  CAN0_RXIMR13  ====================================================== */
/* =====================================================  CAN0_RXIMR14  ====================================================== */
/* =====================================================  CAN0_RXIMR15  ====================================================== */
/* =====================================================  CAN0_RXIMR16  ====================================================== */
/* =====================================================  CAN0_RXIMR17  ====================================================== */
/* =====================================================  CAN0_RXIMR18  ====================================================== */
/* =====================================================  CAN0_RXIMR19  ====================================================== */
/* =====================================================  CAN0_RXIMR20  ====================================================== */
/* =====================================================  CAN0_RXIMR21  ====================================================== */
/* =====================================================  CAN0_RXIMR22  ====================================================== */
/* =====================================================  CAN0_RXIMR23  ====================================================== */
/* =====================================================  CAN0_RXIMR24  ====================================================== */
/* =====================================================  CAN0_RXIMR25  ====================================================== */
/* =====================================================  CAN0_RXIMR26  ====================================================== */
/* =====================================================  CAN0_RXIMR27  ====================================================== */
/* =====================================================  CAN0_RXIMR28  ====================================================== */
/* =====================================================  CAN0_RXIMR29  ====================================================== */
/* =====================================================  CAN0_RXIMR30  ====================================================== */
/* =====================================================  CAN0_RXIMR31  ====================================================== */
/* =====================================================  CAN0_CTRL1_PN  ===================================================== */
/* =============================================  CAN0 CAN0_CTRL1_PN FCS [0..1]  ============================================= */
typedef enum {                                  /*!< CAN0_CTRL1_PN_FCS                                                         */
  CAN0_CTRL1_PN_FCS_00                 = 0,     /*!< 00 : Message ID filtering only                                            */
  CAN0_CTRL1_PN_FCS_01                 = 1,     /*!< 01 : Message ID filtering and payload filtering                           */
  CAN0_CTRL1_PN_FCS_10                 = 2,     /*!< 10 : Message ID filtering occurring a specified number of times.          */
  CAN0_CTRL1_PN_FCS_11                 = 3,     /*!< 11 : Message ID filtering and payload filtering a specified
                                                     number of times                                                           */
} CAN0_CTRL1_PN_FCS_Enum;

/* ============================================  CAN0 CAN0_CTRL1_PN IDFS [2..3]  ============================================= */
typedef enum {                                  /*!< CAN0_CTRL1_PN_IDFS                                                        */
  CAN0_CTRL1_PN_IDFS_00                = 0,     /*!< 00 : Match upon a ID contents against an exact target value               */
  CAN0_CTRL1_PN_IDFS_01                = 1,     /*!< 01 : Match upon a ID value greater than or equal to a specified
                                                     target value                                                              */
  CAN0_CTRL1_PN_IDFS_10                = 2,     /*!< 10 : Match upon a ID value smaller than or equal to a specified
                                                     target value                                                              */
  CAN0_CTRL1_PN_IDFS_11                = 3,     /*!< 11 : Match upon a ID value inside a range, greater than or equal
                                                     to a specified lower limit and smaller than or equal a
                                                     specified upper limit                                                     */
} CAN0_CTRL1_PN_IDFS_Enum;

/* ============================================  CAN0 CAN0_CTRL1_PN PLFS [4..5]  ============================================= */
typedef enum {                                  /*!< CAN0_CTRL1_PN_PLFS                                                        */
  CAN0_CTRL1_PN_PLFS_00                = 0,     /*!< 00 : Match upon a payload contents against an exact target value          */
  CAN0_CTRL1_PN_PLFS_01                = 1,     /*!< 01 : Match upon a payload value greater than or equal to a specified
                                                     target value                                                              */
  CAN0_CTRL1_PN_PLFS_10                = 2,     /*!< 10 : Match upon a payload value smaller than or equal to a specified
                                                     target value                                                              */
  CAN0_CTRL1_PN_PLFS_11                = 3,     /*!< 11 : Match upon a payload value inside a range, greater than
                                                     or equal to a specified lower limit and smaller than or
                                                     equal a specified upper limit                                             */
} CAN0_CTRL1_PN_PLFS_Enum;

/* ===========================================  CAN0 CAN0_CTRL1_PN NMATCH [8..15]  =========================================== */
typedef enum {                                  /*!< CAN0_CTRL1_PN_NMATCH                                                      */
  CAN0_CTRL1_PN_NMATCH_00000001        = 1,     /*!< 00000001 : Received message must match the predefined filtering
                                                     criteria for ID and/or PL once before generating a wake
                                                     up event.                                                                 */
  CAN0_CTRL1_PN_NMATCH_00000010        = 2,     /*!< 00000010 : Received message must match the predefined filtering
                                                     criteria for ID and/or PL twice before generating a wake
                                                     up event.                                                                 */
  CAN0_CTRL1_PN_NMATCH_11111111        = 255,   /*!< 11111111 : Received message must match the predefined filtering
                                                     criteria for ID and/or PL 255 times before generating a
                                                     wake up event.                                                            */
} CAN0_CTRL1_PN_NMATCH_Enum;

/* =========================================  CAN0 CAN0_CTRL1_PN WUMF_MSK [16..16]  ========================================== */
typedef enum {                                  /*!< CAN0_CTRL1_PN_WUMF_MSK                                                    */
  CAN0_CTRL1_PN_WUMF_MSK_0             = 0,     /*!< 0 : Wake up match event is disabled                                       */
  CAN0_CTRL1_PN_WUMF_MSK_1             = 1,     /*!< 1 : Wake up match event is enabled                                        */
} CAN0_CTRL1_PN_WUMF_MSK_Enum;

/* =========================================  CAN0 CAN0_CTRL1_PN WTOF_MSK [17..17]  ========================================== */
typedef enum {                                  /*!< CAN0_CTRL1_PN_WTOF_MSK                                                    */
  CAN0_CTRL1_PN_WTOF_MSK_0             = 0,     /*!< 0 : Timeout wake up event is disabled                                     */
  CAN0_CTRL1_PN_WTOF_MSK_1             = 1,     /*!< 1 : Timeout wake up event is enabled                                      */
} CAN0_CTRL1_PN_WTOF_MSK_Enum;

/* =====================================================  CAN0_CTRL2_PN  ===================================================== */
/* ======================================================  CAN0_WU_MTC  ====================================================== */
/* ============================================  CAN0 CAN0_WU_MTC WUMF [16..16]  ============================================= */
typedef enum {                                  /*!< CAN0_WU_MTC_WUMF                                                          */
  CAN0_WU_MTC_WUMF_0                   = 0,     /*!< 0 : No wake up by match event detected                                    */
  CAN0_WU_MTC_WUMF_1                   = 1,     /*!< 1 : Wake up by match event detected                                       */
} CAN0_WU_MTC_WUMF_Enum;

/* ============================================  CAN0 CAN0_WU_MTC WTOF [17..17]  ============================================= */
typedef enum {                                  /*!< CAN0_WU_MTC_WTOF                                                          */
  CAN0_WU_MTC_WTOF_0                   = 0,     /*!< 0 : No wake up by timeout event detected                                  */
  CAN0_WU_MTC_WTOF_1                   = 1,     /*!< 1 : Wake up by timeout event detected                                     */
} CAN0_WU_MTC_WTOF_Enum;

/* =====================================================  CAN0_FLT_ID1  ====================================================== */
/* ==========================================  CAN0 CAN0_FLT_ID1 FLT_RTR [29..29]  =========================================== */
typedef enum {                                  /*!< CAN0_FLT_ID1_FLT_RTR                                                      */
  CAN0_FLT_ID1_FLT_RTR_0               = 0,     /*!< 0 : Reject remote frame (accept data frame)                               */
  CAN0_FLT_ID1_FLT_RTR_1               = 1,     /*!< 1 : Accept remote frame                                                   */
} CAN0_FLT_ID1_FLT_RTR_Enum;

/* ==========================================  CAN0 CAN0_FLT_ID1 FLT_IDE [30..30]  =========================================== */
typedef enum {                                  /*!< CAN0_FLT_ID1_FLT_IDE                                                      */
  CAN0_FLT_ID1_FLT_IDE_0               = 0,     /*!< 0 : Accept standard frame format                                          */
  CAN0_FLT_ID1_FLT_IDE_1               = 1,     /*!< 1 : Accept extended frame format                                          */
} CAN0_FLT_ID1_FLT_IDE_Enum;

/* =====================================================  CAN0_FLT_DLC  ====================================================== */
/* ======================================================  CAN0_PL1_LO  ====================================================== */
/* ======================================================  CAN0_PL1_HI  ====================================================== */
/* ==================================================  CAN0_FLT_ID2_IDMASK  ================================================== */
/* =======================================  CAN0 CAN0_FLT_ID2_IDMASK RTR_MSK [29..29]  ======================================= */
typedef enum {                                  /*!< CAN0_FLT_ID2_IDMASK_RTR_MSK                                               */
  CAN0_FLT_ID2_IDMASK_RTR_MSK_0        = 0,     /*!< 0 : The corresponding bit in the filter is 'dont care'                    */
  CAN0_FLT_ID2_IDMASK_RTR_MSK_1        = 1,     /*!< 1 : The corresponding bit in the filter is checked                        */
} CAN0_FLT_ID2_IDMASK_RTR_MSK_Enum;

/* =======================================  CAN0 CAN0_FLT_ID2_IDMASK IDE_MSK [30..30]  ======================================= */
typedef enum {                                  /*!< CAN0_FLT_ID2_IDMASK_IDE_MSK                                               */
  CAN0_FLT_ID2_IDMASK_IDE_MSK_0        = 0,     /*!< 0 : The corresponding bit in the filter is 'dont care'                    */
  CAN0_FLT_ID2_IDMASK_IDE_MSK_1        = 1,     /*!< 1 : The corresponding bit in the filter is checked                        */
} CAN0_FLT_ID2_IDMASK_IDE_MSK_Enum;

/* ==================================================  CAN0_PL2_PLMASK_LO  =================================================== */
/* ==================================================  CAN0_PL2_PLMASK_HI  =================================================== */
/* =====================================================  CAN0_WMB0_CS  ====================================================== */
/* ============================================  CAN0 CAN0_WMB0_CS RTR [20..20]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB0_CS_RTR                                                          */
  CAN0_WMB0_CS_RTR_0                   = 0,     /*!< 0 : Frame is data one (not remote)                                        */
  CAN0_WMB0_CS_RTR_1                   = 1,     /*!< 1 : Frame is a remote one                                                 */
} CAN0_WMB0_CS_RTR_Enum;

/* ============================================  CAN0 CAN0_WMB0_CS IDE [21..21]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB0_CS_IDE                                                          */
  CAN0_WMB0_CS_IDE_0                   = 0,     /*!< 0 : Frame format is standard                                              */
  CAN0_WMB0_CS_IDE_1                   = 1,     /*!< 1 : Frame format is extended                                              */
} CAN0_WMB0_CS_IDE_Enum;

/* =====================================================  CAN0_WMB0_ID  ====================================================== */
/* =====================================================  CAN0_WMB0_D03  ===================================================== */
/* =====================================================  CAN0_WMB0_D47  ===================================================== */
/* =====================================================  CAN0_WMB1_CS  ====================================================== */
/* ============================================  CAN0 CAN0_WMB1_CS RTR [20..20]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB1_CS_RTR                                                          */
  CAN0_WMB1_CS_RTR_0                   = 0,     /*!< 0 : Frame is data one (not remote)                                        */
  CAN0_WMB1_CS_RTR_1                   = 1,     /*!< 1 : Frame is a remote one                                                 */
} CAN0_WMB1_CS_RTR_Enum;

/* ============================================  CAN0 CAN0_WMB1_CS IDE [21..21]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB1_CS_IDE                                                          */
  CAN0_WMB1_CS_IDE_0                   = 0,     /*!< 0 : Frame format is standard                                              */
  CAN0_WMB1_CS_IDE_1                   = 1,     /*!< 1 : Frame format is extended                                              */
} CAN0_WMB1_CS_IDE_Enum;

/* =====================================================  CAN0_WMB1_ID  ====================================================== */
/* =====================================================  CAN0_WMB1_D03  ===================================================== */
/* =====================================================  CAN0_WMB1_D47  ===================================================== */
/* =====================================================  CAN0_WMB2_CS  ====================================================== */
/* ============================================  CAN0 CAN0_WMB2_CS RTR [20..20]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB2_CS_RTR                                                          */
  CAN0_WMB2_CS_RTR_0                   = 0,     /*!< 0 : Frame is data one (not remote)                                        */
  CAN0_WMB2_CS_RTR_1                   = 1,     /*!< 1 : Frame is a remote one                                                 */
} CAN0_WMB2_CS_RTR_Enum;

/* ============================================  CAN0 CAN0_WMB2_CS IDE [21..21]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB2_CS_IDE                                                          */
  CAN0_WMB2_CS_IDE_0                   = 0,     /*!< 0 : Frame format is standard                                              */
  CAN0_WMB2_CS_IDE_1                   = 1,     /*!< 1 : Frame format is extended                                              */
} CAN0_WMB2_CS_IDE_Enum;

/* =====================================================  CAN0_WMB2_ID  ====================================================== */
/* =====================================================  CAN0_WMB2_D03  ===================================================== */
/* =====================================================  CAN0_WMB2_D47  ===================================================== */
/* =====================================================  CAN0_WMB3_CS  ====================================================== */
/* ============================================  CAN0 CAN0_WMB3_CS RTR [20..20]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB3_CS_RTR                                                          */
  CAN0_WMB3_CS_RTR_0                   = 0,     /*!< 0 : Frame is data one (not remote)                                        */
  CAN0_WMB3_CS_RTR_1                   = 1,     /*!< 1 : Frame is a remote one                                                 */
} CAN0_WMB3_CS_RTR_Enum;

/* ============================================  CAN0 CAN0_WMB3_CS IDE [21..21]  ============================================= */
typedef enum {                                  /*!< CAN0_WMB3_CS_IDE                                                          */
  CAN0_WMB3_CS_IDE_0                   = 0,     /*!< 0 : Frame format is standard                                              */
  CAN0_WMB3_CS_IDE_1                   = 1,     /*!< 1 : Frame format is extended                                              */
} CAN0_WMB3_CS_IDE_Enum;

/* =====================================================  CAN0_WMB3_ID  ====================================================== */
/* =====================================================  CAN0_WMB3_D03  ===================================================== */
/* =====================================================  CAN0_WMB3_D47  ===================================================== */
/* ======================================================  CAN0_FDCTRL  ====================================================== */
/* ===========================================  CAN0 CAN0_FDCTRL TDCFAIL [14..14]  =========================================== */
typedef enum {                                  /*!< CAN0_FDCTRL_TDCFAIL                                                       */
  CAN0_FDCTRL_TDCFAIL_0                = 0,     /*!< 0 : Measured loop delay is in range.                                      */
  CAN0_FDCTRL_TDCFAIL_1                = 1,     /*!< 1 : Measured loop delay is out of range.                                  */
} CAN0_FDCTRL_TDCFAIL_Enum;

/* ============================================  CAN0 CAN0_FDCTRL TDCEN [15..15]  ============================================ */
typedef enum {                                  /*!< CAN0_FDCTRL_TDCEN                                                         */
  CAN0_FDCTRL_TDCEN_0                  = 0,     /*!< 0 : TDC is disabled                                                       */
  CAN0_FDCTRL_TDCEN_1                  = 1,     /*!< 1 : TDC is enabled                                                        */
} CAN0_FDCTRL_TDCEN_Enum;

/* ===========================================  CAN0 CAN0_FDCTRL MBDSR0 [16..17]  ============================================ */
typedef enum {                                  /*!< CAN0_FDCTRL_MBDSR0                                                        */
  CAN0_FDCTRL_MBDSR0_00                = 0,     /*!< 00 : Selects 8 bytes per Message Buffer.                                  */
  CAN0_FDCTRL_MBDSR0_01                = 1,     /*!< 01 : Selects 16 bytes per Message Buffer.                                 */
  CAN0_FDCTRL_MBDSR0_10                = 2,     /*!< 10 : Selects 32 bytes per Message Buffer.                                 */
  CAN0_FDCTRL_MBDSR0_11                = 3,     /*!< 11 : Selects 64 bytes per Message Buffer.                                 */
} CAN0_FDCTRL_MBDSR0_Enum;

/* ===========================================  CAN0 CAN0_FDCTRL FDRATE [31..31]  ============================================ */
typedef enum {                                  /*!< CAN0_FDCTRL_FDRATE                                                        */
  CAN0_FDCTRL_FDRATE_0                 = 0,     /*!< 0 : Transmit a frame in nominal rate. The BRS bit in the Tx
                                                     MB has no effect.                                                         */
  CAN0_FDCTRL_FDRATE_1                 = 1,     /*!< 1 : Transmit a frame with bit rate switching if the BRS bit
                                                     in the Tx MB is recessive.                                                */
} CAN0_FDCTRL_FDRATE_Enum;

/* ======================================================  CAN0_FDCBT  ======================================================= */
/* ======================================================  CAN0_FDCRC  ======================================================= */

/* RCCR Bit Fields */
#define SCG_RCCR_DIVSLOW_MASK                    0xFu
#define SCG_RCCR_DIVSLOW_SHIFT                   0u
#define SCG_RCCR_DIVSLOW_WIDTH                   4u
#define SCG_RCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVSLOW_SHIFT))&SCG_RCCR_DIVSLOW_MASK)
#define SCG_RCCR_DIVBUS_MASK                     0xF0u
#define SCG_RCCR_DIVBUS_SHIFT                    4u
#define SCG_RCCR_DIVBUS_WIDTH                    4u
#define SCG_RCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVBUS_SHIFT))&SCG_RCCR_DIVBUS_MASK)
#define SCG_RCCR_DIVCORE_MASK                    0xF0000u
#define SCG_RCCR_DIVCORE_SHIFT                   16u
#define SCG_RCCR_DIVCORE_WIDTH                   4u
#define SCG_RCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVCORE_SHIFT))&SCG_RCCR_DIVCORE_MASK)
#define SCG_RCCR_SCS_MASK                        0xF000000u
#define SCG_RCCR_SCS_SHIFT                       24u
#define SCG_RCCR_SCS_WIDTH                       4u
#define SCG_RCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_SCS_SHIFT))&SCG_RCCR_SCS_MASK)



/* =========================================================================================================================== */
/* ================                                            SCG                                            ================ */
/* =========================================================================================================================== */

/* ========================================================  SCG_CSR  ======================================================== */
/* ==============================================  SCG SCG_CSR DIVSLOW [0..3]  =============================================== */
typedef enum {                                  /*!< SCG_CSR_DIVSLOW                                                           */
  SCG_CSR_DIVSLOW_0000                 = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_CSR_DIVSLOW_0001                 = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_CSR_DIVSLOW_0010                 = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_CSR_DIVSLOW_0011                 = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_CSR_DIVSLOW_0100                 = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_CSR_DIVSLOW_0101                 = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_CSR_DIVSLOW_0110                 = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_CSR_DIVSLOW_0111                 = 7,     /*!< 0111 : Divide-by-8                                                        */
} SCG_CSR_DIVSLOW_Enum;

/* ===============================================  SCG SCG_CSR DIVBUS [4..7]  =============================================== */
typedef enum {                                  /*!< SCG_CSR_DIVBUS                                                            */
  SCG_CSR_DIVBUS_0000                  = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_CSR_DIVBUS_0001                  = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_CSR_DIVBUS_0010                  = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_CSR_DIVBUS_0011                  = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_CSR_DIVBUS_0100                  = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_CSR_DIVBUS_0101                  = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_CSR_DIVBUS_0110                  = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_CSR_DIVBUS_0111                  = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_CSR_DIVBUS_1000                  = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_CSR_DIVBUS_1001                  = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_CSR_DIVBUS_1010                  = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_CSR_DIVBUS_1011                  = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_CSR_DIVBUS_1100                  = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_CSR_DIVBUS_1101                  = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_CSR_DIVBUS_1110                  = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_CSR_DIVBUS_1111                  = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_CSR_DIVBUS_Enum;

/* =============================================  SCG SCG_CSR DIVCORE [16..19]  ============================================== */
typedef enum {                                  /*!< SCG_CSR_DIVCORE                                                           */
  SCG_CSR_DIVCORE_0000                 = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_CSR_DIVCORE_0001                 = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_CSR_DIVCORE_0010                 = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_CSR_DIVCORE_0011                 = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_CSR_DIVCORE_0100                 = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_CSR_DIVCORE_0101                 = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_CSR_DIVCORE_0110                 = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_CSR_DIVCORE_0111                 = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_CSR_DIVCORE_1000                 = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_CSR_DIVCORE_1001                 = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_CSR_DIVCORE_1010                 = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_CSR_DIVCORE_1011                 = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_CSR_DIVCORE_1100                 = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_CSR_DIVCORE_1101                 = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_CSR_DIVCORE_1110                 = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_CSR_DIVCORE_1111                 = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_CSR_DIVCORE_Enum;

/* ===============================================  SCG SCG_CSR SCS [24..27]  ================================================ */
typedef enum {                                  /*!< SCG_CSR_SCS                                                               */
  SCG_CSR_SCS_0001                     = 1,     /*!< 0001 : System OSC (SOSC_CLK)                                              */
  SCG_CSR_SCS_0010                     = 2,     /*!< 0010 : Slow IRC (SIRC_CLK)                                                */
  SCG_CSR_SCS_0011                     = 3,     /*!< 0011 : Fast IRC (FIRC_CLK)                                                */
  SCG_CSR_SCS_0110                     = 6,     /*!< 0110 : System PLL (SPLL_CLK)                                              */
} SCG_CSR_SCS_Enum;

/* =======================================================  SCG_RCCR  ======================================================== */
/* ==============================================  SCG SCG_RCCR DIVSLOW [0..3]  ============================================== */
typedef enum {                                  /*!< SCG_RCCR_DIVSLOW                                                          */
  SCG_RCCR_DIVSLOW_0000                = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_RCCR_DIVSLOW_0001                = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_RCCR_DIVSLOW_0010                = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_RCCR_DIVSLOW_0011                = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_RCCR_DIVSLOW_0100                = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_RCCR_DIVSLOW_0101                = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_RCCR_DIVSLOW_0110                = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_RCCR_DIVSLOW_0111                = 7,     /*!< 0111 : Divide-by-8                                                        */
} SCG_RCCR_DIVSLOW_Enum;

/* ==============================================  SCG SCG_RCCR DIVBUS [4..7]  =============================================== */
typedef enum {                                  /*!< SCG_RCCR_DIVBUS                                                           */
  SCG_RCCR_DIVBUS_0000                 = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_RCCR_DIVBUS_0001                 = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_RCCR_DIVBUS_0010                 = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_RCCR_DIVBUS_0011                 = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_RCCR_DIVBUS_0100                 = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_RCCR_DIVBUS_0101                 = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_RCCR_DIVBUS_0110                 = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_RCCR_DIVBUS_0111                 = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_RCCR_DIVBUS_1000                 = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_RCCR_DIVBUS_1001                 = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_RCCR_DIVBUS_1010                 = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_RCCR_DIVBUS_1011                 = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_RCCR_DIVBUS_1100                 = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_RCCR_DIVBUS_1101                 = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_RCCR_DIVBUS_1110                 = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_RCCR_DIVBUS_1111                 = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_RCCR_DIVBUS_Enum;

/* =============================================  SCG SCG_RCCR DIVCORE [16..19]  ============================================= */
typedef enum {                                  /*!< SCG_RCCR_DIVCORE                                                          */
  SCG_RCCR_DIVCORE_0000                = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_RCCR_DIVCORE_0001                = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_RCCR_DIVCORE_0010                = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_RCCR_DIVCORE_0011                = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_RCCR_DIVCORE_0100                = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_RCCR_DIVCORE_0101                = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_RCCR_DIVCORE_0110                = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_RCCR_DIVCORE_0111                = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_RCCR_DIVCORE_1000                = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_RCCR_DIVCORE_1001                = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_RCCR_DIVCORE_1010                = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_RCCR_DIVCORE_1011                = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_RCCR_DIVCORE_1100                = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_RCCR_DIVCORE_1101                = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_RCCR_DIVCORE_1110                = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_RCCR_DIVCORE_1111                = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_RCCR_DIVCORE_Enum;

/* ===============================================  SCG SCG_RCCR SCS [24..27]  =============================================== */
typedef enum {                                  /*!< SCG_RCCR_SCS                                                              */
  SCG_RCCR_SCS_0001                    = 1,     /*!< 0001 : System OSC (SOSC_CLK)                                              */
  SCG_RCCR_SCS_0010                    = 2,     /*!< 0010 : Slow IRC (SIRC_CLK)                                                */
  SCG_RCCR_SCS_0011                    = 3,     /*!< 0011 : Fast IRC (FIRC_CLK)                                                */
  SCG_RCCR_SCS_0110                    = 6,     /*!< 0110 : System PLL (SPLL_CLK)                                              */
} SCG_RCCR_SCS_Enum;

/* =======================================================  SCG_VCCR  ======================================================== */
/* ==============================================  SCG SCG_VCCR DIVSLOW [0..3]  ============================================== */
typedef enum {                                  /*!< SCG_VCCR_DIVSLOW                                                          */
  SCG_VCCR_DIVSLOW_0000                = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_VCCR_DIVSLOW_0001                = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_VCCR_DIVSLOW_0010                = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_VCCR_DIVSLOW_0011                = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_VCCR_DIVSLOW_0100                = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_VCCR_DIVSLOW_0101                = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_VCCR_DIVSLOW_0110                = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_VCCR_DIVSLOW_0111                = 7,     /*!< 0111 : Divide-by-8                                                        */
} SCG_VCCR_DIVSLOW_Enum;

/* ==============================================  SCG SCG_VCCR DIVBUS [4..7]  =============================================== */
typedef enum {                                  /*!< SCG_VCCR_DIVBUS                                                           */
  SCG_VCCR_DIVBUS_0000                 = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_VCCR_DIVBUS_0001                 = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_VCCR_DIVBUS_0010                 = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_VCCR_DIVBUS_0011                 = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_VCCR_DIVBUS_0100                 = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_VCCR_DIVBUS_0101                 = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_VCCR_DIVBUS_0110                 = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_VCCR_DIVBUS_0111                 = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_VCCR_DIVBUS_1000                 = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_VCCR_DIVBUS_1001                 = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_VCCR_DIVBUS_1010                 = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_VCCR_DIVBUS_1011                 = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_VCCR_DIVBUS_1100                 = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_VCCR_DIVBUS_1101                 = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_VCCR_DIVBUS_1110                 = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_VCCR_DIVBUS_1111                 = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_VCCR_DIVBUS_Enum;

/* =============================================  SCG SCG_VCCR DIVCORE [16..19]  ============================================= */
typedef enum {                                  /*!< SCG_VCCR_DIVCORE                                                          */
  SCG_VCCR_DIVCORE_0000                = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_VCCR_DIVCORE_0001                = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_VCCR_DIVCORE_0010                = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_VCCR_DIVCORE_0011                = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_VCCR_DIVCORE_0100                = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_VCCR_DIVCORE_0101                = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_VCCR_DIVCORE_0110                = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_VCCR_DIVCORE_0111                = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_VCCR_DIVCORE_1000                = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_VCCR_DIVCORE_1001                = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_VCCR_DIVCORE_1010                = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_VCCR_DIVCORE_1011                = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_VCCR_DIVCORE_1100                = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_VCCR_DIVCORE_1101                = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_VCCR_DIVCORE_1110                = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_VCCR_DIVCORE_1111                = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_VCCR_DIVCORE_Enum;

/* ===============================================  SCG SCG_VCCR SCS [24..27]  =============================================== */
typedef enum {                                  /*!< SCG_VCCR_SCS                                                              */
  SCG_VCCR_SCS_0010                    = 2,     /*!< 0010 : Slow IRC (SIRC_CLK)                                                */
} SCG_VCCR_SCS_Enum;

/* =======================================================  SCG_HCCR  ======================================================== */
/* ==============================================  SCG SCG_HCCR DIVSLOW [0..3]  ============================================== */
typedef enum {                                  /*!< SCG_HCCR_DIVSLOW                                                          */
  SCG_HCCR_DIVSLOW_0000                = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_HCCR_DIVSLOW_0001                = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_HCCR_DIVSLOW_0010                = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_HCCR_DIVSLOW_0011                = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_HCCR_DIVSLOW_0100                = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_HCCR_DIVSLOW_0101                = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_HCCR_DIVSLOW_0110                = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_HCCR_DIVSLOW_0111                = 7,     /*!< 0111 : Divide-by-8                                                        */
} SCG_HCCR_DIVSLOW_Enum;

/* ==============================================  SCG SCG_HCCR DIVBUS [4..7]  =============================================== */
typedef enum {                                  /*!< SCG_HCCR_DIVBUS                                                           */
  SCG_HCCR_DIVBUS_0000                 = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_HCCR_DIVBUS_0001                 = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_HCCR_DIVBUS_0010                 = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_HCCR_DIVBUS_0011                 = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_HCCR_DIVBUS_0100                 = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_HCCR_DIVBUS_0101                 = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_HCCR_DIVBUS_0110                 = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_HCCR_DIVBUS_0111                 = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_HCCR_DIVBUS_1000                 = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_HCCR_DIVBUS_1001                 = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_HCCR_DIVBUS_1010                 = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_HCCR_DIVBUS_1011                 = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_HCCR_DIVBUS_1100                 = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_HCCR_DIVBUS_1101                 = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_HCCR_DIVBUS_1110                 = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_HCCR_DIVBUS_1111                 = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_HCCR_DIVBUS_Enum;

/* =============================================  SCG SCG_HCCR DIVCORE [16..19]  ============================================= */
typedef enum {                                  /*!< SCG_HCCR_DIVCORE                                                          */
  SCG_HCCR_DIVCORE_0000                = 0,     /*!< 0000 : Divide-by-1                                                        */
  SCG_HCCR_DIVCORE_0001                = 1,     /*!< 0001 : Divide-by-2                                                        */
  SCG_HCCR_DIVCORE_0010                = 2,     /*!< 0010 : Divide-by-3                                                        */
  SCG_HCCR_DIVCORE_0011                = 3,     /*!< 0011 : Divide-by-4                                                        */
  SCG_HCCR_DIVCORE_0100                = 4,     /*!< 0100 : Divide-by-5                                                        */
  SCG_HCCR_DIVCORE_0101                = 5,     /*!< 0101 : Divide-by-6                                                        */
  SCG_HCCR_DIVCORE_0110                = 6,     /*!< 0110 : Divide-by-7                                                        */
  SCG_HCCR_DIVCORE_0111                = 7,     /*!< 0111 : Divide-by-8                                                        */
  SCG_HCCR_DIVCORE_1000                = 8,     /*!< 1000 : Divide-by-9                                                        */
  SCG_HCCR_DIVCORE_1001                = 9,     /*!< 1001 : Divide-by-10                                                       */
  SCG_HCCR_DIVCORE_1010                = 10,    /*!< 1010 : Divide-by-11                                                       */
  SCG_HCCR_DIVCORE_1011                = 11,    /*!< 1011 : Divide-by-12                                                       */
  SCG_HCCR_DIVCORE_1100                = 12,    /*!< 1100 : Divide-by-13                                                       */
  SCG_HCCR_DIVCORE_1101                = 13,    /*!< 1101 : Divide-by-14                                                       */
  SCG_HCCR_DIVCORE_1110                = 14,    /*!< 1110 : Divide-by-15                                                       */
  SCG_HCCR_DIVCORE_1111                = 15,    /*!< 1111 : Divide-by-16                                                       */
} SCG_HCCR_DIVCORE_Enum;

/* ===============================================  SCG SCG_HCCR SCS [24..27]  =============================================== */
typedef enum {                                  /*!< SCG_HCCR_SCS                                                              */
  SCG_HCCR_SCS_0011                    = 3,     /*!< 0011 : Fast IRC (FIRC_CLK)                                                */
  SCG_HCCR_SCS_0110                    = 6,     /*!< 0110 : System PLL (SPLL_CLK)                                              */
} SCG_HCCR_SCS_Enum;

/* ====================================================  SCG_CLKOUTCNFG  ===================================================== */
/* =========================================  SCG SCG_CLKOUTCNFG CLKOUTSEL [24..27]  ========================================= */
typedef enum {                                  /*!< SCG_CLKOUTCNFG_CLKOUTSEL                                                  */
  SCG_CLKOUTCNFG_CLKOUTSEL_0000        = 0,     /*!< 0000 : SCG SLOW Clock                                                     */
  SCG_CLKOUTCNFG_CLKOUTSEL_0001        = 1,     /*!< 0001 : System OSC (SOSC_CLK)                                              */
  SCG_CLKOUTCNFG_CLKOUTSEL_0010        = 2,     /*!< 0010 : Slow IRC (SIRC_CLK)                                                */
  SCG_CLKOUTCNFG_CLKOUTSEL_0011        = 3,     /*!< 0011 : Fast IRC (FIRC_CLK)                                                */
  SCG_CLKOUTCNFG_CLKOUTSEL_0110        = 6,     /*!< 0110 : System PLL (SPLL_CLK)                                              */
} SCG_CLKOUTCNFG_CLKOUTSEL_Enum;

/* ======================================================  SCG_SOSCCSR  ====================================================== */
/* =============================================  SCG SCG_SOSCCSR SOSCEN [0..0]  ============================================= */
typedef enum {                                  /*!< SCG_SOSCCSR_SOSCEN                                                        */
  SCG_SOSCCSR_SOSCEN_0                 = 0,     /*!< 0 : System OSC is disabled                                                */
  SCG_SOSCCSR_SOSCEN_1                 = 1,     /*!< 1 : System OSC is enabled                                                 */
} SCG_SOSCCSR_SOSCEN_Enum;

/* ============================================  SCG SCG_SOSCCSR SOSCCM [16..16]  ============================================ */
typedef enum {                                  /*!< SCG_SOSCCSR_SOSCCM                                                        */
  SCG_SOSCCSR_SOSCCM_0                 = 0,     /*!< 0 : System OSC Clock Monitor is disabled                                  */
  SCG_SOSCCSR_SOSCCM_1                 = 1,     /*!< 1 : System OSC Clock Monitor is enabled                                   */
} SCG_SOSCCSR_SOSCCM_Enum;

/* ===========================================  SCG SCG_SOSCCSR SOSCCMRE [17..17]  =========================================== */
typedef enum {                                  /*!< SCG_SOSCCSR_SOSCCMRE                                                      */
  SCG_SOSCCSR_SOSCCMRE_0               = 0,     /*!< 0 : Clock Monitor generates interrupt when error detected                 */
  SCG_SOSCCSR_SOSCCMRE_1               = 1,     /*!< 1 : Clock Monitor generates reset when error detected                     */
} SCG_SOSCCSR_SOSCCMRE_Enum;

/* ==============================================  SCG SCG_SOSCCSR LK [23..23]  ============================================== */
typedef enum {                                  /*!< SCG_SOSCCSR_LK                                                            */
  SCG_SOSCCSR_LK_0                     = 0,     /*!< 0 : This Control Status Register can be written.                          */
  SCG_SOSCCSR_LK_1                     = 1,     /*!< 1 : This Control Status Register cannot be written.                       */
} SCG_SOSCCSR_LK_Enum;

/* ===========================================  SCG SCG_SOSCCSR SOSCVLD [24..24]  ============================================ */
typedef enum {                                  /*!< SCG_SOSCCSR_SOSCVLD                                                       */
  SCG_SOSCCSR_SOSCVLD_0                = 0,     /*!< 0 : System OSC is not enabled or clock is not valid                       */
  SCG_SOSCCSR_SOSCVLD_1                = 1,     /*!< 1 : System OSC is enabled and output clock is valid                       */
} SCG_SOSCCSR_SOSCVLD_Enum;

/* ===========================================  SCG SCG_SOSCCSR SOSCSEL [25..25]  ============================================ */
typedef enum {                                  /*!< SCG_SOSCCSR_SOSCSEL                                                       */
  SCG_SOSCCSR_SOSCSEL_0                = 0,     /*!< 0 : System OSC is not the system clock source                             */
  SCG_SOSCCSR_SOSCSEL_1                = 1,     /*!< 1 : System OSC is the system clock source                                 */
} SCG_SOSCCSR_SOSCSEL_Enum;

/* ===========================================  SCG SCG_SOSCCSR SOSCERR [26..26]  ============================================ */
typedef enum {                                  /*!< SCG_SOSCCSR_SOSCERR                                                       */
  SCG_SOSCCSR_SOSCERR_0                = 0,     /*!< 0 : System OSC Clock Monitor is disabled or has not detected
                                                     an error                                                                  */
  SCG_SOSCCSR_SOSCERR_1                = 1,     /*!< 1 : System OSC Clock Monitor is enabled and detected an error             */
} SCG_SOSCCSR_SOSCERR_Enum;

/* ======================================================  SCG_SOSCDIV  ====================================================== */
/* ============================================  SCG SCG_SOSCDIV SOSCDIV1 [0..2]  ============================================ */
typedef enum {                                  /*!< SCG_SOSCDIV_SOSCDIV1                                                      */
  SCG_SOSCDIV_SOSCDIV1_000             = 0,     /*!< 000 : Output disabled                                                     */
  SCG_SOSCDIV_SOSCDIV1_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_SOSCDIV_SOSCDIV1_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_SOSCDIV_SOSCDIV1_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_SOSCDIV_SOSCDIV1_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_SOSCDIV_SOSCDIV1_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_SOSCDIV_SOSCDIV1_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_SOSCDIV_SOSCDIV1_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_SOSCDIV_SOSCDIV1_Enum;

/* ===========================================  SCG SCG_SOSCDIV SOSCDIV2 [8..10]  ============================================ */
typedef enum {                                  /*!< SCG_SOSCDIV_SOSCDIV2                                                      */
  SCG_SOSCDIV_SOSCDIV2_000             = 0,     /*!< 000 : Output disabled                                                     */
  SCG_SOSCDIV_SOSCDIV2_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_SOSCDIV_SOSCDIV2_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_SOSCDIV_SOSCDIV2_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_SOSCDIV_SOSCDIV2_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_SOSCDIV_SOSCDIV2_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_SOSCDIV_SOSCDIV2_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_SOSCDIV_SOSCDIV2_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_SOSCDIV_SOSCDIV2_Enum;

/* ======================================================  SCG_SOSCCFG  ====================================================== */
/* =============================================  SCG SCG_SOSCCFG EREFS [2..2]  ============================================== */
typedef enum {                                  /*!< SCG_SOSCCFG_EREFS                                                         */
  SCG_SOSCCFG_EREFS_0                  = 0,     /*!< 0 : External reference clock selected                                     */
  SCG_SOSCCFG_EREFS_1                  = 1,     /*!< 1 : Internal crystal oscillator of OSC selected.                          */
} SCG_SOSCCFG_EREFS_Enum;

/* ==============================================  SCG SCG_SOSCCFG HGO [3..3]  =============================================== */
typedef enum {                                  /*!< SCG_SOSCCFG_HGO                                                           */
  SCG_SOSCCFG_HGO_0                    = 0,     /*!< 0 : Configure crystal oscillator for low-gain operation                   */
  SCG_SOSCCFG_HGO_1                    = 1,     /*!< 1 : Configure crystal oscillator for high-gain operation                  */
} SCG_SOSCCFG_HGO_Enum;

/* =============================================  SCG SCG_SOSCCFG RANGE [4..5]  ============================================== */
typedef enum {                                  /*!< SCG_SOSCCFG_RANGE                                                         */
  SCG_SOSCCFG_RANGE_01                 = 1,     /*!< 01 : Low frequency range selected for the crystal oscillator              */
  SCG_SOSCCFG_RANGE_10                 = 2,     /*!< 10 : Medium frequency range selected for the crytstal oscillator          */
  SCG_SOSCCFG_RANGE_11                 = 3,     /*!< 11 : High frequency range selected for the crystal oscillator             */
} SCG_SOSCCFG_RANGE_Enum;

/* ======================================================  SCG_SIRCCSR  ====================================================== */
/* =============================================  SCG SCG_SIRCCSR SIRCEN [0..0]  ============================================= */
typedef enum {                                  /*!< SCG_SIRCCSR_SIRCEN                                                        */
  SCG_SIRCCSR_SIRCEN_0                 = 0,     /*!< 0 : Slow IRC is disabled                                                  */
  SCG_SIRCCSR_SIRCEN_1                 = 1,     /*!< 1 : Slow IRC is enabled                                                   */
} SCG_SIRCCSR_SIRCEN_Enum;

/* ============================================  SCG SCG_SIRCCSR SIRCSTEN [1..1]  ============================================ */
typedef enum {                                  /*!< SCG_SIRCCSR_SIRCSTEN                                                      */
  SCG_SIRCCSR_SIRCSTEN_0               = 0,     /*!< 0 : Slow IRC is disabled in supported Stop modes                          */
  SCG_SIRCCSR_SIRCSTEN_1               = 1,     /*!< 1 : Slow IRC is enabled in supported Stop modes                           */
} SCG_SIRCCSR_SIRCSTEN_Enum;

/* ============================================  SCG SCG_SIRCCSR SIRCLPEN [2..2]  ============================================ */
typedef enum {                                  /*!< SCG_SIRCCSR_SIRCLPEN                                                      */
  SCG_SIRCCSR_SIRCLPEN_0               = 0,     /*!< 0 : Slow IRC is disabled in VLP modes                                     */
  SCG_SIRCCSR_SIRCLPEN_1               = 1,     /*!< 1 : Slow IRC is enabled in VLP modes                                      */
} SCG_SIRCCSR_SIRCLPEN_Enum;

/* ==============================================  SCG SCG_SIRCCSR LK [23..23]  ============================================== */
typedef enum {                                  /*!< SCG_SIRCCSR_LK                                                            */
  SCG_SIRCCSR_LK_0                     = 0,     /*!< 0 : Control Status Register can be written.                               */
  SCG_SIRCCSR_LK_1                     = 1,     /*!< 1 : Control Status Register cannot be written.                            */
} SCG_SIRCCSR_LK_Enum;

/* ===========================================  SCG SCG_SIRCCSR SIRCVLD [24..24]  ============================================ */
typedef enum {                                  /*!< SCG_SIRCCSR_SIRCVLD                                                       */
  SCG_SIRCCSR_SIRCVLD_0                = 0,     /*!< 0 : Slow IRC is not enabled or clock is not valid                         */
  SCG_SIRCCSR_SIRCVLD_1                = 1,     /*!< 1 : Slow IRC is enabled and output clock is valid                         */
} SCG_SIRCCSR_SIRCVLD_Enum;

/* ===========================================  SCG SCG_SIRCCSR SIRCSEL [25..25]  ============================================ */
typedef enum {                                  /*!< SCG_SIRCCSR_SIRCSEL                                                       */
  SCG_SIRCCSR_SIRCSEL_0                = 0,     /*!< 0 : Slow IRC is not the system clock source                               */
  SCG_SIRCCSR_SIRCSEL_1                = 1,     /*!< 1 : Slow IRC is the system clock source                                   */
} SCG_SIRCCSR_SIRCSEL_Enum;

/* ======================================================  SCG_SIRCDIV  ====================================================== */
/* ============================================  SCG SCG_SIRCDIV SIRCDIV1 [0..2]  ============================================ */
typedef enum {                                  /*!< SCG_SIRCDIV_SIRCDIV1                                                      */
  SCG_SIRCDIV_SIRCDIV1_000             = 0,     /*!< 000 : Output disabled                                                     */
  SCG_SIRCDIV_SIRCDIV1_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_SIRCDIV_SIRCDIV1_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_SIRCDIV_SIRCDIV1_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_SIRCDIV_SIRCDIV1_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_SIRCDIV_SIRCDIV1_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_SIRCDIV_SIRCDIV1_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_SIRCDIV_SIRCDIV1_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_SIRCDIV_SIRCDIV1_Enum;

/* ===========================================  SCG SCG_SIRCDIV SIRCDIV2 [8..10]  ============================================ */
typedef enum {                                  /*!< SCG_SIRCDIV_SIRCDIV2                                                      */
  SCG_SIRCDIV_SIRCDIV2_000             = 0,     /*!< 000 : Output disabled                                                     */
  SCG_SIRCDIV_SIRCDIV2_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_SIRCDIV_SIRCDIV2_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_SIRCDIV_SIRCDIV2_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_SIRCDIV_SIRCDIV2_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_SIRCDIV_SIRCDIV2_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_SIRCDIV_SIRCDIV2_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_SIRCDIV_SIRCDIV2_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_SIRCDIV_SIRCDIV2_Enum;

/* ======================================================  SCG_SIRCCFG  ====================================================== */
/* =============================================  SCG SCG_SIRCCFG RANGE [0..0]  ============================================== */
typedef enum {                                  /*!< SCG_SIRCCFG_RANGE                                                         */
  SCG_SIRCCFG_RANGE_0                  = 0,     /*!< 0 : Slow IRC low range clock (2 MHz)                                      */
  SCG_SIRCCFG_RANGE_1                  = 1,     /*!< 1 : Slow IRC high range clock (8 MHz )                                    */
} SCG_SIRCCFG_RANGE_Enum;

/* ======================================================  SCG_FIRCCSR  ====================================================== */
/* =============================================  SCG SCG_FIRCCSR FIRCEN [0..0]  ============================================= */
typedef enum {                                  /*!< SCG_FIRCCSR_FIRCEN                                                        */
  SCG_FIRCCSR_FIRCEN_0                 = 0,     /*!< 0 : Fast IRC is disabled                                                  */
  SCG_FIRCCSR_FIRCEN_1                 = 1,     /*!< 1 : Fast IRC is enabled                                                   */
} SCG_FIRCCSR_FIRCEN_Enum;

/* ===========================================  SCG SCG_FIRCCSR FIRCREGOFF [3..3]  =========================================== */
typedef enum {                                  /*!< SCG_FIRCCSR_FIRCREGOFF                                                    */
  SCG_FIRCCSR_FIRCREGOFF_0             = 0,     /*!< 0 : Fast IRC Regulator is enabled.                                        */
  SCG_FIRCCSR_FIRCREGOFF_1             = 1,     /*!< 1 : Fast IRC Regulator is disabled.                                       */
} SCG_FIRCCSR_FIRCREGOFF_Enum;

/* ==============================================  SCG SCG_FIRCCSR LK [23..23]  ============================================== */
typedef enum {                                  /*!< SCG_FIRCCSR_LK                                                            */
  SCG_FIRCCSR_LK_0                     = 0,     /*!< 0 : Control Status Register can be written.                               */
  SCG_FIRCCSR_LK_1                     = 1,     /*!< 1 : Control Status Register cannot be written.                            */
} SCG_FIRCCSR_LK_Enum;

/* ===========================================  SCG SCG_FIRCCSR FIRCVLD [24..24]  ============================================ */
typedef enum {                                  /*!< SCG_FIRCCSR_FIRCVLD                                                       */
  SCG_FIRCCSR_FIRCVLD_0                = 0,     /*!< 0 : Fast IRC is not enabled or clock is not valid.                        */
  SCG_FIRCCSR_FIRCVLD_1                = 1,     /*!< 1 : Fast IRC is enabled and output clock is valid. The clock
                                                     is valid once there is an output clock from the FIRC analog.              */
} SCG_FIRCCSR_FIRCVLD_Enum;

/* ===========================================  SCG SCG_FIRCCSR FIRCSEL [25..25]  ============================================ */
typedef enum {                                  /*!< SCG_FIRCCSR_FIRCSEL                                                       */
  SCG_FIRCCSR_FIRCSEL_0                = 0,     /*!< 0 : Fast IRC is not the system clock source                               */
  SCG_FIRCCSR_FIRCSEL_1                = 1,     /*!< 1 : Fast IRC is the system clock source                                   */
} SCG_FIRCCSR_FIRCSEL_Enum;

/* ===========================================  SCG SCG_FIRCCSR FIRCERR [26..26]  ============================================ */
typedef enum {                                  /*!< SCG_FIRCCSR_FIRCERR                                                       */
  SCG_FIRCCSR_FIRCERR_0                = 0,     /*!< 0 : Error not detected with the Fast IRC trimming.                        */
  SCG_FIRCCSR_FIRCERR_1                = 1,     /*!< 1 : Error detected with the Fast IRC trimming.                            */
} SCG_FIRCCSR_FIRCERR_Enum;

/* ======================================================  SCG_FIRCDIV  ====================================================== */
/* ============================================  SCG SCG_FIRCDIV FIRCDIV1 [0..2]  ============================================ */
typedef enum {                                  /*!< SCG_FIRCDIV_FIRCDIV1                                                      */
  SCG_FIRCDIV_FIRCDIV1_000             = 0,     /*!< 000 : Output disabled                                                     */
  SCG_FIRCDIV_FIRCDIV1_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_FIRCDIV_FIRCDIV1_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_FIRCDIV_FIRCDIV1_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_FIRCDIV_FIRCDIV1_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_FIRCDIV_FIRCDIV1_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_FIRCDIV_FIRCDIV1_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_FIRCDIV_FIRCDIV1_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_FIRCDIV_FIRCDIV1_Enum;

/* ===========================================  SCG SCG_FIRCDIV FIRCDIV2 [8..10]  ============================================ */
typedef enum {                                  /*!< SCG_FIRCDIV_FIRCDIV2                                                      */
  SCG_FIRCDIV_FIRCDIV2_000             = 0,     /*!< 000 : Output disabled                                                     */
  SCG_FIRCDIV_FIRCDIV2_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_FIRCDIV_FIRCDIV2_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_FIRCDIV_FIRCDIV2_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_FIRCDIV_FIRCDIV2_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_FIRCDIV_FIRCDIV2_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_FIRCDIV_FIRCDIV2_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_FIRCDIV_FIRCDIV2_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_FIRCDIV_FIRCDIV2_Enum;

/* ======================================================  SCG_FIRCCFG  ====================================================== */
/* =============================================  SCG SCG_FIRCCFG RANGE [0..1]  ============================================== */
typedef enum {                                  /*!< SCG_FIRCCFG_RANGE                                                         */
  SCG_FIRCCFG_RANGE_00                 = 0,     /*!< 00 : Fast IRC is trimmed to 48 MHz                                        */
} SCG_FIRCCFG_RANGE_Enum;

/* ======================================================  SCG_SPLLCSR  ====================================================== */
/* =============================================  SCG SCG_SPLLCSR SPLLEN [0..0]  ============================================= */
typedef enum {                                  /*!< SCG_SPLLCSR_SPLLEN                                                        */
  SCG_SPLLCSR_SPLLEN_0                 = 0,     /*!< 0 : System PLL is disabled                                                */
  SCG_SPLLCSR_SPLLEN_1                 = 1,     /*!< 1 : System PLL is enabled                                                 */
} SCG_SPLLCSR_SPLLEN_Enum;

/* ============================================  SCG SCG_SPLLCSR SPLLCM [16..16]  ============================================ */
typedef enum {                                  /*!< SCG_SPLLCSR_SPLLCM                                                        */
  SCG_SPLLCSR_SPLLCM_0                 = 0,     /*!< 0 : System PLL Clock Monitor is disabled                                  */
  SCG_SPLLCSR_SPLLCM_1                 = 1,     /*!< 1 : System PLL Clock Monitor is enabled                                   */
} SCG_SPLLCSR_SPLLCM_Enum;

/* ===========================================  SCG SCG_SPLLCSR SPLLCMRE [17..17]  =========================================== */
typedef enum {                                  /*!< SCG_SPLLCSR_SPLLCMRE                                                      */
  SCG_SPLLCSR_SPLLCMRE_0               = 0,     /*!< 0 : Clock Monitor generates interrupt when error detected                 */
  SCG_SPLLCSR_SPLLCMRE_1               = 1,     /*!< 1 : Clock Monitor generates reset when error detected                     */
} SCG_SPLLCSR_SPLLCMRE_Enum;

/* ==============================================  SCG SCG_SPLLCSR LK [23..23]  ============================================== */
typedef enum {                                  /*!< SCG_SPLLCSR_LK                                                            */
  SCG_SPLLCSR_LK_0                     = 0,     /*!< 0 : Control Status Register can be written.                               */
  SCG_SPLLCSR_LK_1                     = 1,     /*!< 1 : Control Status Register cannot be written.                            */
} SCG_SPLLCSR_LK_Enum;

/* ===========================================  SCG SCG_SPLLCSR SPLLVLD [24..24]  ============================================ */
typedef enum {                                  /*!< SCG_SPLLCSR_SPLLVLD                                                       */
  SCG_SPLLCSR_SPLLVLD_0                = 0,     /*!< 0 : System PLL is not enabled or clock is not valid                       */
  SCG_SPLLCSR_SPLLVLD_1                = 1,     /*!< 1 : System PLL is enabled and output clock is valid                       */
} SCG_SPLLCSR_SPLLVLD_Enum;

/* ===========================================  SCG SCG_SPLLCSR SPLLSEL [25..25]  ============================================ */
typedef enum {                                  /*!< SCG_SPLLCSR_SPLLSEL                                                       */
  SCG_SPLLCSR_SPLLSEL_0                = 0,     /*!< 0 : System PLL is not the system clock source                             */
  SCG_SPLLCSR_SPLLSEL_1                = 1,     /*!< 1 : System PLL is the system clock source                                 */
} SCG_SPLLCSR_SPLLSEL_Enum;

/* ===========================================  SCG SCG_SPLLCSR SPLLERR [26..26]  ============================================ */
typedef enum {                                  /*!< SCG_SPLLCSR_SPLLERR                                                       */
  SCG_SPLLCSR_SPLLERR_0                = 0,     /*!< 0 : System PLL Clock Monitor is disabled or has not detected
                                                     an error                                                                  */
  SCG_SPLLCSR_SPLLERR_1                = 1,     /*!< 1 : System PLL Clock Monitor is enabled and detected an error.
                                                     System PLL Clock Error flag will not set when System OSC
                                                     is selected as its source and SOSCERR has set.                            */
} SCG_SPLLCSR_SPLLERR_Enum;

/* ======================================================  SCG_SPLLDIV  ====================================================== */
/* ============================================  SCG SCG_SPLLDIV SPLLDIV1 [0..2]  ============================================ */
typedef enum {                                  /*!< SCG_SPLLDIV_SPLLDIV1                                                      */
  SCG_SPLLDIV_SPLLDIV1_000             = 0,     /*!< 000 : Clock disabled                                                      */
  SCG_SPLLDIV_SPLLDIV1_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_SPLLDIV_SPLLDIV1_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_SPLLDIV_SPLLDIV1_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_SPLLDIV_SPLLDIV1_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_SPLLDIV_SPLLDIV1_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_SPLLDIV_SPLLDIV1_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_SPLLDIV_SPLLDIV1_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_SPLLDIV_SPLLDIV1_Enum;

/* ===========================================  SCG SCG_SPLLDIV SPLLDIV2 [8..10]  ============================================ */
typedef enum {                                  /*!< SCG_SPLLDIV_SPLLDIV2                                                      */
  SCG_SPLLDIV_SPLLDIV2_000             = 0,     /*!< 000 : Clock disabled                                                      */
  SCG_SPLLDIV_SPLLDIV2_001             = 1,     /*!< 001 : Divide by 1                                                         */
  SCG_SPLLDIV_SPLLDIV2_010             = 2,     /*!< 010 : Divide by 2                                                         */
  SCG_SPLLDIV_SPLLDIV2_011             = 3,     /*!< 011 : Divide by 4                                                         */
  SCG_SPLLDIV_SPLLDIV2_100             = 4,     /*!< 100 : Divide by 8                                                         */
  SCG_SPLLDIV_SPLLDIV2_101             = 5,     /*!< 101 : Divide by 16                                                        */
  SCG_SPLLDIV_SPLLDIV2_110             = 6,     /*!< 110 : Divide by 32                                                        */
  SCG_SPLLDIV_SPLLDIV2_111             = 7,     /*!< 111 : Divide by 64                                                        */
} SCG_SPLLDIV_SPLLDIV2_Enum;

/* ======================================================  SCG_SPLLCFG  ====================================================== */


/* =========================================================================================================================== */
/* ================                                            PCC                                            ================ */
/* =========================================================================================================================== */

/* =======================================================  PCC_FTFC  ======================================================== */
/* ===============================================  PCC PCC_FTFC CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTFC_CGC                                                          */
  PCC_PCC_FTFC_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FTFC_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FTFC_CGC_Enum;

/* ===============================================  PCC PCC_FTFC PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_FTFC_PR                                                           */
  PCC_PCC_FTFC_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FTFC_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FTFC_PR_Enum;

/* ======================================================  PCC_DMAMUX  ======================================================= */
/* ==============================================  PCC PCC_DMAMUX CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_DMAMUX_CGC                                                        */
  PCC_PCC_DMAMUX_CGC_0                 = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_DMAMUX_CGC_1                 = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_DMAMUX_CGC_Enum;

/* ==============================================  PCC PCC_DMAMUX PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_DMAMUX_PR                                                         */
  PCC_PCC_DMAMUX_PR_0                  = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_DMAMUX_PR_1                  = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_DMAMUX_PR_Enum;

/* =====================================================  PCC_FlexCAN0  ====================================================== */
/* =============================================  PCC PCC_FlexCAN0 CGC [30..30]  ============================================= */
typedef enum {                                  /*!< PCC_PCC_FlexCAN0_CGC                                                      */
  PCC_PCC_FlexCAN0_CGC_0               = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FlexCAN0_CGC_1               = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FlexCAN0_CGC_Enum;

/* =============================================  PCC PCC_FlexCAN0 PR [31..31]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_FlexCAN0_PR                                                       */
  PCC_PCC_FlexCAN0_PR_0                = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FlexCAN0_PR_1                = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FlexCAN0_PR_Enum;

/* =====================================================  PCC_FlexCAN1  ====================================================== */
/* =============================================  PCC PCC_FlexCAN1 CGC [30..30]  ============================================= */
typedef enum {                                  /*!< PCC_PCC_FlexCAN1_CGC                                                      */
  PCC_PCC_FlexCAN1_CGC_0               = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FlexCAN1_CGC_1               = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FlexCAN1_CGC_Enum;

/* =============================================  PCC PCC_FlexCAN1 PR [31..31]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_FlexCAN1_PR                                                       */
  PCC_PCC_FlexCAN1_PR_0                = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FlexCAN1_PR_1                = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FlexCAN1_PR_Enum;

/* =======================================================  PCC_FTM3  ======================================================== */
/* ===============================================  PCC PCC_FTM3 PCS [24..26]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM3_PCS                                                          */
  PCC_PCC_FTM3_PCS_000                 = 0,     /*!< 000 : Clock is off. An external clock can be enabled for this
                                                     peripheral.                                                               */
  PCC_PCC_FTM3_PCS_001                 = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_FTM3_PCS_010                 = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_FTM3_PCS_011                 = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_FTM3_PCS_100                 = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_FTM3_PCS_101                 = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_FTM3_PCS_110                 = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_FTM3_PCS_111                 = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_FTM3_PCS_Enum;

/* ===============================================  PCC PCC_FTM3 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM3_CGC                                                          */
  PCC_PCC_FTM3_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FTM3_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FTM3_CGC_Enum;

/* ===============================================  PCC PCC_FTM3 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_FTM3_PR                                                           */
  PCC_PCC_FTM3_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FTM3_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FTM3_PR_Enum;

/* =======================================================  PCC_ADC1  ======================================================== */
/* ===============================================  PCC PCC_ADC1 PCS [24..26]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_ADC1_PCS                                                          */
  PCC_PCC_ADC1_PCS_000                 = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_ADC1_PCS_001                 = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_ADC1_PCS_010                 = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_ADC1_PCS_011                 = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_ADC1_PCS_100                 = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_ADC1_PCS_101                 = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_ADC1_PCS_110                 = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_ADC1_PCS_111                 = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_ADC1_PCS_Enum;

/* ===============================================  PCC PCC_ADC1 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_ADC1_CGC                                                          */
  PCC_PCC_ADC1_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_ADC1_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_ADC1_CGC_Enum;

/* ===============================================  PCC PCC_ADC1 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_ADC1_PR                                                           */
  PCC_PCC_ADC1_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_ADC1_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_ADC1_PR_Enum;

/* ======================================================  PCC_LPSPI0  ======================================================= */
/* ==============================================  PCC PCC_LPSPI0 PCS [24..26]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPSPI0_PCS                                                        */
  PCC_PCC_LPSPI0_PCS_000               = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_LPSPI0_PCS_001               = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_LPSPI0_PCS_010               = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_LPSPI0_PCS_011               = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_LPSPI0_PCS_100               = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_LPSPI0_PCS_101               = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_LPSPI0_PCS_110               = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_LPSPI0_PCS_111               = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_LPSPI0_PCS_Enum;

/* ==============================================  PCC PCC_LPSPI0 CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPSPI0_CGC                                                        */
  PCC_PCC_LPSPI0_CGC_0                 = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_LPSPI0_CGC_1                 = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_LPSPI0_CGC_Enum;

/* ==============================================  PCC PCC_LPSPI0 PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPSPI0_PR                                                         */
  PCC_PCC_LPSPI0_PR_0                  = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_LPSPI0_PR_1                  = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_LPSPI0_PR_Enum;

/* ======================================================  PCC_LPSPI1  ======================================================= */
/* ==============================================  PCC PCC_LPSPI1 PCS [24..26]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPSPI1_PCS                                                        */
  PCC_PCC_LPSPI1_PCS_000               = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_LPSPI1_PCS_001               = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_LPSPI1_PCS_010               = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_LPSPI1_PCS_011               = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_LPSPI1_PCS_100               = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_LPSPI1_PCS_101               = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_LPSPI1_PCS_110               = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_LPSPI1_PCS_111               = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_LPSPI1_PCS_Enum;

/* ==============================================  PCC PCC_LPSPI1 CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPSPI1_CGC                                                        */
  PCC_PCC_LPSPI1_CGC_0                 = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_LPSPI1_CGC_1                 = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_LPSPI1_CGC_Enum;

/* ==============================================  PCC PCC_LPSPI1 PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPSPI1_PR                                                         */
  PCC_PCC_LPSPI1_PR_0                  = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_LPSPI1_PR_1                  = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_LPSPI1_PR_Enum;

/* =======================================================  PCC_PDB1  ======================================================== */
/* ===============================================  PCC PCC_PDB1 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PDB1_CGC                                                          */
  PCC_PCC_PDB1_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_PDB1_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_PDB1_CGC_Enum;

/* ===============================================  PCC PCC_PDB1 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_PDB1_PR                                                           */
  PCC_PCC_PDB1_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_PDB1_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_PDB1_PR_Enum;

/* ========================================================  PCC_CRC  ======================================================== */
/* ===============================================  PCC PCC_CRC CGC [30..30]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_CRC_CGC                                                           */
  PCC_PCC_CRC_CGC_0                    = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_CRC_CGC_1                    = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_CRC_CGC_Enum;

/* ================================================  PCC PCC_CRC PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_CRC_PR                                                            */
  PCC_PCC_CRC_PR_0                     = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_CRC_PR_1                     = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_CRC_PR_Enum;

/* =======================================================  PCC_PDB0  ======================================================== */
/* ===============================================  PCC PCC_PDB0 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PDB0_CGC                                                          */
  PCC_PCC_PDB0_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_PDB0_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_PDB0_CGC_Enum;

/* ===============================================  PCC PCC_PDB0 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_PDB0_PR                                                           */
  PCC_PCC_PDB0_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_PDB0_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_PDB0_PR_Enum;

/* =======================================================  PCC_LPIT  ======================================================== */
/* ===============================================  PCC PCC_LPIT PCS [24..26]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPIT_PCS                                                          */
  PCC_PCC_LPIT_PCS_000                 = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_LPIT_PCS_001                 = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_LPIT_PCS_010                 = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_LPIT_PCS_011                 = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_LPIT_PCS_100                 = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_LPIT_PCS_101                 = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_LPIT_PCS_110                 = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_LPIT_PCS_111                 = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_LPIT_PCS_Enum;

/* ===============================================  PCC PCC_LPIT CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPIT_CGC                                                          */
  PCC_PCC_LPIT_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_LPIT_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_LPIT_CGC_Enum;

/* ===============================================  PCC PCC_LPIT PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_LPIT_PR                                                           */
  PCC_PCC_LPIT_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_LPIT_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_LPIT_PR_Enum;

/* =======================================================  PCC_FTM0  ======================================================== */
/* ===============================================  PCC PCC_FTM0 PCS [24..26]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM0_PCS                                                          */
  PCC_PCC_FTM0_PCS_000                 = 0,     /*!< 000 : Clock is off. An external clock can be enabled for this
                                                     peripheral.                                                               */
  PCC_PCC_FTM0_PCS_001                 = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_FTM0_PCS_010                 = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_FTM0_PCS_011                 = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_FTM0_PCS_100                 = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_FTM0_PCS_101                 = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_FTM0_PCS_110                 = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_FTM0_PCS_111                 = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_FTM0_PCS_Enum;

/* ===============================================  PCC PCC_FTM0 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM0_CGC                                                          */
  PCC_PCC_FTM0_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FTM0_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FTM0_CGC_Enum;

/* ===============================================  PCC PCC_FTM0 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_FTM0_PR                                                           */
  PCC_PCC_FTM0_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FTM0_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FTM0_PR_Enum;

/* =======================================================  PCC_FTM1  ======================================================== */
/* ===============================================  PCC PCC_FTM1 PCS [24..26]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM1_PCS                                                          */
  PCC_PCC_FTM1_PCS_000                 = 0,     /*!< 000 : Clock is off. An external clock can be enabled for this
                                                     peripheral.                                                               */
  PCC_PCC_FTM1_PCS_001                 = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_FTM1_PCS_010                 = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_FTM1_PCS_011                 = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_FTM1_PCS_100                 = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_FTM1_PCS_101                 = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_FTM1_PCS_110                 = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_FTM1_PCS_111                 = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_FTM1_PCS_Enum;

/* ===============================================  PCC PCC_FTM1 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM1_CGC                                                          */
  PCC_PCC_FTM1_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FTM1_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FTM1_CGC_Enum;

/* ===============================================  PCC PCC_FTM1 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_FTM1_PR                                                           */
  PCC_PCC_FTM1_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FTM1_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FTM1_PR_Enum;

/* =======================================================  PCC_FTM2  ======================================================== */
/* ===============================================  PCC PCC_FTM2 PCS [24..26]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM2_PCS                                                          */
  PCC_PCC_FTM2_PCS_000                 = 0,     /*!< 000 : Clock is off. An external clock can be enabled for this
                                                     peripheral.                                                               */
  PCC_PCC_FTM2_PCS_001                 = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_FTM2_PCS_010                 = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_FTM2_PCS_011                 = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_FTM2_PCS_100                 = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_FTM2_PCS_101                 = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_FTM2_PCS_110                 = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_FTM2_PCS_111                 = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_FTM2_PCS_Enum;

/* ===============================================  PCC PCC_FTM2 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FTM2_CGC                                                          */
  PCC_PCC_FTM2_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FTM2_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FTM2_CGC_Enum;

/* ===============================================  PCC PCC_FTM2 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_FTM2_PR                                                           */
  PCC_PCC_FTM2_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FTM2_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FTM2_PR_Enum;

/* =======================================================  PCC_ADC0  ======================================================== */
/* ===============================================  PCC PCC_ADC0 PCS [24..26]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_ADC0_PCS                                                          */
  PCC_PCC_ADC0_PCS_000                 = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_ADC0_PCS_001                 = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_ADC0_PCS_010                 = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_ADC0_PCS_011                 = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_ADC0_PCS_100                 = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_ADC0_PCS_101                 = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_ADC0_PCS_110                 = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_ADC0_PCS_111                 = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_ADC0_PCS_Enum;

/* ===============================================  PCC PCC_ADC0 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_ADC0_CGC                                                          */
  PCC_PCC_ADC0_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_ADC0_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_ADC0_CGC_Enum;

/* ===============================================  PCC PCC_ADC0 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_ADC0_PR                                                           */
  PCC_PCC_ADC0_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_ADC0_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_ADC0_PR_Enum;

/* ========================================================  PCC_RTC  ======================================================== */
/* ===============================================  PCC PCC_RTC CGC [30..30]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_RTC_CGC                                                           */
  PCC_PCC_RTC_CGC_0                    = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_RTC_CGC_1                    = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_RTC_CGC_Enum;

/* ================================================  PCC PCC_RTC PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_RTC_PR                                                            */
  PCC_PCC_RTC_PR_0                     = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_RTC_PR_1                     = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_RTC_PR_Enum;

/* ======================================================  PCC_LPTMR0  ======================================================= */
/* ===============================================  PCC PCC_LPTMR0 PCD [0..2]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPTMR0_PCD                                                        */
  PCC_PCC_LPTMR0_PCD_000               = 0,     /*!< 000 : Divide by 1.                                                        */
  PCC_PCC_LPTMR0_PCD_001               = 1,     /*!< 001 : Divide by 2.                                                        */
  PCC_PCC_LPTMR0_PCD_010               = 2,     /*!< 010 : Divide by 3.                                                        */
  PCC_PCC_LPTMR0_PCD_011               = 3,     /*!< 011 : Divide by 4.                                                        */
  PCC_PCC_LPTMR0_PCD_100               = 4,     /*!< 100 : Divide by 5.                                                        */
  PCC_PCC_LPTMR0_PCD_101               = 5,     /*!< 101 : Divide by 6.                                                        */
  PCC_PCC_LPTMR0_PCD_110               = 6,     /*!< 110 : Divide by 7.                                                        */
  PCC_PCC_LPTMR0_PCD_111               = 7,     /*!< 111 : Divide by 8.                                                        */
} PCC_PCC_LPTMR0_PCD_Enum;

/* ==============================================  PCC PCC_LPTMR0 FRAC [3..3]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPTMR0_FRAC                                                       */
  PCC_PCC_LPTMR0_FRAC_0                = 0,     /*!< 0 : Fractional value is 0.                                                */
  PCC_PCC_LPTMR0_FRAC_1                = 1,     /*!< 1 : Fractional value is 1.                                                */
} PCC_PCC_LPTMR0_FRAC_Enum;

/* ==============================================  PCC PCC_LPTMR0 PCS [24..26]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPTMR0_PCS                                                        */
  PCC_PCC_LPTMR0_PCS_000               = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_LPTMR0_PCS_001               = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_LPTMR0_PCS_010               = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_LPTMR0_PCS_011               = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_LPTMR0_PCS_100               = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_LPTMR0_PCS_101               = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_LPTMR0_PCS_110               = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_LPTMR0_PCS_111               = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_LPTMR0_PCS_Enum;

/* ==============================================  PCC PCC_LPTMR0 CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPTMR0_CGC                                                        */
  PCC_PCC_LPTMR0_CGC_0                 = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_LPTMR0_CGC_1                 = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_LPTMR0_CGC_Enum;

/* ==============================================  PCC PCC_LPTMR0 PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPTMR0_PR                                                         */
  PCC_PCC_LPTMR0_PR_0                  = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_LPTMR0_PR_1                  = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_LPTMR0_PR_Enum;

/* =======================================================  PCC_PORTA  ======================================================= */
/* ==============================================  PCC PCC_PORTA CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTA_CGC                                                         */
  PCC_PCC_PORTA_CGC_0                  = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_PORTA_CGC_1                  = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_PORTA_CGC_Enum;

/* ===============================================  PCC PCC_PORTA PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTA_PR                                                          */
  PCC_PCC_PORTA_PR_0                   = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_PORTA_PR_1                   = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_PORTA_PR_Enum;

/* =======================================================  PCC_PORTB  ======================================================= */
/* ==============================================  PCC PCC_PORTB CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTB_CGC                                                         */
  PCC_PCC_PORTB_CGC_0                  = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_PORTB_CGC_1                  = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_PORTB_CGC_Enum;

/* ===============================================  PCC PCC_PORTB PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTB_PR                                                          */
  PCC_PCC_PORTB_PR_0                   = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_PORTB_PR_1                   = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_PORTB_PR_Enum;

/* =======================================================  PCC_PORTC  ======================================================= */
/* ==============================================  PCC PCC_PORTC CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTC_CGC                                                         */
  PCC_PCC_PORTC_CGC_0                  = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_PORTC_CGC_1                  = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_PORTC_CGC_Enum;

/* ===============================================  PCC PCC_PORTC PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTC_PR                                                          */
  PCC_PCC_PORTC_PR_0                   = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_PORTC_PR_1                   = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_PORTC_PR_Enum;

/* =======================================================  PCC_PORTD  ======================================================= */
/* ==============================================  PCC PCC_PORTD CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTD_CGC                                                         */
  PCC_PCC_PORTD_CGC_0                  = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_PORTD_CGC_1                  = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_PORTD_CGC_Enum;

/* ===============================================  PCC PCC_PORTD PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTD_PR                                                          */
  PCC_PCC_PORTD_PR_0                   = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_PORTD_PR_1                   = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_PORTD_PR_Enum;

/* =======================================================  PCC_PORTE  ======================================================= */
/* ==============================================  PCC PCC_PORTE CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTE_CGC                                                         */
  PCC_PCC_PORTE_CGC_0                  = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_PORTE_CGC_1                  = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_PORTE_CGC_Enum;

/* ===============================================  PCC PCC_PORTE PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_PORTE_PR                                                          */
  PCC_PCC_PORTE_PR_0                   = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_PORTE_PR_1                   = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_PORTE_PR_Enum;

/* ======================================================  PCC_FlexIO  ======================================================= */
/* ==============================================  PCC PCC_FlexIO PCS [24..26]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_FlexIO_PCS                                                        */
  PCC_PCC_FlexIO_PCS_000               = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_FlexIO_PCS_001               = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_FlexIO_PCS_010               = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_FlexIO_PCS_011               = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_FlexIO_PCS_100               = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_FlexIO_PCS_101               = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_FlexIO_PCS_110               = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_FlexIO_PCS_111               = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_FlexIO_PCS_Enum;

/* ==============================================  PCC PCC_FlexIO CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_FlexIO_CGC                                                        */
  PCC_PCC_FlexIO_CGC_0                 = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_FlexIO_CGC_1                 = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_FlexIO_CGC_Enum;

/* ==============================================  PCC PCC_FlexIO PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_FlexIO_PR                                                         */
  PCC_PCC_FlexIO_PR_0                  = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_FlexIO_PR_1                  = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_FlexIO_PR_Enum;

/* ========================================================  PCC_EWM  ======================================================== */
/* ===============================================  PCC PCC_EWM CGC [30..30]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_EWM_CGC                                                           */
  PCC_PCC_EWM_CGC_0                    = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_EWM_CGC_1                    = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_EWM_CGC_Enum;

/* ================================================  PCC PCC_EWM PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_EWM_PR                                                            */
  PCC_PCC_EWM_PR_0                     = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_EWM_PR_1                     = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_EWM_PR_Enum;

/* ======================================================  PCC_LPI2C0  ======================================================= */
/* ==============================================  PCC PCC_LPI2C0 PCS [24..26]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPI2C0_PCS                                                        */
  PCC_PCC_LPI2C0_PCS_000               = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_LPI2C0_PCS_001               = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_LPI2C0_PCS_010               = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_LPI2C0_PCS_011               = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_LPI2C0_PCS_100               = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_LPI2C0_PCS_101               = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_LPI2C0_PCS_110               = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_LPI2C0_PCS_111               = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_LPI2C0_PCS_Enum;

/* ==============================================  PCC PCC_LPI2C0 CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPI2C0_CGC                                                        */
  PCC_PCC_LPI2C0_CGC_0                 = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_LPI2C0_CGC_1                 = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_LPI2C0_CGC_Enum;

/* ==============================================  PCC PCC_LPI2C0 PR [31..31]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_LPI2C0_PR                                                         */
  PCC_PCC_LPI2C0_PR_0                  = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_LPI2C0_PR_1                  = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_LPI2C0_PR_Enum;

/* ======================================================  PCC_LPUART0  ====================================================== */
/* =============================================  PCC PCC_LPUART0 PCS [24..26]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPUART0_PCS                                                       */
  PCC_PCC_LPUART0_PCS_000              = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_LPUART0_PCS_001              = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_LPUART0_PCS_010              = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_LPUART0_PCS_011              = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_LPUART0_PCS_100              = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_LPUART0_PCS_101              = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_LPUART0_PCS_110              = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_LPUART0_PCS_111              = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_LPUART0_PCS_Enum;

/* =============================================  PCC PCC_LPUART0 CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPUART0_CGC                                                       */
  PCC_PCC_LPUART0_CGC_0                = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_LPUART0_CGC_1                = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_LPUART0_CGC_Enum;

/* ==============================================  PCC PCC_LPUART0 PR [31..31]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPUART0_PR                                                        */
  PCC_PCC_LPUART0_PR_0                 = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_LPUART0_PR_1                 = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_LPUART0_PR_Enum;

/* ======================================================  PCC_LPUART1  ====================================================== */
/* =============================================  PCC PCC_LPUART1 PCS [24..26]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPUART1_PCS                                                       */
  PCC_PCC_LPUART1_PCS_000              = 0,     /*!< 000 : Clock is off.                                                       */
  PCC_PCC_LPUART1_PCS_001              = 1,     /*!< 001 : Clock option 1                                                      */
  PCC_PCC_LPUART1_PCS_010              = 2,     /*!< 010 : Clock option 2                                                      */
  PCC_PCC_LPUART1_PCS_011              = 3,     /*!< 011 : Clock option 3                                                      */
  PCC_PCC_LPUART1_PCS_100              = 4,     /*!< 100 : Clock option 4                                                      */
  PCC_PCC_LPUART1_PCS_101              = 5,     /*!< 101 : Clock option 5                                                      */
  PCC_PCC_LPUART1_PCS_110              = 6,     /*!< 110 : Clock option 6                                                      */
  PCC_PCC_LPUART1_PCS_111              = 7,     /*!< 111 : Clock option 7                                                      */
} PCC_PCC_LPUART1_PCS_Enum;

/* =============================================  PCC PCC_LPUART1 CGC [30..30]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPUART1_CGC                                                       */
  PCC_PCC_LPUART1_CGC_0                = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_LPUART1_CGC_1                = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_LPUART1_CGC_Enum;

/* ==============================================  PCC PCC_LPUART1 PR [31..31]  ============================================== */
typedef enum {                                  /*!< PCC_PCC_LPUART1_PR                                                        */
  PCC_PCC_LPUART1_PR_0                 = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_LPUART1_PR_1                 = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_LPUART1_PR_Enum;

/* =======================================================  PCC_CMP0  ======================================================== */
/* ===============================================  PCC PCC_CMP0 CGC [30..30]  =============================================== */
typedef enum {                                  /*!< PCC_PCC_CMP0_CGC                                                          */
  PCC_PCC_CMP0_CGC_0                   = 0,     /*!< 0 : Clock disabled                                                        */
  PCC_PCC_CMP0_CGC_1                   = 1,     /*!< 1 : Clock enabled. The current clock selection and divider options
                                                     are locked.                                                               */
} PCC_PCC_CMP0_CGC_Enum;

/* ===============================================  PCC PCC_CMP0 PR [31..31]  ================================================ */
typedef enum {                                  /*!< PCC_PCC_CMP0_PR                                                           */
  PCC_PCC_CMP0_PR_0                    = 0,     /*!< 0 : Peripheral is not present.                                            */
  PCC_PCC_CMP0_PR_1                    = 1,     /*!< 1 : Peripheral is present.                                                */
} PCC_PCC_CMP0_PR_Enum;

/* =========================================================================================================================== */
/* ================                                           PORTD                                           ================ */
/* =========================================================================================================================== */

/* ======================================================  PORTD_PCR0  ======================================================= */
/* ==============================================  PORTD PORTD_PCR0 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR0_PS                                                             */
  PORTD_PCR0_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR0_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR0_PS_Enum;

/* ==============================================  PORTD PORTD_PCR0 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR0_PE                                                             */
  PORTD_PCR0_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR0_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR0_PE_Enum;

/* ==============================================  PORTD PORTD_PCR0 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR0_DSE                                                            */
  PORTD_PCR0_DSE_0                     = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTD_PCR0_DSE_1                     = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTD_PCR0_DSE_Enum;

/* =============================================  PORTD PORTD_PCR0 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR0_MUX                                                            */
  PORTD_PCR0_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR0_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR0_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR0_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR0_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR0_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR0_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR0_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR0_MUX_Enum;

/* =============================================  PORTD PORTD_PCR0 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR0_LK                                                             */
  PORTD_PCR0_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR0_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR0_LK_Enum;

/* ============================================  PORTD PORTD_PCR0 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR0_IRQC                                                           */
  PORTD_PCR0_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR0_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR0_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR0_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR0_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR0_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR0_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR0_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR0_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR0_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR0 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR0_ISF                                                            */
  PORTD_PCR0_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR0_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR0_ISF_Enum;

/* ======================================================  PORTD_PCR1  ======================================================= */
/* ==============================================  PORTD PORTD_PCR1 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR1_PS                                                             */
  PORTD_PCR1_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR1_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR1_PS_Enum;

/* ==============================================  PORTD PORTD_PCR1 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR1_PE                                                             */
  PORTD_PCR1_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR1_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR1_PE_Enum;

/* ==============================================  PORTD PORTD_PCR1 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR1_DSE                                                            */
  PORTD_PCR1_DSE_0                     = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTD_PCR1_DSE_1                     = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTD_PCR1_DSE_Enum;

/* =============================================  PORTD PORTD_PCR1 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR1_MUX                                                            */
  PORTD_PCR1_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR1_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR1_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR1_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR1_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR1_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR1_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR1_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR1_MUX_Enum;

/* =============================================  PORTD PORTD_PCR1 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR1_LK                                                             */
  PORTD_PCR1_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR1_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR1_LK_Enum;

/* ============================================  PORTD PORTD_PCR1 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR1_IRQC                                                           */
  PORTD_PCR1_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR1_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR1_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR1_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR1_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR1_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR1_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR1_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR1_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR1_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR1 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR1_ISF                                                            */
  PORTD_PCR1_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR1_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR1_ISF_Enum;

/* ======================================================  PORTD_PCR2  ======================================================= */
/* ==============================================  PORTD PORTD_PCR2 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR2_PS                                                             */
  PORTD_PCR2_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR2_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR2_PS_Enum;

/* ==============================================  PORTD PORTD_PCR2 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR2_PE                                                             */
  PORTD_PCR2_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR2_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR2_PE_Enum;

/* =============================================  PORTD PORTD_PCR2 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR2_MUX                                                            */
  PORTD_PCR2_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR2_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR2_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR2_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR2_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR2_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR2_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR2_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR2_MUX_Enum;

/* =============================================  PORTD PORTD_PCR2 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR2_LK                                                             */
  PORTD_PCR2_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR2_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR2_LK_Enum;

/* ============================================  PORTD PORTD_PCR2 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR2_IRQC                                                           */
  PORTD_PCR2_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR2_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR2_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR2_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR2_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR2_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR2_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR2_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR2_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR2_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR2 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR2_ISF                                                            */
  PORTD_PCR2_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR2_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR2_ISF_Enum;

/* ======================================================  PORTD_PCR3  ======================================================= */
/* ==============================================  PORTD PORTD_PCR3 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR3_PS                                                             */
  PORTD_PCR3_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR3_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR3_PS_Enum;

/* ==============================================  PORTD PORTD_PCR3 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR3_PE                                                             */
  PORTD_PCR3_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR3_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR3_PE_Enum;

/* ==============================================  PORTD PORTD_PCR3 PFE [4..4]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR3_PFE                                                            */
  PORTD_PCR3_PFE_0                     = 0,     /*!< 0 : Passive input filter is disabled on the corresponding pin.            */
  PORTD_PCR3_PFE_1                     = 1,     /*!< 1 : Passive input filter is enabled on the corresponding pin,
                                                     if the pin is configured as a digital input. Refer to the
                                                     device data sheet for filter characteristics.                             */
} PORTD_PCR3_PFE_Enum;

/* =============================================  PORTD PORTD_PCR3 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR3_MUX                                                            */
  PORTD_PCR3_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR3_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR3_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR3_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR3_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR3_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR3_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR3_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR3_MUX_Enum;

/* =============================================  PORTD PORTD_PCR3 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR3_LK                                                             */
  PORTD_PCR3_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR3_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR3_LK_Enum;

/* ============================================  PORTD PORTD_PCR3 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR3_IRQC                                                           */
  PORTD_PCR3_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR3_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR3_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR3_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR3_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR3_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR3_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR3_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR3_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR3_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR3 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR3_ISF                                                            */
  PORTD_PCR3_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR3_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR3_ISF_Enum;

/* ======================================================  PORTD_PCR4  ======================================================= */
/* ==============================================  PORTD PORTD_PCR4 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR4_PS                                                             */
  PORTD_PCR4_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR4_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR4_PS_Enum;

/* ==============================================  PORTD PORTD_PCR4 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR4_PE                                                             */
  PORTD_PCR4_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR4_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR4_PE_Enum;

/* =============================================  PORTD PORTD_PCR4 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR4_MUX                                                            */
  PORTD_PCR4_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR4_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR4_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR4_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR4_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR4_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR4_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR4_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR4_MUX_Enum;

/* =============================================  PORTD PORTD_PCR4 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR4_LK                                                             */
  PORTD_PCR4_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR4_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR4_LK_Enum;

/* ============================================  PORTD PORTD_PCR4 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR4_IRQC                                                           */
  PORTD_PCR4_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR4_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR4_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR4_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR4_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR4_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR4_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR4_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR4_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR4_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR4 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR4_ISF                                                            */
  PORTD_PCR4_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR4_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR4_ISF_Enum;

/* ======================================================  PORTD_PCR5  ======================================================= */
/* ==============================================  PORTD PORTD_PCR5 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR5_PS                                                             */
  PORTD_PCR5_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR5_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR5_PS_Enum;

/* ==============================================  PORTD PORTD_PCR5 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR5_PE                                                             */
  PORTD_PCR5_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR5_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR5_PE_Enum;

/* =============================================  PORTD PORTD_PCR5 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR5_MUX                                                            */
  PORTD_PCR5_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR5_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR5_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR5_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR5_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR5_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR5_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR5_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR5_MUX_Enum;

/* =============================================  PORTD PORTD_PCR5 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR5_LK                                                             */
  PORTD_PCR5_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR5_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR5_LK_Enum;

/* ============================================  PORTD PORTD_PCR5 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR5_IRQC                                                           */
  PORTD_PCR5_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR5_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR5_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR5_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR5_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR5_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR5_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR5_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR5_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR5_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR5 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR5_ISF                                                            */
  PORTD_PCR5_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR5_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR5_ISF_Enum;

/* ======================================================  PORTD_PCR6  ======================================================= */
/* ==============================================  PORTD PORTD_PCR6 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR6_PS                                                             */
  PORTD_PCR6_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR6_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR6_PS_Enum;

/* ==============================================  PORTD PORTD_PCR6 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR6_PE                                                             */
  PORTD_PCR6_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR6_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR6_PE_Enum;

/* =============================================  PORTD PORTD_PCR6 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR6_MUX                                                            */
  PORTD_PCR6_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR6_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR6_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR6_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR6_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR6_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR6_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR6_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR6_MUX_Enum;

/* =============================================  PORTD PORTD_PCR6 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR6_LK                                                             */
  PORTD_PCR6_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR6_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR6_LK_Enum;

/* ============================================  PORTD PORTD_PCR6 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR6_IRQC                                                           */
  PORTD_PCR6_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR6_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR6_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR6_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR6_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR6_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR6_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR6_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR6_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR6_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR6 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR6_ISF                                                            */
  PORTD_PCR6_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR6_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR6_ISF_Enum;

/* ======================================================  PORTD_PCR7  ======================================================= */
/* ==============================================  PORTD PORTD_PCR7 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR7_PS                                                             */
  PORTD_PCR7_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR7_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR7_PS_Enum;

/* ==============================================  PORTD PORTD_PCR7 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR7_PE                                                             */
  PORTD_PCR7_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR7_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR7_PE_Enum;

/* =============================================  PORTD PORTD_PCR7 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR7_MUX                                                            */
  PORTD_PCR7_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR7_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR7_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR7_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR7_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR7_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR7_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR7_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR7_MUX_Enum;

/* =============================================  PORTD PORTD_PCR7 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR7_LK                                                             */
  PORTD_PCR7_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR7_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR7_LK_Enum;

/* ============================================  PORTD PORTD_PCR7 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR7_IRQC                                                           */
  PORTD_PCR7_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR7_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR7_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR7_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR7_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR7_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR7_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR7_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR7_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR7_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR7 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR7_ISF                                                            */
  PORTD_PCR7_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR7_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR7_ISF_Enum;

/* ======================================================  PORTD_PCR8  ======================================================= */
/* ==============================================  PORTD PORTD_PCR8 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR8_PS                                                             */
  PORTD_PCR8_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR8_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR8_PS_Enum;

/* ==============================================  PORTD PORTD_PCR8 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR8_PE                                                             */
  PORTD_PCR8_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR8_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR8_PE_Enum;

/* =============================================  PORTD PORTD_PCR8 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR8_MUX                                                            */
  PORTD_PCR8_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR8_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR8_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR8_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR8_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR8_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR8_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR8_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR8_MUX_Enum;

/* =============================================  PORTD PORTD_PCR8 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR8_LK                                                             */
  PORTD_PCR8_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR8_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR8_LK_Enum;

/* ============================================  PORTD PORTD_PCR8 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR8_IRQC                                                           */
  PORTD_PCR8_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR8_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR8_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR8_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR8_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR8_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR8_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR8_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR8_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR8_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR8 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR8_ISF                                                            */
  PORTD_PCR8_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR8_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR8_ISF_Enum;

/* ======================================================  PORTD_PCR9  ======================================================= */
/* ==============================================  PORTD PORTD_PCR9 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR9_PS                                                             */
  PORTD_PCR9_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR9_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR9_PS_Enum;

/* ==============================================  PORTD PORTD_PCR9 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTD_PCR9_PE                                                             */
  PORTD_PCR9_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR9_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR9_PE_Enum;

/* =============================================  PORTD PORTD_PCR9 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR9_MUX                                                            */
  PORTD_PCR9_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR9_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR9_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR9_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR9_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR9_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR9_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR9_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR9_MUX_Enum;

/* =============================================  PORTD PORTD_PCR9 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR9_LK                                                             */
  PORTD_PCR9_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR9_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR9_LK_Enum;

/* ============================================  PORTD PORTD_PCR9 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR9_IRQC                                                           */
  PORTD_PCR9_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR9_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR9_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR9_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR9_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR9_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR9_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR9_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR9_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR9_IRQC_Enum;

/* =============================================  PORTD PORTD_PCR9 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR9_ISF                                                            */
  PORTD_PCR9_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR9_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR9_ISF_Enum;

/* ======================================================  PORTD_PCR10  ====================================================== */
/* ==============================================  PORTD PORTD_PCR10 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR10_PS                                                            */
  PORTD_PCR10_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR10_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR10_PS_Enum;

/* ==============================================  PORTD PORTD_PCR10 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR10_PE                                                            */
  PORTD_PCR10_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR10_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR10_PE_Enum;

/* =============================================  PORTD PORTD_PCR10 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR10_MUX                                                           */
  PORTD_PCR10_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR10_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR10_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR10_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR10_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR10_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR10_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR10_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR10_MUX_Enum;

/* =============================================  PORTD PORTD_PCR10 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR10_LK                                                            */
  PORTD_PCR10_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR10_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR10_LK_Enum;

/* ============================================  PORTD PORTD_PCR10 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR10_IRQC                                                          */
  PORTD_PCR10_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR10_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR10_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR10_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR10_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR10_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR10_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR10_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR10_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR10_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR10 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR10_ISF                                                           */
  PORTD_PCR10_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR10_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR10_ISF_Enum;

/* ======================================================  PORTD_PCR11  ====================================================== */
/* ==============================================  PORTD PORTD_PCR11 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR11_PS                                                            */
  PORTD_PCR11_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR11_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR11_PS_Enum;

/* ==============================================  PORTD PORTD_PCR11 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR11_PE                                                            */
  PORTD_PCR11_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR11_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR11_PE_Enum;

/* =============================================  PORTD PORTD_PCR11 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR11_MUX                                                           */
  PORTD_PCR11_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR11_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR11_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR11_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR11_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR11_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR11_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR11_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR11_MUX_Enum;

/* =============================================  PORTD PORTD_PCR11 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR11_LK                                                            */
  PORTD_PCR11_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR11_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR11_LK_Enum;

/* ============================================  PORTD PORTD_PCR11 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR11_IRQC                                                          */
  PORTD_PCR11_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR11_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR11_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR11_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR11_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR11_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR11_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR11_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR11_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR11_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR11 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR11_ISF                                                           */
  PORTD_PCR11_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR11_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR11_ISF_Enum;

/* ======================================================  PORTD_PCR12  ====================================================== */
/* ==============================================  PORTD PORTD_PCR12 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR12_PS                                                            */
  PORTD_PCR12_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR12_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR12_PS_Enum;

/* ==============================================  PORTD PORTD_PCR12 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR12_PE                                                            */
  PORTD_PCR12_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR12_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR12_PE_Enum;

/* =============================================  PORTD PORTD_PCR12 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR12_MUX                                                           */
  PORTD_PCR12_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR12_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR12_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR12_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR12_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR12_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR12_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR12_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR12_MUX_Enum;

/* =============================================  PORTD PORTD_PCR12 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR12_LK                                                            */
  PORTD_PCR12_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR12_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR12_LK_Enum;

/* ============================================  PORTD PORTD_PCR12 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR12_IRQC                                                          */
  PORTD_PCR12_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR12_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR12_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR12_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR12_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR12_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR12_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR12_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR12_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR12_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR12 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR12_ISF                                                           */
  PORTD_PCR12_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR12_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR12_ISF_Enum;

/* ======================================================  PORTD_PCR13  ====================================================== */
/* ==============================================  PORTD PORTD_PCR13 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR13_PS                                                            */
  PORTD_PCR13_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR13_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR13_PS_Enum;

/* ==============================================  PORTD PORTD_PCR13 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR13_PE                                                            */
  PORTD_PCR13_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR13_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR13_PE_Enum;

/* =============================================  PORTD PORTD_PCR13 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR13_MUX                                                           */
  PORTD_PCR13_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR13_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR13_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR13_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR13_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR13_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR13_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR13_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR13_MUX_Enum;

/* =============================================  PORTD PORTD_PCR13 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR13_LK                                                            */
  PORTD_PCR13_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR13_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR13_LK_Enum;

/* ============================================  PORTD PORTD_PCR13 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR13_IRQC                                                          */
  PORTD_PCR13_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR13_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR13_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR13_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR13_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR13_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR13_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR13_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR13_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR13_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR13 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR13_ISF                                                           */
  PORTD_PCR13_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR13_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR13_ISF_Enum;

/* ======================================================  PORTD_PCR14  ====================================================== */
/* ==============================================  PORTD PORTD_PCR14 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR14_PS                                                            */
  PORTD_PCR14_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR14_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR14_PS_Enum;

/* ==============================================  PORTD PORTD_PCR14 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR14_PE                                                            */
  PORTD_PCR14_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR14_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR14_PE_Enum;

/* =============================================  PORTD PORTD_PCR14 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR14_MUX                                                           */
  PORTD_PCR14_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR14_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR14_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR14_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR14_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR14_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR14_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR14_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR14_MUX_Enum;

/* =============================================  PORTD PORTD_PCR14 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR14_LK                                                            */
  PORTD_PCR14_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR14_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR14_LK_Enum;

/* ============================================  PORTD PORTD_PCR14 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR14_IRQC                                                          */
  PORTD_PCR14_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR14_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR14_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR14_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR14_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR14_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR14_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR14_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR14_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR14_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR14 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR14_ISF                                                           */
  PORTD_PCR14_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR14_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR14_ISF_Enum;

/* ======================================================  PORTD_PCR15  ====================================================== */
/* ==============================================  PORTD PORTD_PCR15 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR15_PS                                                            */
  PORTD_PCR15_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR15_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR15_PS_Enum;

/* ==============================================  PORTD PORTD_PCR15 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR15_PE                                                            */
  PORTD_PCR15_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR15_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR15_PE_Enum;

/* =============================================  PORTD PORTD_PCR15 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR15_DSE                                                           */
  PORTD_PCR15_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTD_PCR15_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTD_PCR15_DSE_Enum;

/* =============================================  PORTD PORTD_PCR15 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR15_MUX                                                           */
  PORTD_PCR15_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR15_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR15_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR15_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR15_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR15_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR15_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR15_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR15_MUX_Enum;

/* =============================================  PORTD PORTD_PCR15 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR15_LK                                                            */
  PORTD_PCR15_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR15_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR15_LK_Enum;

/* ============================================  PORTD PORTD_PCR15 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR15_IRQC                                                          */
  PORTD_PCR15_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR15_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR15_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR15_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR15_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR15_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR15_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR15_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR15_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR15_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR15 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR15_ISF                                                           */
  PORTD_PCR15_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR15_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR15_ISF_Enum;

/* ======================================================  PORTD_PCR16  ====================================================== */
/* ==============================================  PORTD PORTD_PCR16 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR16_PS                                                            */
  PORTD_PCR16_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR16_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR16_PS_Enum;

/* ==============================================  PORTD PORTD_PCR16 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR16_PE                                                            */
  PORTD_PCR16_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR16_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR16_PE_Enum;

/* =============================================  PORTD PORTD_PCR16 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR16_DSE                                                           */
  PORTD_PCR16_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTD_PCR16_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTD_PCR16_DSE_Enum;

/* =============================================  PORTD PORTD_PCR16 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR16_MUX                                                           */
  PORTD_PCR16_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR16_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR16_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR16_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR16_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR16_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR16_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR16_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR16_MUX_Enum;

/* =============================================  PORTD PORTD_PCR16 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR16_LK                                                            */
  PORTD_PCR16_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR16_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR16_LK_Enum;

/* ============================================  PORTD PORTD_PCR16 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR16_IRQC                                                          */
  PORTD_PCR16_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR16_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR16_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR16_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR16_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR16_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR16_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR16_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR16_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR16_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR16 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR16_ISF                                                           */
  PORTD_PCR16_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR16_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR16_ISF_Enum;

/* ======================================================  PORTD_PCR17  ====================================================== */
/* ==============================================  PORTD PORTD_PCR17 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR17_PS                                                            */
  PORTD_PCR17_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR17_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR17_PS_Enum;

/* ==============================================  PORTD PORTD_PCR17 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR17_PE                                                            */
  PORTD_PCR17_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR17_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR17_PE_Enum;

/* =============================================  PORTD PORTD_PCR17 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR17_MUX                                                           */
  PORTD_PCR17_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR17_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR17_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR17_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR17_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR17_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR17_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR17_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR17_MUX_Enum;

/* =============================================  PORTD PORTD_PCR17 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR17_LK                                                            */
  PORTD_PCR17_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR17_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR17_LK_Enum;

/* ============================================  PORTD PORTD_PCR17 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR17_IRQC                                                          */
  PORTD_PCR17_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR17_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR17_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR17_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR17_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR17_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR17_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR17_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR17_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR17_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR17 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR17_ISF                                                           */
  PORTD_PCR17_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR17_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR17_ISF_Enum;

/* ======================================================  PORTD_PCR18  ====================================================== */
/* ==============================================  PORTD PORTD_PCR18 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR18_PS                                                            */
  PORTD_PCR18_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR18_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR18_PS_Enum;

/* ==============================================  PORTD PORTD_PCR18 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR18_PE                                                            */
  PORTD_PCR18_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR18_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR18_PE_Enum;

/* =============================================  PORTD PORTD_PCR18 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR18_MUX                                                           */
  PORTD_PCR18_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR18_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR18_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR18_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR18_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR18_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR18_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR18_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR18_MUX_Enum;

/* =============================================  PORTD PORTD_PCR18 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR18_LK                                                            */
  PORTD_PCR18_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR18_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR18_LK_Enum;

/* ============================================  PORTD PORTD_PCR18 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR18_IRQC                                                          */
  PORTD_PCR18_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR18_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR18_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR18_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR18_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR18_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR18_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR18_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR18_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR18_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR18 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR18_ISF                                                           */
  PORTD_PCR18_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR18_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR18_ISF_Enum;

/* ======================================================  PORTD_PCR19  ====================================================== */
/* ==============================================  PORTD PORTD_PCR19 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR19_PS                                                            */
  PORTD_PCR19_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR19_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR19_PS_Enum;

/* ==============================================  PORTD PORTD_PCR19 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR19_PE                                                            */
  PORTD_PCR19_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR19_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR19_PE_Enum;

/* =============================================  PORTD PORTD_PCR19 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR19_MUX                                                           */
  PORTD_PCR19_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR19_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR19_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR19_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR19_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR19_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR19_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR19_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR19_MUX_Enum;

/* =============================================  PORTD PORTD_PCR19 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR19_LK                                                            */
  PORTD_PCR19_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR19_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR19_LK_Enum;

/* ============================================  PORTD PORTD_PCR19 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR19_IRQC                                                          */
  PORTD_PCR19_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR19_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR19_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR19_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR19_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR19_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR19_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR19_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR19_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR19_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR19 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR19_ISF                                                           */
  PORTD_PCR19_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR19_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR19_ISF_Enum;

/* ======================================================  PORTD_PCR20  ====================================================== */
/* ==============================================  PORTD PORTD_PCR20 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR20_PS                                                            */
  PORTD_PCR20_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR20_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR20_PS_Enum;

/* ==============================================  PORTD PORTD_PCR20 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR20_PE                                                            */
  PORTD_PCR20_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR20_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR20_PE_Enum;

/* =============================================  PORTD PORTD_PCR20 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR20_MUX                                                           */
  PORTD_PCR20_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR20_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR20_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR20_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR20_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR20_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR20_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR20_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR20_MUX_Enum;

/* =============================================  PORTD PORTD_PCR20 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR20_LK                                                            */
  PORTD_PCR20_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR20_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR20_LK_Enum;

/* ============================================  PORTD PORTD_PCR20 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR20_IRQC                                                          */
  PORTD_PCR20_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR20_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR20_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR20_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR20_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR20_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR20_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR20_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR20_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR20_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR20 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR20_ISF                                                           */
  PORTD_PCR20_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR20_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR20_ISF_Enum;

/* ======================================================  PORTD_PCR21  ====================================================== */
/* ==============================================  PORTD PORTD_PCR21 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR21_PS                                                            */
  PORTD_PCR21_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR21_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR21_PS_Enum;

/* ==============================================  PORTD PORTD_PCR21 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR21_PE                                                            */
  PORTD_PCR21_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR21_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR21_PE_Enum;

/* =============================================  PORTD PORTD_PCR21 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR21_MUX                                                           */
  PORTD_PCR21_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR21_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR21_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR21_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR21_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR21_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR21_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR21_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR21_MUX_Enum;

/* =============================================  PORTD PORTD_PCR21 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR21_LK                                                            */
  PORTD_PCR21_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR21_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR21_LK_Enum;

/* ============================================  PORTD PORTD_PCR21 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR21_IRQC                                                          */
  PORTD_PCR21_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR21_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR21_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR21_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR21_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR21_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR21_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR21_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR21_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR21_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR21 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR21_ISF                                                           */
  PORTD_PCR21_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR21_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR21_ISF_Enum;

/* ======================================================  PORTD_PCR22  ====================================================== */
/* ==============================================  PORTD PORTD_PCR22 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR22_PS                                                            */
  PORTD_PCR22_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR22_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR22_PS_Enum;

/* ==============================================  PORTD PORTD_PCR22 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR22_PE                                                            */
  PORTD_PCR22_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR22_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR22_PE_Enum;

/* =============================================  PORTD PORTD_PCR22 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR22_MUX                                                           */
  PORTD_PCR22_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR22_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR22_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR22_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR22_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR22_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR22_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR22_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR22_MUX_Enum;

/* =============================================  PORTD PORTD_PCR22 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR22_LK                                                            */
  PORTD_PCR22_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR22_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR22_LK_Enum;

/* ============================================  PORTD PORTD_PCR22 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR22_IRQC                                                          */
  PORTD_PCR22_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR22_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR22_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR22_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR22_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR22_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR22_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR22_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR22_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR22_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR22 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR22_ISF                                                           */
  PORTD_PCR22_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR22_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR22_ISF_Enum;

/* ======================================================  PORTD_PCR23  ====================================================== */
/* ==============================================  PORTD PORTD_PCR23 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR23_PS                                                            */
  PORTD_PCR23_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR23_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR23_PS_Enum;

/* ==============================================  PORTD PORTD_PCR23 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR23_PE                                                            */
  PORTD_PCR23_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR23_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR23_PE_Enum;

/* =============================================  PORTD PORTD_PCR23 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR23_MUX                                                           */
  PORTD_PCR23_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR23_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR23_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR23_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR23_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR23_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR23_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR23_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR23_MUX_Enum;

/* =============================================  PORTD PORTD_PCR23 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR23_LK                                                            */
  PORTD_PCR23_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR23_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR23_LK_Enum;

/* ============================================  PORTD PORTD_PCR23 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR23_IRQC                                                          */
  PORTD_PCR23_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR23_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR23_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR23_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR23_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR23_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR23_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR23_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR23_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR23_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR23 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR23_ISF                                                           */
  PORTD_PCR23_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR23_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR23_ISF_Enum;

/* ======================================================  PORTD_PCR24  ====================================================== */
/* ==============================================  PORTD PORTD_PCR24 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR24_PS                                                            */
  PORTD_PCR24_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR24_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR24_PS_Enum;

/* ==============================================  PORTD PORTD_PCR24 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR24_PE                                                            */
  PORTD_PCR24_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR24_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR24_PE_Enum;

/* =============================================  PORTD PORTD_PCR24 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR24_MUX                                                           */
  PORTD_PCR24_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR24_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR24_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR24_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR24_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR24_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR24_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR24_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR24_MUX_Enum;

/* =============================================  PORTD PORTD_PCR24 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR24_LK                                                            */
  PORTD_PCR24_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR24_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR24_LK_Enum;

/* ============================================  PORTD PORTD_PCR24 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR24_IRQC                                                          */
  PORTD_PCR24_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR24_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR24_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR24_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR24_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR24_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR24_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR24_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR24_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR24_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR24 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR24_ISF                                                           */
  PORTD_PCR24_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR24_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR24_ISF_Enum;

/* ======================================================  PORTD_PCR25  ====================================================== */
/* ==============================================  PORTD PORTD_PCR25 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR25_PS                                                            */
  PORTD_PCR25_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR25_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR25_PS_Enum;

/* ==============================================  PORTD PORTD_PCR25 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR25_PE                                                            */
  PORTD_PCR25_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR25_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR25_PE_Enum;

/* =============================================  PORTD PORTD_PCR25 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR25_MUX                                                           */
  PORTD_PCR25_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR25_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR25_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR25_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR25_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR25_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR25_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR25_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR25_MUX_Enum;

/* =============================================  PORTD PORTD_PCR25 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR25_LK                                                            */
  PORTD_PCR25_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR25_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR25_LK_Enum;

/* ============================================  PORTD PORTD_PCR25 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR25_IRQC                                                          */
  PORTD_PCR25_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR25_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR25_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR25_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR25_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR25_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR25_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR25_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR25_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR25_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR25 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR25_ISF                                                           */
  PORTD_PCR25_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR25_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR25_ISF_Enum;

/* ======================================================  PORTD_PCR26  ====================================================== */
/* ==============================================  PORTD PORTD_PCR26 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR26_PS                                                            */
  PORTD_PCR26_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR26_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR26_PS_Enum;

/* ==============================================  PORTD PORTD_PCR26 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR26_PE                                                            */
  PORTD_PCR26_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR26_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR26_PE_Enum;

/* =============================================  PORTD PORTD_PCR26 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR26_MUX                                                           */
  PORTD_PCR26_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR26_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR26_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR26_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR26_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR26_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR26_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR26_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR26_MUX_Enum;

/* =============================================  PORTD PORTD_PCR26 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR26_LK                                                            */
  PORTD_PCR26_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR26_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR26_LK_Enum;

/* ============================================  PORTD PORTD_PCR26 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR26_IRQC                                                          */
  PORTD_PCR26_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR26_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR26_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR26_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR26_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR26_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR26_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR26_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR26_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR26_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR26 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR26_ISF                                                           */
  PORTD_PCR26_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR26_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR26_ISF_Enum;

/* ======================================================  PORTD_PCR27  ====================================================== */
/* ==============================================  PORTD PORTD_PCR27 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR27_PS                                                            */
  PORTD_PCR27_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR27_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR27_PS_Enum;

/* ==============================================  PORTD PORTD_PCR27 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR27_PE                                                            */
  PORTD_PCR27_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR27_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR27_PE_Enum;

/* =============================================  PORTD PORTD_PCR27 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR27_MUX                                                           */
  PORTD_PCR27_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR27_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR27_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR27_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR27_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR27_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR27_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR27_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR27_MUX_Enum;

/* =============================================  PORTD PORTD_PCR27 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR27_LK                                                            */
  PORTD_PCR27_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR27_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR27_LK_Enum;

/* ============================================  PORTD PORTD_PCR27 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR27_IRQC                                                          */
  PORTD_PCR27_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR27_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR27_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR27_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR27_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR27_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR27_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR27_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR27_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR27_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR27 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR27_ISF                                                           */
  PORTD_PCR27_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR27_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR27_ISF_Enum;

/* ======================================================  PORTD_PCR28  ====================================================== */
/* ==============================================  PORTD PORTD_PCR28 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR28_PS                                                            */
  PORTD_PCR28_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR28_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR28_PS_Enum;

/* ==============================================  PORTD PORTD_PCR28 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR28_PE                                                            */
  PORTD_PCR28_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR28_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR28_PE_Enum;

/* =============================================  PORTD PORTD_PCR28 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR28_MUX                                                           */
  PORTD_PCR28_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR28_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR28_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR28_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR28_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR28_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR28_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR28_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR28_MUX_Enum;

/* =============================================  PORTD PORTD_PCR28 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR28_LK                                                            */
  PORTD_PCR28_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR28_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR28_LK_Enum;

/* ============================================  PORTD PORTD_PCR28 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR28_IRQC                                                          */
  PORTD_PCR28_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR28_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR28_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR28_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR28_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR28_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR28_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR28_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR28_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR28_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR28 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR28_ISF                                                           */
  PORTD_PCR28_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR28_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR28_ISF_Enum;

/* ======================================================  PORTD_PCR29  ====================================================== */
/* ==============================================  PORTD PORTD_PCR29 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR29_PS                                                            */
  PORTD_PCR29_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR29_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR29_PS_Enum;

/* ==============================================  PORTD PORTD_PCR29 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR29_PE                                                            */
  PORTD_PCR29_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR29_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR29_PE_Enum;

/* =============================================  PORTD PORTD_PCR29 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR29_MUX                                                           */
  PORTD_PCR29_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR29_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR29_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR29_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR29_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR29_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR29_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR29_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR29_MUX_Enum;

/* =============================================  PORTD PORTD_PCR29 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR29_LK                                                            */
  PORTD_PCR29_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR29_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR29_LK_Enum;

/* ============================================  PORTD PORTD_PCR29 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR29_IRQC                                                          */
  PORTD_PCR29_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR29_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR29_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR29_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR29_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR29_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR29_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR29_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR29_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR29_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR29 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR29_ISF                                                           */
  PORTD_PCR29_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR29_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR29_ISF_Enum;

/* ======================================================  PORTD_PCR30  ====================================================== */
/* ==============================================  PORTD PORTD_PCR30 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR30_PS                                                            */
  PORTD_PCR30_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR30_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR30_PS_Enum;

/* ==============================================  PORTD PORTD_PCR30 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR30_PE                                                            */
  PORTD_PCR30_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR30_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR30_PE_Enum;

/* =============================================  PORTD PORTD_PCR30 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR30_MUX                                                           */
  PORTD_PCR30_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR30_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR30_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR30_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR30_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR30_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR30_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR30_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR30_MUX_Enum;

/* =============================================  PORTD PORTD_PCR30 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR30_LK                                                            */
  PORTD_PCR30_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR30_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR30_LK_Enum;

/* ============================================  PORTD PORTD_PCR30 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR30_IRQC                                                          */
  PORTD_PCR30_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR30_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR30_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR30_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR30_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR30_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR30_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR30_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR30_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR30_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR30 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR30_ISF                                                           */
  PORTD_PCR30_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR30_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR30_ISF_Enum;

/* ======================================================  PORTD_PCR31  ====================================================== */
/* ==============================================  PORTD PORTD_PCR31 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR31_PS                                                            */
  PORTD_PCR31_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTD_PCR31_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTD_PCR31_PS_Enum;

/* ==============================================  PORTD PORTD_PCR31 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTD_PCR31_PE                                                            */
  PORTD_PCR31_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTD_PCR31_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTD_PCR31_PE_Enum;

/* =============================================  PORTD PORTD_PCR31 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR31_MUX                                                           */
  PORTD_PCR31_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTD_PCR31_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTD_PCR31_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTD_PCR31_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTD_PCR31_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTD_PCR31_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTD_PCR31_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTD_PCR31_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTD_PCR31_MUX_Enum;

/* =============================================  PORTD PORTD_PCR31 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR31_LK                                                            */
  PORTD_PCR31_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTD_PCR31_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTD_PCR31_LK_Enum;

/* ============================================  PORTD PORTD_PCR31 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTD_PCR31_IRQC                                                          */
  PORTD_PCR31_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTD_PCR31_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTD_PCR31_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTD_PCR31_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTD_PCR31_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTD_PCR31_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTD_PCR31_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTD_PCR31_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTD_PCR31_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTD_PCR31_IRQC_Enum;

/* ============================================  PORTD PORTD_PCR31 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTD_PCR31_ISF                                                           */
  PORTD_PCR31_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_PCR31_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_PCR31_ISF_Enum;

/* ======================================================  PORTD_GPCLR  ====================================================== */
/* ============================================  PORTD PORTD_GPCLR GPWE [16..31]  ============================================ */
typedef enum {                                  /*!< PORTD_GPCLR_GPWE                                                          */
  PORTD_GPCLR_GPWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTD_GPCLR_GPWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTD_GPCLR_GPWE_Enum;

/* ======================================================  PORTD_GPCHR  ====================================================== */
/* ============================================  PORTD PORTD_GPCHR GPWE [16..31]  ============================================ */
typedef enum {                                  /*!< PORTD_GPCHR_GPWE                                                          */
  PORTD_GPCHR_GPWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTD_GPCHR_GPWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTD_GPCHR_GPWE_Enum;

/* ======================================================  PORTD_GICLR  ====================================================== */
/* ============================================  PORTD PORTD_GICLR GIWE [0..15]  ============================================= */
typedef enum {                                  /*!< PORTD_GICLR_GIWE                                                          */
  PORTD_GICLR_GIWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTD_GICLR_GIWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTD_GICLR_GIWE_Enum;

/* ======================================================  PORTD_GICHR  ====================================================== */
/* ============================================  PORTD PORTD_GICHR GIWE [0..15]  ============================================= */
typedef enum {                                  /*!< PORTD_GICHR_GIWE                                                          */
  PORTD_GICHR_GIWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTD_GICHR_GIWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTD_GICHR_GIWE_Enum;

/* ======================================================  PORTD_ISFR  ======================================================= */
/* =============================================  PORTD PORTD_ISFR ISF [0..31]  ============================================== */
typedef enum {                                  /*!< PORTD_ISFR_ISF                                                            */
  PORTD_ISFR_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTD_ISFR_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTD_ISFR_ISF_Enum;

/* ======================================================  PORTD_DFER  ======================================================= */
/* =============================================  PORTD PORTD_DFER DFE [0..31]  ============================================== */
typedef enum {                                  /*!< PORTD_DFER_DFE                                                            */
  PORTD_DFER_DFE_0                     = 0,     /*!< 0 : Digital filter is disabled on the corresponding pin and
                                                     output of the digital filter is reset to zero.                            */
  PORTD_DFER_DFE_1                     = 1,     /*!< 1 : Digital filter is enabled on the corresponding pin, if the
                                                     pin is configured as a digital input.                                     */
} PORTD_DFER_DFE_Enum;

/* ======================================================  PORTD_DFCR  ======================================================= */
/* ==============================================  PORTD PORTD_DFCR CS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTD_DFCR_CS                                                             */
  PORTD_DFCR_CS_0                      = 0,     /*!< 0 : Digital filters are clocked by the bus clock.                         */
  PORTD_DFCR_CS_1                      = 1,     /*!< 1 : Digital filters are clocked by the LPO clock.                         */
} PORTD_DFCR_CS_Enum;



/* =========================================================================================================================== */
/* ================                                           PORTE                                           ================ */
/* =========================================================================================================================== */

/* ======================================================  PORTE_PCR0  ======================================================= */
/* ==============================================  PORTE PORTE_PCR0 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR0_PS                                                             */
  PORTE_PCR0_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR0_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR0_PS_Enum;

/* ==============================================  PORTE PORTE_PCR0 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR0_PE                                                             */
  PORTE_PCR0_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR0_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR0_PE_Enum;

/* ==============================================  PORTE PORTE_PCR0 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR0_DSE                                                            */
  PORTE_PCR0_DSE_0                     = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR0_DSE_1                     = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR0_DSE_Enum;

/* =============================================  PORTE PORTE_PCR0 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR0_MUX                                                            */
  PORTE_PCR0_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR0_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR0_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR0_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR0_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR0_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR0_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR0_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR0_MUX_Enum;

/* =============================================  PORTE PORTE_PCR0 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR0_LK                                                             */
  PORTE_PCR0_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR0_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR0_LK_Enum;

/* ============================================  PORTE PORTE_PCR0 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR0_IRQC                                                           */
  PORTE_PCR0_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR0_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR0_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR0_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR0_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR0_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR0_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR0_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR0_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR0_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR0 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR0_ISF                                                            */
  PORTE_PCR0_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR0_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR0_ISF_Enum;

/* ======================================================  PORTE_PCR1  ======================================================= */
/* ==============================================  PORTE PORTE_PCR1 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR1_PS                                                             */
  PORTE_PCR1_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR1_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR1_PS_Enum;

/* ==============================================  PORTE PORTE_PCR1 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR1_PE                                                             */
  PORTE_PCR1_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR1_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR1_PE_Enum;

/* ==============================================  PORTE PORTE_PCR1 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR1_DSE                                                            */
  PORTE_PCR1_DSE_0                     = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR1_DSE_1                     = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR1_DSE_Enum;

/* =============================================  PORTE PORTE_PCR1 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR1_MUX                                                            */
  PORTE_PCR1_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR1_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR1_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR1_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR1_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR1_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR1_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR1_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR1_MUX_Enum;

/* =============================================  PORTE PORTE_PCR1 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR1_LK                                                             */
  PORTE_PCR1_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR1_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR1_LK_Enum;

/* ============================================  PORTE PORTE_PCR1 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR1_IRQC                                                           */
  PORTE_PCR1_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR1_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR1_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR1_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR1_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR1_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR1_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR1_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR1_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR1_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR1 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR1_ISF                                                            */
  PORTE_PCR1_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR1_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR1_ISF_Enum;

/* ======================================================  PORTE_PCR2  ======================================================= */
/* ==============================================  PORTE PORTE_PCR2 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR2_PS                                                             */
  PORTE_PCR2_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR2_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR2_PS_Enum;

/* ==============================================  PORTE PORTE_PCR2 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR2_PE                                                             */
  PORTE_PCR2_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR2_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR2_PE_Enum;

/* =============================================  PORTE PORTE_PCR2 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR2_MUX                                                            */
  PORTE_PCR2_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR2_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR2_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR2_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR2_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR2_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR2_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR2_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR2_MUX_Enum;

/* =============================================  PORTE PORTE_PCR2 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR2_LK                                                             */
  PORTE_PCR2_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR2_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR2_LK_Enum;

/* ============================================  PORTE PORTE_PCR2 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR2_IRQC                                                           */
  PORTE_PCR2_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR2_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR2_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR2_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR2_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR2_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR2_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR2_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR2_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR2_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR2 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR2_ISF                                                            */
  PORTE_PCR2_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR2_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR2_ISF_Enum;

/* ======================================================  PORTE_PCR3  ======================================================= */
/* ==============================================  PORTE PORTE_PCR3 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR3_PS                                                             */
  PORTE_PCR3_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR3_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR3_PS_Enum;

/* ==============================================  PORTE PORTE_PCR3 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR3_PE                                                             */
  PORTE_PCR3_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR3_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR3_PE_Enum;

/* =============================================  PORTE PORTE_PCR3 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR3_MUX                                                            */
  PORTE_PCR3_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR3_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR3_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR3_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR3_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR3_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR3_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR3_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR3_MUX_Enum;

/* =============================================  PORTE PORTE_PCR3 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR3_LK                                                             */
  PORTE_PCR3_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR3_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR3_LK_Enum;

/* ============================================  PORTE PORTE_PCR3 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR3_IRQC                                                           */
  PORTE_PCR3_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR3_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR3_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR3_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR3_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR3_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR3_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR3_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR3_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR3_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR3 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR3_ISF                                                            */
  PORTE_PCR3_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR3_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR3_ISF_Enum;

/* ======================================================  PORTE_PCR4  ======================================================= */
/* ==============================================  PORTE PORTE_PCR4 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR4_PS                                                             */
  PORTE_PCR4_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR4_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR4_PS_Enum;

/* ==============================================  PORTE PORTE_PCR4 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR4_PE                                                             */
  PORTE_PCR4_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR4_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR4_PE_Enum;

/* ==============================================  PORTE PORTE_PCR4 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR4_DSE                                                            */
  PORTE_PCR4_DSE_0                     = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR4_DSE_1                     = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR4_DSE_Enum;

/* =============================================  PORTE PORTE_PCR4 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR4_MUX                                                            */
  PORTE_PCR4_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR4_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR4_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR4_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR4_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR4_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR4_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR4_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR4_MUX_Enum;

/* =============================================  PORTE PORTE_PCR4 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR4_LK                                                             */
  PORTE_PCR4_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR4_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR4_LK_Enum;

/* ============================================  PORTE PORTE_PCR4 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR4_IRQC                                                           */
  PORTE_PCR4_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR4_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR4_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR4_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR4_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR4_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR4_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR4_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR4_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR4_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR4 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR4_ISF                                                            */
  PORTE_PCR4_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR4_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR4_ISF_Enum;

/* ======================================================  PORTE_PCR5  ======================================================= */
/* ==============================================  PORTE PORTE_PCR5 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR5_PS                                                             */
  PORTE_PCR5_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR5_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR5_PS_Enum;

/* ==============================================  PORTE PORTE_PCR5 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR5_PE                                                             */
  PORTE_PCR5_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR5_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR5_PE_Enum;

/* =============================================  PORTE PORTE_PCR5 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR5_MUX                                                            */
  PORTE_PCR5_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR5_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR5_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR5_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR5_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR5_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR5_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR5_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR5_MUX_Enum;

/* =============================================  PORTE PORTE_PCR5 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR5_LK                                                             */
  PORTE_PCR5_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR5_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR5_LK_Enum;

/* ============================================  PORTE PORTE_PCR5 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR5_IRQC                                                           */
  PORTE_PCR5_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR5_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR5_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR5_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR5_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR5_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR5_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR5_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR5_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR5_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR5 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR5_ISF                                                            */
  PORTE_PCR5_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR5_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR5_ISF_Enum;

/* ======================================================  PORTE_PCR6  ======================================================= */
/* ==============================================  PORTE PORTE_PCR6 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR6_PS                                                             */
  PORTE_PCR6_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR6_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR6_PS_Enum;

/* ==============================================  PORTE PORTE_PCR6 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR6_PE                                                             */
  PORTE_PCR6_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR6_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR6_PE_Enum;

/* =============================================  PORTE PORTE_PCR6 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR6_MUX                                                            */
  PORTE_PCR6_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR6_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR6_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR6_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR6_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR6_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR6_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR6_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR6_MUX_Enum;

/* =============================================  PORTE PORTE_PCR6 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR6_LK                                                             */
  PORTE_PCR6_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR6_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR6_LK_Enum;

/* ============================================  PORTE PORTE_PCR6 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR6_IRQC                                                           */
  PORTE_PCR6_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR6_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR6_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR6_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR6_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR6_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR6_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR6_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR6_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR6_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR6 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR6_ISF                                                            */
  PORTE_PCR6_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR6_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR6_ISF_Enum;

/* ======================================================  PORTE_PCR7  ======================================================= */
/* ==============================================  PORTE PORTE_PCR7 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR7_PS                                                             */
  PORTE_PCR7_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR7_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR7_PS_Enum;

/* ==============================================  PORTE PORTE_PCR7 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR7_PE                                                             */
  PORTE_PCR7_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR7_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR7_PE_Enum;

/* =============================================  PORTE PORTE_PCR7 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR7_MUX                                                            */
  PORTE_PCR7_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR7_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR7_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR7_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR7_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR7_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR7_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR7_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR7_MUX_Enum;

/* =============================================  PORTE PORTE_PCR7 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR7_LK                                                             */
  PORTE_PCR7_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR7_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR7_LK_Enum;

/* ============================================  PORTE PORTE_PCR7 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR7_IRQC                                                           */
  PORTE_PCR7_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR7_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR7_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR7_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR7_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR7_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR7_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR7_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR7_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR7_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR7 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR7_ISF                                                            */
  PORTE_PCR7_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR7_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR7_ISF_Enum;

/* ======================================================  PORTE_PCR8  ======================================================= */
/* ==============================================  PORTE PORTE_PCR8 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR8_PS                                                             */
  PORTE_PCR8_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR8_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR8_PS_Enum;

/* ==============================================  PORTE PORTE_PCR8 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR8_PE                                                             */
  PORTE_PCR8_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR8_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR8_PE_Enum;

/* =============================================  PORTE PORTE_PCR8 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR8_MUX                                                            */
  PORTE_PCR8_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR8_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR8_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR8_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR8_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR8_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR8_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR8_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR8_MUX_Enum;

/* =============================================  PORTE PORTE_PCR8 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR8_LK                                                             */
  PORTE_PCR8_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR8_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR8_LK_Enum;

/* ============================================  PORTE PORTE_PCR8 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR8_IRQC                                                           */
  PORTE_PCR8_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR8_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR8_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR8_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR8_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR8_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR8_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR8_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR8_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR8_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR8 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR8_ISF                                                            */
  PORTE_PCR8_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR8_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR8_ISF_Enum;

/* ======================================================  PORTE_PCR9  ======================================================= */
/* ==============================================  PORTE PORTE_PCR9 PS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR9_PS                                                             */
  PORTE_PCR9_PS_0                      = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR9_PS_1                      = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR9_PS_Enum;

/* ==============================================  PORTE PORTE_PCR9 PE [1..1]  =============================================== */
typedef enum {                                  /*!< PORTE_PCR9_PE                                                             */
  PORTE_PCR9_PE_0                      = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR9_PE_1                      = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR9_PE_Enum;

/* =============================================  PORTE PORTE_PCR9 MUX [8..10]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR9_MUX                                                            */
  PORTE_PCR9_MUX_000                   = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR9_MUX_001                   = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR9_MUX_010                   = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR9_MUX_011                   = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR9_MUX_100                   = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR9_MUX_101                   = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR9_MUX_110                   = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR9_MUX_111                   = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR9_MUX_Enum;

/* =============================================  PORTE PORTE_PCR9 LK [15..15]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR9_LK                                                             */
  PORTE_PCR9_LK_0                      = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR9_LK_1                      = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR9_LK_Enum;

/* ============================================  PORTE PORTE_PCR9 IRQC [16..19]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR9_IRQC                                                           */
  PORTE_PCR9_IRQC_0000                 = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR9_IRQC_0001                 = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR9_IRQC_0010                 = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR9_IRQC_0011                 = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR9_IRQC_1000                 = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR9_IRQC_1001                 = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR9_IRQC_1010                 = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR9_IRQC_1011                 = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR9_IRQC_1100                 = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR9_IRQC_Enum;

/* =============================================  PORTE PORTE_PCR9 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR9_ISF                                                            */
  PORTE_PCR9_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR9_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR9_ISF_Enum;

/* ======================================================  PORTE_PCR10  ====================================================== */
/* ==============================================  PORTE PORTE_PCR10 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR10_PS                                                            */
  PORTE_PCR10_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR10_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR10_PS_Enum;

/* ==============================================  PORTE PORTE_PCR10 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR10_PE                                                            */
  PORTE_PCR10_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR10_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR10_PE_Enum;

/* =============================================  PORTE PORTE_PCR10 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR10_MUX                                                           */
  PORTE_PCR10_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR10_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR10_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR10_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR10_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR10_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR10_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR10_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR10_MUX_Enum;

/* =============================================  PORTE PORTE_PCR10 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR10_LK                                                            */
  PORTE_PCR10_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR10_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR10_LK_Enum;

/* ============================================  PORTE PORTE_PCR10 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR10_IRQC                                                          */
  PORTE_PCR10_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR10_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR10_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR10_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR10_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR10_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR10_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR10_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR10_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR10_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR10 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR10_ISF                                                           */
  PORTE_PCR10_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR10_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR10_ISF_Enum;

/* ======================================================  PORTE_PCR11  ====================================================== */
/* ==============================================  PORTE PORTE_PCR11 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR11_PS                                                            */
  PORTE_PCR11_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR11_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR11_PS_Enum;

/* ==============================================  PORTE PORTE_PCR11 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR11_PE                                                            */
  PORTE_PCR11_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR11_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR11_PE_Enum;

/* =============================================  PORTE PORTE_PCR11 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR11_MUX                                                           */
  PORTE_PCR11_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR11_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR11_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR11_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR11_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR11_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR11_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR11_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR11_MUX_Enum;

/* =============================================  PORTE PORTE_PCR11 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR11_LK                                                            */
  PORTE_PCR11_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR11_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR11_LK_Enum;

/* ============================================  PORTE PORTE_PCR11 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR11_IRQC                                                          */
  PORTE_PCR11_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR11_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR11_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR11_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR11_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR11_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR11_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR11_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR11_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR11_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR11 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR11_ISF                                                           */
  PORTE_PCR11_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR11_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR11_ISF_Enum;

/* ======================================================  PORTE_PCR12  ====================================================== */
/* ==============================================  PORTE PORTE_PCR12 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR12_PS                                                            */
  PORTE_PCR12_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR12_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR12_PS_Enum;

/* ==============================================  PORTE PORTE_PCR12 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR12_PE                                                            */
  PORTE_PCR12_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR12_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR12_PE_Enum;

/* =============================================  PORTE PORTE_PCR12 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR12_MUX                                                           */
  PORTE_PCR12_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR12_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR12_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR12_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR12_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR12_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR12_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR12_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR12_MUX_Enum;

/* =============================================  PORTE PORTE_PCR12 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR12_LK                                                            */
  PORTE_PCR12_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR12_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR12_LK_Enum;

/* ============================================  PORTE PORTE_PCR12 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR12_IRQC                                                          */
  PORTE_PCR12_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR12_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR12_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR12_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR12_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR12_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR12_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR12_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR12_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR12_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR12 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR12_ISF                                                           */
  PORTE_PCR12_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR12_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR12_ISF_Enum;

/* ======================================================  PORTE_PCR13  ====================================================== */
/* ==============================================  PORTE PORTE_PCR13 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR13_PS                                                            */
  PORTE_PCR13_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR13_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR13_PS_Enum;

/* ==============================================  PORTE PORTE_PCR13 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR13_PE                                                            */
  PORTE_PCR13_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR13_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR13_PE_Enum;

/* =============================================  PORTE PORTE_PCR13 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR13_MUX                                                           */
  PORTE_PCR13_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR13_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR13_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR13_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR13_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR13_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR13_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR13_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR13_MUX_Enum;

/* =============================================  PORTE PORTE_PCR13 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR13_LK                                                            */
  PORTE_PCR13_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR13_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR13_LK_Enum;

/* ============================================  PORTE PORTE_PCR13 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR13_IRQC                                                          */
  PORTE_PCR13_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR13_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR13_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR13_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR13_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR13_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR13_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR13_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR13_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR13_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR13 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR13_ISF                                                           */
  PORTE_PCR13_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR13_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR13_ISF_Enum;

/* ======================================================  PORTE_PCR14  ====================================================== */
/* ==============================================  PORTE PORTE_PCR14 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR14_PS                                                            */
  PORTE_PCR14_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR14_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR14_PS_Enum;

/* ==============================================  PORTE PORTE_PCR14 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR14_PE                                                            */
  PORTE_PCR14_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR14_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR14_PE_Enum;

/* =============================================  PORTE PORTE_PCR14 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR14_MUX                                                           */
  PORTE_PCR14_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR14_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR14_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR14_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR14_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR14_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR14_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR14_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR14_MUX_Enum;

/* =============================================  PORTE PORTE_PCR14 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR14_LK                                                            */
  PORTE_PCR14_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR14_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR14_LK_Enum;

/* ============================================  PORTE PORTE_PCR14 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR14_IRQC                                                          */
  PORTE_PCR14_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR14_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR14_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR14_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR14_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR14_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR14_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR14_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR14_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR14_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR14 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR14_ISF                                                           */
  PORTE_PCR14_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR14_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR14_ISF_Enum;

/* ======================================================  PORTE_PCR15  ====================================================== */
/* ==============================================  PORTE PORTE_PCR15 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR15_PS                                                            */
  PORTE_PCR15_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR15_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR15_PS_Enum;

/* ==============================================  PORTE PORTE_PCR15 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR15_PE                                                            */
  PORTE_PCR15_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR15_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR15_PE_Enum;

/* =============================================  PORTE PORTE_PCR15 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR15_MUX                                                           */
  PORTE_PCR15_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR15_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR15_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR15_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR15_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR15_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR15_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR15_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR15_MUX_Enum;

/* =============================================  PORTE PORTE_PCR15 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR15_LK                                                            */
  PORTE_PCR15_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR15_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR15_LK_Enum;

/* ============================================  PORTE PORTE_PCR15 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR15_IRQC                                                          */
  PORTE_PCR15_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR15_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR15_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR15_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR15_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR15_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR15_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR15_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR15_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR15_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR15 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR15_ISF                                                           */
  PORTE_PCR15_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR15_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR15_ISF_Enum;

/* ======================================================  PORTE_PCR16  ====================================================== */
/* ==============================================  PORTE PORTE_PCR16 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR16_PS                                                            */
  PORTE_PCR16_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR16_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR16_PS_Enum;

/* ==============================================  PORTE PORTE_PCR16 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR16_PE                                                            */
  PORTE_PCR16_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR16_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR16_PE_Enum;

/* =============================================  PORTE PORTE_PCR16 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR16_MUX                                                           */
  PORTE_PCR16_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR16_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR16_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR16_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR16_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR16_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR16_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR16_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR16_MUX_Enum;

/* =============================================  PORTE PORTE_PCR16 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR16_LK                                                            */
  PORTE_PCR16_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR16_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR16_LK_Enum;

/* ============================================  PORTE PORTE_PCR16 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR16_IRQC                                                          */
  PORTE_PCR16_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR16_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR16_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR16_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR16_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR16_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR16_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR16_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR16_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR16_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR16 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR16_ISF                                                           */
  PORTE_PCR16_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR16_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR16_ISF_Enum;

/* ======================================================  PORTE_PCR17  ====================================================== */
/* ==============================================  PORTE PORTE_PCR17 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR17_PS                                                            */
  PORTE_PCR17_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR17_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR17_PS_Enum;

/* ==============================================  PORTE PORTE_PCR17 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR17_PE                                                            */
  PORTE_PCR17_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR17_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR17_PE_Enum;

/* =============================================  PORTE PORTE_PCR17 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR17_MUX                                                           */
  PORTE_PCR17_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR17_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR17_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR17_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR17_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR17_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR17_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR17_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR17_MUX_Enum;

/* =============================================  PORTE PORTE_PCR17 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR17_LK                                                            */
  PORTE_PCR17_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR17_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR17_LK_Enum;

/* ============================================  PORTE PORTE_PCR17 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR17_IRQC                                                          */
  PORTE_PCR17_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR17_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR17_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR17_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR17_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR17_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR17_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR17_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR17_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR17_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR17 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR17_ISF                                                           */
  PORTE_PCR17_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR17_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR17_ISF_Enum;

/* ======================================================  PORTE_PCR18  ====================================================== */
/* ==============================================  PORTE PORTE_PCR18 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR18_PS                                                            */
  PORTE_PCR18_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR18_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR18_PS_Enum;

/* ==============================================  PORTE PORTE_PCR18 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR18_PE                                                            */
  PORTE_PCR18_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR18_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR18_PE_Enum;

/* =============================================  PORTE PORTE_PCR18 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR18_MUX                                                           */
  PORTE_PCR18_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR18_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR18_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR18_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR18_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR18_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR18_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR18_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR18_MUX_Enum;

/* =============================================  PORTE PORTE_PCR18 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR18_LK                                                            */
  PORTE_PCR18_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR18_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR18_LK_Enum;

/* ============================================  PORTE PORTE_PCR18 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR18_IRQC                                                          */
  PORTE_PCR18_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR18_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR18_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR18_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR18_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR18_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR18_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR18_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR18_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR18_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR18 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR18_ISF                                                           */
  PORTE_PCR18_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR18_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR18_ISF_Enum;

/* ======================================================  PORTE_PCR19  ====================================================== */
/* ==============================================  PORTE PORTE_PCR19 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR19_PS                                                            */
  PORTE_PCR19_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR19_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR19_PS_Enum;

/* ==============================================  PORTE PORTE_PCR19 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR19_PE                                                            */
  PORTE_PCR19_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR19_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR19_PE_Enum;

/* =============================================  PORTE PORTE_PCR19 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR19_MUX                                                           */
  PORTE_PCR19_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR19_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR19_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR19_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR19_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR19_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR19_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR19_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR19_MUX_Enum;

/* =============================================  PORTE PORTE_PCR19 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR19_LK                                                            */
  PORTE_PCR19_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR19_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR19_LK_Enum;

/* ============================================  PORTE PORTE_PCR19 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR19_IRQC                                                          */
  PORTE_PCR19_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR19_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR19_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR19_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR19_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR19_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR19_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR19_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR19_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR19_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR19 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR19_ISF                                                           */
  PORTE_PCR19_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR19_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR19_ISF_Enum;

/* ======================================================  PORTE_PCR20  ====================================================== */
/* ==============================================  PORTE PORTE_PCR20 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR20_PS                                                            */
  PORTE_PCR20_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR20_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR20_PS_Enum;

/* ==============================================  PORTE PORTE_PCR20 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR20_PE                                                            */
  PORTE_PCR20_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR20_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR20_PE_Enum;

/* =============================================  PORTE PORTE_PCR20 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR20_DSE                                                           */
  PORTE_PCR20_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR20_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR20_DSE_Enum;

/* =============================================  PORTE PORTE_PCR20 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR20_MUX                                                           */
  PORTE_PCR20_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR20_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR20_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR20_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR20_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR20_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR20_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR20_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR20_MUX_Enum;

/* =============================================  PORTE PORTE_PCR20 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR20_LK                                                            */
  PORTE_PCR20_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR20_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR20_LK_Enum;

/* ============================================  PORTE PORTE_PCR20 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR20_IRQC                                                          */
  PORTE_PCR20_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR20_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR20_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR20_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR20_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR20_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR20_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR20_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR20_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR20_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR20 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR20_ISF                                                           */
  PORTE_PCR20_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR20_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR20_ISF_Enum;

/* ======================================================  PORTE_PCR21  ====================================================== */
/* ==============================================  PORTE PORTE_PCR21 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR21_PS                                                            */
  PORTE_PCR21_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR21_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR21_PS_Enum;

/* ==============================================  PORTE PORTE_PCR21 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR21_PE                                                            */
  PORTE_PCR21_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR21_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR21_PE_Enum;

/* =============================================  PORTE PORTE_PCR21 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR21_DSE                                                           */
  PORTE_PCR21_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR21_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR21_DSE_Enum;

/* =============================================  PORTE PORTE_PCR21 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR21_MUX                                                           */
  PORTE_PCR21_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR21_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR21_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR21_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR21_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR21_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR21_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR21_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR21_MUX_Enum;

/* =============================================  PORTE PORTE_PCR21 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR21_LK                                                            */
  PORTE_PCR21_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR21_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR21_LK_Enum;

/* ============================================  PORTE PORTE_PCR21 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR21_IRQC                                                          */
  PORTE_PCR21_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR21_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR21_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR21_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR21_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR21_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR21_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR21_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR21_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR21_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR21 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR21_ISF                                                           */
  PORTE_PCR21_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR21_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR21_ISF_Enum;

/* ======================================================  PORTE_PCR22  ====================================================== */
/* ==============================================  PORTE PORTE_PCR22 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR22_PS                                                            */
  PORTE_PCR22_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR22_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR22_PS_Enum;

/* ==============================================  PORTE PORTE_PCR22 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR22_PE                                                            */
  PORTE_PCR22_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR22_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR22_PE_Enum;

/* =============================================  PORTE PORTE_PCR22 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR22_DSE                                                           */
  PORTE_PCR22_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR22_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR22_DSE_Enum;

/* =============================================  PORTE PORTE_PCR22 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR22_MUX                                                           */
  PORTE_PCR22_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR22_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR22_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR22_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR22_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR22_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR22_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR22_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR22_MUX_Enum;

/* =============================================  PORTE PORTE_PCR22 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR22_LK                                                            */
  PORTE_PCR22_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR22_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR22_LK_Enum;

/* ============================================  PORTE PORTE_PCR22 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR22_IRQC                                                          */
  PORTE_PCR22_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR22_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR22_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR22_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR22_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR22_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR22_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR22_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR22_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR22_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR22 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR22_ISF                                                           */
  PORTE_PCR22_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR22_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR22_ISF_Enum;

/* ======================================================  PORTE_PCR23  ====================================================== */
/* ==============================================  PORTE PORTE_PCR23 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR23_PS                                                            */
  PORTE_PCR23_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR23_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR23_PS_Enum;

/* ==============================================  PORTE PORTE_PCR23 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR23_PE                                                            */
  PORTE_PCR23_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR23_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR23_PE_Enum;

/* =============================================  PORTE PORTE_PCR23 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR23_DSE                                                           */
  PORTE_PCR23_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR23_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR23_DSE_Enum;

/* =============================================  PORTE PORTE_PCR23 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR23_MUX                                                           */
  PORTE_PCR23_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR23_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR23_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR23_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR23_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR23_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR23_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR23_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR23_MUX_Enum;

/* =============================================  PORTE PORTE_PCR23 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR23_LK                                                            */
  PORTE_PCR23_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR23_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR23_LK_Enum;

/* ============================================  PORTE PORTE_PCR23 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR23_IRQC                                                          */
  PORTE_PCR23_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR23_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR23_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR23_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR23_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR23_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR23_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR23_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR23_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR23_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR23 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR23_ISF                                                           */
  PORTE_PCR23_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR23_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR23_ISF_Enum;

/* ======================================================  PORTE_PCR24  ====================================================== */
/* ==============================================  PORTE PORTE_PCR24 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR24_PS                                                            */
  PORTE_PCR24_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR24_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR24_PS_Enum;

/* ==============================================  PORTE PORTE_PCR24 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR24_PE                                                            */
  PORTE_PCR24_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR24_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR24_PE_Enum;

/* =============================================  PORTE PORTE_PCR24 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR24_DSE                                                           */
  PORTE_PCR24_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR24_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR24_DSE_Enum;

/* =============================================  PORTE PORTE_PCR24 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR24_MUX                                                           */
  PORTE_PCR24_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR24_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR24_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR24_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR24_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR24_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR24_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR24_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR24_MUX_Enum;

/* =============================================  PORTE PORTE_PCR24 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR24_LK                                                            */
  PORTE_PCR24_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR24_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR24_LK_Enum;

/* ============================================  PORTE PORTE_PCR24 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR24_IRQC                                                          */
  PORTE_PCR24_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR24_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR24_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR24_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR24_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR24_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR24_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR24_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR24_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR24_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR24 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR24_ISF                                                           */
  PORTE_PCR24_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR24_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR24_ISF_Enum;

/* ======================================================  PORTE_PCR25  ====================================================== */
/* ==============================================  PORTE PORTE_PCR25 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR25_PS                                                            */
  PORTE_PCR25_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR25_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR25_PS_Enum;

/* ==============================================  PORTE PORTE_PCR25 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR25_PE                                                            */
  PORTE_PCR25_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR25_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR25_PE_Enum;

/* =============================================  PORTE PORTE_PCR25 DSE [6..6]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR25_DSE                                                           */
  PORTE_PCR25_DSE_0                    = 0,     /*!< 0 : Low drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
  PORTE_PCR25_DSE_1                    = 1,     /*!< 1 : High drive strength is configured on the corresponding pin,
                                                     if pin is configured as a digital output.                                 */
} PORTE_PCR25_DSE_Enum;

/* =============================================  PORTE PORTE_PCR25 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR25_MUX                                                           */
  PORTE_PCR25_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR25_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR25_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR25_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR25_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR25_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR25_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR25_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR25_MUX_Enum;

/* =============================================  PORTE PORTE_PCR25 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR25_LK                                                            */
  PORTE_PCR25_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR25_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR25_LK_Enum;

/* ============================================  PORTE PORTE_PCR25 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR25_IRQC                                                          */
  PORTE_PCR25_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR25_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR25_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR25_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR25_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR25_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR25_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR25_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR25_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR25_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR25 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR25_ISF                                                           */
  PORTE_PCR25_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR25_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR25_ISF_Enum;

/* ======================================================  PORTE_PCR26  ====================================================== */
/* ==============================================  PORTE PORTE_PCR26 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR26_PS                                                            */
  PORTE_PCR26_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR26_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR26_PS_Enum;

/* ==============================================  PORTE PORTE_PCR26 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR26_PE                                                            */
  PORTE_PCR26_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR26_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR26_PE_Enum;

/* =============================================  PORTE PORTE_PCR26 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR26_MUX                                                           */
  PORTE_PCR26_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR26_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR26_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR26_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR26_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR26_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR26_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR26_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR26_MUX_Enum;

/* =============================================  PORTE PORTE_PCR26 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR26_LK                                                            */
  PORTE_PCR26_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR26_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR26_LK_Enum;

/* ============================================  PORTE PORTE_PCR26 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR26_IRQC                                                          */
  PORTE_PCR26_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR26_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR26_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR26_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR26_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR26_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR26_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR26_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR26_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR26_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR26 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR26_ISF                                                           */
  PORTE_PCR26_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR26_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR26_ISF_Enum;

/* ======================================================  PORTE_PCR27  ====================================================== */
/* ==============================================  PORTE PORTE_PCR27 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR27_PS                                                            */
  PORTE_PCR27_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR27_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR27_PS_Enum;

/* ==============================================  PORTE PORTE_PCR27 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR27_PE                                                            */
  PORTE_PCR27_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR27_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR27_PE_Enum;

/* =============================================  PORTE PORTE_PCR27 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR27_MUX                                                           */
  PORTE_PCR27_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR27_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR27_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR27_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR27_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR27_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR27_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR27_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR27_MUX_Enum;

/* =============================================  PORTE PORTE_PCR27 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR27_LK                                                            */
  PORTE_PCR27_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR27_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR27_LK_Enum;

/* ============================================  PORTE PORTE_PCR27 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR27_IRQC                                                          */
  PORTE_PCR27_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR27_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR27_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR27_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR27_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR27_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR27_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR27_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR27_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR27_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR27 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR27_ISF                                                           */
  PORTE_PCR27_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR27_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR27_ISF_Enum;

/* ======================================================  PORTE_PCR28  ====================================================== */
/* ==============================================  PORTE PORTE_PCR28 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR28_PS                                                            */
  PORTE_PCR28_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR28_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR28_PS_Enum;

/* ==============================================  PORTE PORTE_PCR28 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR28_PE                                                            */
  PORTE_PCR28_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR28_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR28_PE_Enum;

/* =============================================  PORTE PORTE_PCR28 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR28_MUX                                                           */
  PORTE_PCR28_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR28_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR28_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR28_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR28_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR28_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR28_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR28_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR28_MUX_Enum;

/* =============================================  PORTE PORTE_PCR28 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR28_LK                                                            */
  PORTE_PCR28_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR28_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR28_LK_Enum;

/* ============================================  PORTE PORTE_PCR28 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR28_IRQC                                                          */
  PORTE_PCR28_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR28_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR28_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR28_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR28_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR28_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR28_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR28_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR28_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR28_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR28 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR28_ISF                                                           */
  PORTE_PCR28_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR28_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR28_ISF_Enum;

/* ======================================================  PORTE_PCR29  ====================================================== */
/* ==============================================  PORTE PORTE_PCR29 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR29_PS                                                            */
  PORTE_PCR29_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR29_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR29_PS_Enum;

/* ==============================================  PORTE PORTE_PCR29 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR29_PE                                                            */
  PORTE_PCR29_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR29_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR29_PE_Enum;

/* =============================================  PORTE PORTE_PCR29 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR29_MUX                                                           */
  PORTE_PCR29_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR29_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR29_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR29_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR29_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR29_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR29_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR29_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR29_MUX_Enum;

/* =============================================  PORTE PORTE_PCR29 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR29_LK                                                            */
  PORTE_PCR29_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR29_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR29_LK_Enum;

/* ============================================  PORTE PORTE_PCR29 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR29_IRQC                                                          */
  PORTE_PCR29_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR29_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR29_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR29_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR29_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR29_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR29_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR29_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR29_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR29_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR29 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR29_ISF                                                           */
  PORTE_PCR29_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR29_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR29_ISF_Enum;

/* ======================================================  PORTE_PCR30  ====================================================== */
/* ==============================================  PORTE PORTE_PCR30 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR30_PS                                                            */
  PORTE_PCR30_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR30_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR30_PS_Enum;

/* ==============================================  PORTE PORTE_PCR30 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR30_PE                                                            */
  PORTE_PCR30_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR30_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR30_PE_Enum;

/* =============================================  PORTE PORTE_PCR30 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR30_MUX                                                           */
  PORTE_PCR30_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR30_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR30_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR30_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR30_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR30_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR30_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR30_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR30_MUX_Enum;

/* =============================================  PORTE PORTE_PCR30 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR30_LK                                                            */
  PORTE_PCR30_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR30_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR30_LK_Enum;

/* ============================================  PORTE PORTE_PCR30 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR30_IRQC                                                          */
  PORTE_PCR30_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR30_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR30_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR30_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR30_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR30_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR30_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR30_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR30_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR30_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR30 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR30_ISF                                                           */
  PORTE_PCR30_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR30_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR30_ISF_Enum;

/* ======================================================  PORTE_PCR31  ====================================================== */
/* ==============================================  PORTE PORTE_PCR31 PS [0..0]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR31_PS                                                            */
  PORTE_PCR31_PS_0                     = 0,     /*!< 0 : Internal pulldown resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
  PORTE_PCR31_PS_1                     = 1,     /*!< 1 : Internal pullup resistor is enabled on the corresponding
                                                     pin, if the corresponding PE field is set.                                */
} PORTE_PCR31_PS_Enum;

/* ==============================================  PORTE PORTE_PCR31 PE [1..1]  ============================================== */
typedef enum {                                  /*!< PORTE_PCR31_PE                                                            */
  PORTE_PCR31_PE_0                     = 0,     /*!< 0 : Internal pullup or pulldown resistor is not enabled on the
                                                     corresponding pin.                                                        */
  PORTE_PCR31_PE_1                     = 1,     /*!< 1 : Internal pullup or pulldown resistor is enabled on the corresponding
                                                     pin, if the pin is configured as a digital input.                         */
} PORTE_PCR31_PE_Enum;

/* =============================================  PORTE PORTE_PCR31 MUX [8..10]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR31_MUX                                                           */
  PORTE_PCR31_MUX_000                  = 0,     /*!< 000 : Pin disabled (Alternative 0) (analog).                              */
  PORTE_PCR31_MUX_001                  = 1,     /*!< 001 : Alternative 1 (GPIO).                                               */
  PORTE_PCR31_MUX_010                  = 2,     /*!< 010 : Alternative 2 (chip-specific).                                      */
  PORTE_PCR31_MUX_011                  = 3,     /*!< 011 : Alternative 3 (chip-specific).                                      */
  PORTE_PCR31_MUX_100                  = 4,     /*!< 100 : Alternative 4 (chip-specific).                                      */
  PORTE_PCR31_MUX_101                  = 5,     /*!< 101 : Alternative 5 (chip-specific).                                      */
  PORTE_PCR31_MUX_110                  = 6,     /*!< 110 : Alternative 6 (chip-specific).                                      */
  PORTE_PCR31_MUX_111                  = 7,     /*!< 111 : Alternative 7 (chip-specific).                                      */
} PORTE_PCR31_MUX_Enum;

/* =============================================  PORTE PORTE_PCR31 LK [15..15]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR31_LK                                                            */
  PORTE_PCR31_LK_0                     = 0,     /*!< 0 : Pin Control Register fields [15:0] are not locked.                    */
  PORTE_PCR31_LK_1                     = 1,     /*!< 1 : Pin Control Register fields [15:0] are locked and cannot
                                                     be updated until the next system reset.                                   */
} PORTE_PCR31_LK_Enum;

/* ============================================  PORTE PORTE_PCR31 IRQC [16..19]  ============================================ */
typedef enum {                                  /*!< PORTE_PCR31_IRQC                                                          */
  PORTE_PCR31_IRQC_0000                = 0,     /*!< 0000 : Interrupt Status Flag (ISF) is disabled.                           */
  PORTE_PCR31_IRQC_0001                = 1,     /*!< 0001 : ISF flag and DMA request on rising edge.                           */
  PORTE_PCR31_IRQC_0010                = 2,     /*!< 0010 : ISF flag and DMA request on falling edge.                          */
  PORTE_PCR31_IRQC_0011                = 3,     /*!< 0011 : ISF flag and DMA request on either edge.                           */
  PORTE_PCR31_IRQC_1000                = 8,     /*!< 1000 : ISF flag and Interrupt when logic 0.                               */
  PORTE_PCR31_IRQC_1001                = 9,     /*!< 1001 : ISF flag and Interrupt on rising-edge.                             */
  PORTE_PCR31_IRQC_1010                = 10,    /*!< 1010 : ISF flag and Interrupt on falling-edge.                            */
  PORTE_PCR31_IRQC_1011                = 11,    /*!< 1011 : ISF flag and Interrupt on either edge.                             */
  PORTE_PCR31_IRQC_1100                = 12,    /*!< 1100 : ISF flag and Interrupt when logic 1.                               */
} PORTE_PCR31_IRQC_Enum;

/* ============================================  PORTE PORTE_PCR31 ISF [24..24]  ============================================= */
typedef enum {                                  /*!< PORTE_PCR31_ISF                                                           */
  PORTE_PCR31_ISF_0                    = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_PCR31_ISF_1                    = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_PCR31_ISF_Enum;

/* ======================================================  PORTE_GPCLR  ====================================================== */
/* ============================================  PORTE PORTE_GPCLR GPWE [16..31]  ============================================ */
typedef enum {                                  /*!< PORTE_GPCLR_GPWE                                                          */
  PORTE_GPCLR_GPWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTE_GPCLR_GPWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTE_GPCLR_GPWE_Enum;

/* ======================================================  PORTE_GPCHR  ====================================================== */
/* ============================================  PORTE PORTE_GPCHR GPWE [16..31]  ============================================ */
typedef enum {                                  /*!< PORTE_GPCHR_GPWE                                                          */
  PORTE_GPCHR_GPWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTE_GPCHR_GPWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTE_GPCHR_GPWE_Enum;

/* ======================================================  PORTE_GICLR  ====================================================== */
/* ============================================  PORTE PORTE_GICLR GIWE [0..15]  ============================================= */
typedef enum {                                  /*!< PORTE_GICLR_GIWE                                                          */
  PORTE_GICLR_GIWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTE_GICLR_GIWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTE_GICLR_GIWE_Enum;

/* ======================================================  PORTE_GICHR  ====================================================== */
/* ============================================  PORTE PORTE_GICHR GIWE [0..15]  ============================================= */
typedef enum {                                  /*!< PORTE_GICHR_GIWE                                                          */
  PORTE_GICHR_GIWE_0                   = 0,     /*!< 0 : Corresponding Pin Control Register is not updated with the
                                                     value in GPWD.                                                            */
  PORTE_GICHR_GIWE_1                   = 1,     /*!< 1 : Corresponding Pin Control Register is updated with the value
                                                     in GPWD.                                                                  */
} PORTE_GICHR_GIWE_Enum;

/* ======================================================  PORTE_ISFR  ======================================================= */
/* =============================================  PORTE PORTE_ISFR ISF [0..31]  ============================================== */
typedef enum {                                  /*!< PORTE_ISFR_ISF                                                            */
  PORTE_ISFR_ISF_0                     = 0,     /*!< 0 : Configured interrupt is not detected.                                 */
  PORTE_ISFR_ISF_1                     = 1,     /*!< 1 : Configured interrupt is detected. If the pin is configured
                                                     to generate a DMA request, then the corresponding flag
                                                     will be cleared automatically at the completion of the
                                                     requested DMA transfer. Otherwise, the flag remains set
                                                     until a logic 1 is written to the flag. If the pin is configured
                                                     for a level sensitive interrupt and the pin remains asserted,
                                                     then the flag is set again immediately after it is cleared.               */
} PORTE_ISFR_ISF_Enum;

/* ======================================================  PORTE_DFER  ======================================================= */
/* =============================================  PORTE PORTE_DFER DFE [0..31]  ============================================== */
typedef enum {                                  /*!< PORTE_DFER_DFE                                                            */
  PORTE_DFER_DFE_0                     = 0,     /*!< 0 : Digital filter is disabled on the corresponding pin and
                                                     output of the digital filter is reset to zero.                            */
  PORTE_DFER_DFE_1                     = 1,     /*!< 1 : Digital filter is enabled on the corresponding pin, if the
                                                     pin is configured as a digital input.                                     */
} PORTE_DFER_DFE_Enum;

/* ======================================================  PORTE_DFCR  ======================================================= */
/* ==============================================  PORTE PORTE_DFCR CS [0..0]  =============================================== */
typedef enum {                                  /*!< PORTE_DFCR_CS                                                             */
  PORTE_DFCR_CS_0                      = 0,     /*!< 0 : Digital filters are clocked by the bus clock.                         */
  PORTE_DFCR_CS_1                      = 1,     /*!< 1 : Digital filters are clocked by the LPO clock.                         */
} PORTE_DFCR_CS_Enum;

#endif /* FLEXCAN_INCLUDE_REGISTER_BIT_FIELDS_H_ */
