#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_
/**
 * @file activity2.h
 * @author Charanya ()
 * @brief Project to convert ADC connected to AVR328 MCU ADC Pin channel 5 by reading analog values from the potentiometer (Sensor)
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * Include files
 */ 
#include <avr/io.h>
#include <util/delay.h>

/**
 * Macro Definitions
 */
#define ON 	(1)			/**< LED state HIGH */
#define OFF	(0)			/**< LED state LOW */

#define DELAY_TIME     (200)  /**< LED ON time in milli seconds  */


/**
 * Variable declaration
 */
 uint16_t temp; 



/**
 * Function Definitions
 */

/**
 * @brief initialize the ADC
 */
void InitADC();

/**
 * @brief Read analog values from the analog channel and convert to digital value
 * 
 * @param Analog channel (0-6)
 */
uint16_t ReadADC(uint16_t ch);



/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);


#endif /** __ACTIVITY1_H_ */
