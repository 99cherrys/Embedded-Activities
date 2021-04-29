#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_
/**
 * @file activity1.h
 * @author Charanya ()
 * @brief Project to Blink an LED connected to AVR328 MCU GPIO Pin if Push button of the car seat is closed and heater switch is turned ON
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Include files
 */ 
#include <avr/io.h>


/**
 * Macro Definitions
 */
#define ON 	(1)			/**< LED state HIGH */
#define OFF	(0)			/**< LED state LOW */

#define LED_ON_TIME     (200)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (100)   /**< LED OFF time in milli seconds */


/**
 * Macro Definitions
 */

#define LED  (PORTB)          /**< LED Port Number */
#define LED_PIN (PB0)         /**< LED Pin Number  */

#define BUTTON (PORTD)        /** Push Button Port Number of the car seat */
#define BUTTON_PIN (PD0)      /** Push Button Pin Number of the car seat */

#define SWITCH (PORTC)       /**  Switch Port Number of the Heater */
#define SWITCH_PIN (PC0)     /**  Switch Pin Number of the car Heater */

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
void led_off(uint8_t state);


#endif /** __ACTIVITY1_H_ */
