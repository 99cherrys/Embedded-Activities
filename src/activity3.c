#include"activity3.h"

void PWM_init()
{
    // non-inverting mode for PWM gneration and fast PWM - 10 bit mode with TOP = 0x03ff for TCCR1A
    TCCR1A |= (1<<COM1A1) | (1<<WGM11) | (1<<WGM10) ;

   // fast PWM - 10 bit mode with TOP = 0x03ff for TCCR1B Prescalar divisor for timer1 = 64 bit
    TCCR1B |= (1<<WGM12) | (1<<CS11) | (1<<CS10);

    DDRB |= (1<<PB1);

}

uint8_t heat(uint16_t temp)
{
    uint16_t t = 0;
    if (temp>=0 && temp<=205)
    {
        OCR1A=205;
        t = 20;
    }

    else if (temp>=210 && temp<=500)
    {
        OCR1A=410;
        t = 25;
    }

    else if (temp>=510 && temp<=700)
    {
        OCR1A=716;
        t = 29;
    }

    else if (temp>=710 && temp<=1024)
    {
        OCR1A=972;
        t = 33;
    }
return t;
}

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