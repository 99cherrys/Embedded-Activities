void InitADC()
{
    ADMUX = (1<<REFS0); //For AREF = AVCC
    ADCSRA = (1<<ADEN) | (7<<ADPS0); //Enable ADC and Prescaller of 128FCPU (128 bit)
}

uint16_t ReadADC(uint16_t ch)
{
    //select ADC channel ch must be 0 to 7

    ADMUX &= 0xf8;
    ch = ch & 0b00000111;
    ADMUX |= ch;

    // start single conversion of ADC
    ADCSRA |= (1<<ADSC);

    // wait for the conversion to happen
    while(!(ADCSRA & (1<<ADIF)));

    //clear ADIF by writing 1 to it
    ADCSRA |= (1<<ADIF);
    return(ADC);
}
