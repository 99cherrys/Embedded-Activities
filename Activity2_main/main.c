/**
 * @file project2_main.c
 * @author Charanya ()
 * @brief Project to read analogue values from a temperature sensor (Potentiometer) 
 * and convert the obtained values to digital values
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity2.h"

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * 
 * initialize ADC register and read analog values from the channel 5 by calling ReadADC function where conversion happens
 */

int main(void)
{

    InitADC();
    uint16_t temp=0; //initialize a temp variable to 0


    while(1)
    {
        temp = ReadADC(5);
        _delay_ms(200);
    }

    return 0;
}
