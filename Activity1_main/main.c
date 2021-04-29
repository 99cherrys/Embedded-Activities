/**
 * @file project1_main.c
 * @author Charanya ()
 * @brief Project to Turn ON an LED at 200ms ON and 100 ms OFF Interval
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	while(1)
	{
    if(!(PIND &(ON<<BUTTON_PIN)))
        {
            if(!(PINC &(ON<<SWITCH_PIN)))
            {
        led_on(ON);
		delay_ms(LED_ON_TIME);
            }
    }
    
    else
    {
        led_off(OFF);
		delay_ms(LED_OFF_TIME);	
    }
	}
	return 0;
}
