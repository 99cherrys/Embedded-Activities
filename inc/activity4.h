#include <avr/io.h>
#include<util/delay.h>
#define ON 	(1)			/**< LED state HIGH */
#define OFF	(0)			/**< LED state LOW */

#define LED_ON_TIME     (200)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (100)   /**< LED OFF time in milli seconds */

#define LED  (PORTB)          /**< LED Port Number */
#define LED_PIN (PB0)         /**< LED Pin Number  */

#define BUTTON (PORTD)        /** Push Button Port Number of the car seat */
#define BUTTON_PIN (PD0)      /** Push Button Pin Number of the car seat */

#define SWITCH (PORTC)       /**  Switch Port Number of the Heater */
#define SWITCH_PIN (PC0)     /**  Switch Pin Number of the car Heater */
#define BAUD 9600
#define BAUDRATE ((F_CPU)/(BAUD*0x16UL)-1)

uint16_t temp; 
uint16_t degree;

void PWM_init();

uint16_t heat(uint16_t temp);

void InitADC();

uint16_t ReadADC(uint16_t ch);

void write_ch_tx(char ch);

void write_tx(char *str);

void usart_init();

void peripheral_init(void);

void led_on(uint8_t state);

void delay_ms(uint32_t delay_time);

void led_off(uint8_t state);

int Led(void);
