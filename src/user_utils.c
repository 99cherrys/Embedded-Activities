#include "user_utils.h"


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
    DDRD &= (OFF<<BUTTON_PIN);
    DDRC &= (OFF<<SWITCH_PIN);
    BUTTON |= (ON <<BUTTON_PIN);
    SWITCH |= (ON <<SWITCH_PIN);
}

void change_led_state(uint8_t state)
{
	LED |= (ON<<LED_PIN);
}
