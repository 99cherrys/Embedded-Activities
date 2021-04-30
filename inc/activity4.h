#ifndef __ACTIVITY4_H_
#define __ACTIVITY4_H_
/**
 * @file activity4.h
 * @author Charanya ()
 * @brief Project to build a seat heating app using PWM signals and UART protocol
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

//Declare global variables
uint16_t temp; 
uint16_t degree;

/**
 * @brief to initialize PWM
 */
void PWM_init();

/**
 * @brief to convert the temperature to required range and display 20/25/29/33 degree celcius
 *
 * @param data read from the potentiometer temperature sensor
 */
uint16_t heat(uint16_t temp);

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

/**
 * @brief To write the 8-bit data to be tranmitted via USART on the transmitter buffer
 *
 * @param data the dataframe to be transmitted
 */

/* Writes a character on Tx pin */
void write_ch_tx(char ch);

/* Writes a character on Tx pin */
void write_tx(char *str);

void usart_init();

/**
 * @brief initialize ports for LED, outpot port for PWM 
 *
 */
void peripheral_init(void);

/**
 * @brief if both the conditions(seat occupied and heater switch is ON) satisfied turn LED ON
 *
 */
void led_on(uint8_t state);

/**
 * @brief if both the conditions not satisfied turn LED OFF
 *
 */
void led_off(uint8_t state);

void delay_ms(uint32_t delay_time);

/**
 * @brief Check the status of heater switch and seat button and return 1 if both the switches are On
 *
 */
int Led(void);

#endif
