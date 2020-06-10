/**
 * @file
 * Header file for interfacing the FlexCAN
 */

#ifndef FLEXCAN_INCLUDE_CAN_RXFIFO_H_
#define FLEXCAN_INCLUDE_CAN_RXFIFO_H_

#include <stdint.h>

/* Macro for the maximum transfer unit for Classical CAN frame payload (8 bytes = 2 words) */
#define MAX_MTU_WORDS   (2u)

/**
 * Status codes for the return value status
 */
typedef enum{
	Failure = 0,
	BufferFull = 0,
	Success = 1
} status_t;

/**
 *  Structure for a CAN frame
 */
typedef struct{
	uint32_t ID;
	uint32_t payload[MAX_MTU_WORDS];
} frame_t;

/**
 * Initialize the 0th FlexCAN instance for transmission and reception
 * of CAN-FD frames at 4 Mbit/s and 1 Mbit/s in data and nominal phases respectively.
 *
 * @return Success If the peripheral was started wihtout errors
 * @return Failure If at least an error occurred during the startup sequence
 */
status_t FlexCAN_init_RXFIFO(void);

/**
 * Setup a message buffer for reception of a specific ID
 *
 * @param[in] filter
 * @return Success If the filters were installed correctly
 * @return Failure If the setup couldn't be performed
 */
status_t install_ID(uint32_t id);

/**
 * Transmit a single CAN frame
 *
 * @param [in] frame  The reference to the frame that is going to be transmitted
 * @return Success    If the frame was sent immediately
 * @return BufferFull If the transmission message buffer was full and the frame couldn't
 * 					  be transmitted
 * @return Failure    If an error occurred during the transmission
 */
status_t transmit_frame(frame_t* frame);

/**
 * Receive a single CAN frame
 *
 * @param [in] frame A reference to a frame for transmitting
 * @return Success If a frame was read successfully
 * @return Failure If at least an error occurred
 */
status_t receive_frame(frame_t* frame);

/**
 * Function for initializing the indicator green LED on board
 */
void greenLED_init(void);

#endif /* FLEXCAN_INCLUDE_CAN_RXFIFO_H_ */
