#ifndef __ACTIVITY4_H_
#define __ACTIVITY4_H_

#include <avr/io.h>

uint8_t temp;

void PWM_init();

void heat(uint16_t temp);

void InitADC();

uint16_t ReadADC(uint16_t ch);

#endif
