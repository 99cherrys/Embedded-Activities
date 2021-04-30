/**
 * @file project2_main.c
 * @author Charanya ()
 * @brief Project to Turn ON an LED at 200ms ON and 100 ms OFF Interval
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity3.h"

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note 
 */

int main()
{

    InitADC();
    PWM_init();

    uint8_t temp=0; //initialize a temp variable to 0
   
    while(1)
    {
        temp = ReadADC(5);
        heat(temp);
        _delay_ms(200);
    }

    return 0;
}
