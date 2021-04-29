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
