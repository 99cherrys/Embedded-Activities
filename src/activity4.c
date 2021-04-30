#include<activity4.h>

void PWM_init()
{
    // non-inverting mode for PWM gneration and fast PWM - 10 bit mode with TOP = 0x03ff for TCCR1A
    TCCR1A |= (1<<COM1A1) | (1<<WGM11) | (1<<WGM10) ;

   // fast PWM - 10 bit mode with TOP = 0x03ff for TCCR1B Prescalar divisor for timer1 = 64 bit
    TCCR1B |= (1<<WGM12) | (1<<CS11) | (1<<CS10);

    DDRB |= (1<<PB1);

}

uint8_t heat(uint8_t temp)
{
    uint8_t t = 0;
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
/**
 * @brief To write the 8-bit data to be tranmitted via USART on the transmitter buffer
 *
 * @param data the dataframe to be transmitted
 */

/* Writes a character on Tx pin */
void write_ch_tx(char ch)
{
    while(!(UCSR0A & (1<<UDRE0)));
    UDR0 = ch;
}


/* Write a sentence on Tx pin*/
void write_tx(char *str)
{
    uint8_t i=0;
    for(i=0; str[i] != '\0'; i++)
        {
        write_ch_tx(str[i]);
    }
}

void usart_init()
{
    /* Set Baud Rate */
    UBRR0H = (BAUDRATE >> 8);
    UBRR0L = BAUDRATE ;
    /* Set character size to 8 bit */
    UCSR0C |= (1<<UCSZ01) | (1<<UCSZ00);
    /* Enable Tx Rx */
    UCSR0B |= (1<<TXEN0) | (1<<RXEN0);
}

void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (ON <<LED_PIN);

	/* Configure Seat button Pin */
    DDRD &= (OFF<<BUTTON_PIN);

	/* Configure heater switch Pin */
    DDRC &= (OFF<<SWITCH_PIN);

	/* Convert pull up pin to pull down  nature  */
    BUTTON |= (ON <<BUTTON_PIN);
    SWITCH |= (ON <<SWITCH_PIN);
}

/**
 * @brief if both the conditions(seat occupied and heater switch is ON) satisfied turn LED ON
 *
 */

void led_on(uint8_t state)
{
	LED |= (state<<LED_PIN);
}

void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}
/**
 * @brief if both the conditions not satisfied turn LED OFF
 *
 */
void led_off(uint8_t state)
{
	LED &= (state<<LED_PIN);
}

int Led(void)
{
    int r=0;
 if(!(PIND &(ON<<BUTTON_PIN)))
        {
            if(!(PINC &(ON<<SWITCH_PIN)))
            {
        led_on(ON);
		delay_ms(LED_ON_TIME);
		r=1;
            }
    }

    else
    {
        led_off(OFF);
		delay_ms(LED_OFF_TIME);
		r=0;
    }
    return r;
}
