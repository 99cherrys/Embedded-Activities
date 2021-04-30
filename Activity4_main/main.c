#include<activity4.h>

int main(void)
{
    peripheral_init();
    InitADC();
    PWM_init();
    int state;
     uint16_t temp=0; //initialize a temp variable to 0
     uint16_t degree=0;
     write_tx("Temperature Reading is: ");

    while(1)
    {
       state = Led();

    if(state)
    {
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