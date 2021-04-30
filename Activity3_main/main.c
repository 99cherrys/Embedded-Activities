

int main()
{

    InitADC();
    PWM_init();

    uint16_t temp=0; //initialize a temp variable to 0
     uint16_t degree=0;

    while(1)
    {
        temp = ReadADC(5);
        degree = heat(temp);
        _delay_ms(200);
    }

    return 0;
}
