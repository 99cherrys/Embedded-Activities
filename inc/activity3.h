#ifndef __ACTIVITY3_H_
#define __ACTIVITY3_H_
/**
 * @file activity3.h
 * @author Charanya ()
 * @brief Project to generate PWM based temperature sensor
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * Include files
 */ 
#include <avr/io.h>

// Global variable declaration
uint8_t temp;

void PWM_init();

/**
 * @brief to convert the temperature to required range and display 20/25/29/33 degree celcius
 *
 * @param data read from the potentiometer temperature sensor
 */
void heat(uint16_t temp);

/**
 * @brief to initialize ADC
 */
void InitADC();

/**
 * @brief to read ADC value
 *
 * @param channel number of ADC
 */
uint16_t ReadADC(uint16_t ch);

#endif
