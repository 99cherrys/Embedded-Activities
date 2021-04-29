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
 * @brief initialize the pull up natured peripherals
 */

void peripheral_init(void);

/**
 * @brief Change the state of the LED Pin according to the state of the push button in car seat and heater switch
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void led_on(uint8_t state);



/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);


#endif /** __ACTIVITY1_H_ */
