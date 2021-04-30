#include <avr/io.h>

void PWM_init();

uint8_t heat(uint16_t temp);

void InitADC();

uint16_t ReadADC(uint16_t ch);
