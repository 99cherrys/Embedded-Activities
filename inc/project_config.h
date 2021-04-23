#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author Charanya ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */

#define LED  (PORTB)          /**< LED Port Number */
#define LED_PIN (PB0)         /**< LED Pin Number  */

#define BUTTON (PORTD)        /** Push Button Port Number of the car seat */
#define BUTTON_PIN (PD0)      /** Push Button Pin Number of the car seat */

#define SWITCH (PORTC)       /**  Switch Port Number of the Heater */
#define SWITCH_PIN (PC0)     /**  Switch Pin Number of the car Heater */

#endif /* __PROJECT_CONFIG_H__ */
