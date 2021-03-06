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
    // Initialize ADC
    InitADC(); 
    
    // Initialize a temp variable to 0
    temp=0;    


    while(1)
    {
        // Read analog values from channel 5
        temp = ReadADC(5); 
        
        _delay_ms(DELAY_TIME);
    }

    return 0;
}
