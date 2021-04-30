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

uint8_t temp;

void PWM_init();

void heat(uint16_t temp);

void InitADC();

uint16_t ReadADC(uint16_t ch);

#endif
