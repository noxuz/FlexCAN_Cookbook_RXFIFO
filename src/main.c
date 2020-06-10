/*
 * CAN-FD example with IDs
 * Choose BOARD_A or BOARD_B build configuration and flash its corresponding flash profile
 */

#include <FlexCAN/include/CAN_RXFIFO.h>
#include "register_bit_fields.h"


#define BOARD_B
int main(void)
{
    /* Instantiate the frame that is going to be transmitted */
	frame_t Transmission_frame;

	/* Counter for the number of frames transmitted */
	uint32_t frame_count = 0;

	/* Define the CAN standard ID and payload of the frame that its going to be transmitted */
#if defined(BOARD_A)
	Transmission_frame.ID = 0x1E;
#elif defined(BOARD_B)
	Transmission_frame.ID = 0xE7;
#endif

	/* Fill the desired payload to be sent, maximum 8 bytes for CAN classical */
	Transmission_frame.payload[0] = 0x11223344;
	Transmission_frame.payload[1] = 0x44667788;

	/* Define the frame's ID that the board is going to receive */
#if defined(BOARD_A)
	uint32_t ID = 0xE7;
#elif defined(BOARD_B)
	uint32_t ID = 0x1E;
#endif

	/* Status variable for validation */
	status_t status;

	/* Start the peripheral */
	status = FlexCAN_init_RXFIFO();

	/* Install the specified ID of the destination board */
	if( status )
    status = install_ID(ID);

	greenLED_init();

#if defined(BOARD_A)
    /* Toggle LED initially so it turns on complementary in each board */
    PTD->GPIOD_PTOR |= 1<<16;
	/* BOARD_A kickstarts the transmission */
	if( status )
    transmit_frame(&Transmission_frame);
#endif

	/* Reception frame */
    frame_t Reception_frame;

	/* Super-loop for transmitting a frame only when one is received */
	while(1)
    {
        /* Listen */
	    status = receive_frame(&Reception_frame);

	    /* Echo back */
        if( status )
        {
            frame_count++;

            /* Each 1000 frames received, the green LED will toggle and counter resets */
            if(frame_count == 1000)
            {
                frame_count = 0;
                PTD->GPIOD_PTOR |= 1<<16;
            }

            status = transmit_frame(&Transmission_frame);
        }
    }
}
