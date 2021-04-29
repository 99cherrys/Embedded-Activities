#include "activity1.h"


void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}


/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */

void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (ON <<LED_PIN);
	
	/* Configure Seat button Pin */
    DDRD &= (OFF<<BUTTON_PIN);
	
	/* Configure heater switch Pin */
    DDRC &= (OFF<<SWITCH_PIN);
	
	/* Convert pull up pin to pull down  nature  */
    BUTTON |= (ON <<BUTTON_PIN);
    SWITCH |= (ON <<SWITCH_PIN);
}

/**
 * @brief if both the conditions(seat occupied and heater switch is ON) satisfied turn LED ON
 * 
 */

void led_on(uint8_t state)
{
	LED |= (state<<LED_PIN);
}


/**
 * @brief if both the conditions not satisfied turn LED ON
 * 
 */
void led_off(uint8_t state)
{
	LED &= (state<<LED_PIN);
}
