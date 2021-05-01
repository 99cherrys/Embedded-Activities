/**
 * @file project4_main.c
 * @author Charanya ()
 * @brief Project to build a seat heating app using UART protocol
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<activity4.h>

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 *@note Initialize peripherals PORTD and PORTC for seat button and heater switch
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 * @note Initialize ADC and PWM, the adC ourput is obtained from the PORT B1
 * @note Initialize UART to write the temperature values to the serial monitor
 */

int main(void)
{
    peripheral_init();
    InitADC();
    PWM_init();
    
    int state;
    //initialize a temp variable and degree variable to 0
    
     temp=0; 
     degree=0;

    while(1)
    {
        // read status of seat button and heater switch
        // LED turns on if both the switches are ON
       state = Led();

    if(state)
    {
         write_tx("Temperature Reading in Centigrade is: ");
        temp = ReadADC(5);
        degree = heat(temp);
        _delay_ms(200);

         if (degree==20)
               write_tx("20");

           else if (degree==25)
               write_tx("25");

           else if (degree==29)
               write_tx("29");

           else if (degree==33)
               write_tx("33");
write_tx("C\n");
    }
        
    // If both the switches or either of the switches are off led does'nt glow    
    else
        write_tx("Heater is OFF\n");
    }
    return 0;
}
