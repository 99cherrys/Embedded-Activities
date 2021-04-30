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

int main(void)
{
    peripheral_init();
    InitADC();
    PWM_init();
    int state;
     uint8_t temp=0; //initialize a temp variable to 0
     uint8_t degree=0;

    while(1)
    {
       state = Led();

    if(state)
    {
         write_tx("Temperature Reading is: ");
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
    else
        write_tx("Heater is OFF\n");
    }
    return 0;
}
