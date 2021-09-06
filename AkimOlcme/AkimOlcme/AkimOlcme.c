/*
 * AkimOlcme.c
 *
 * Created: 4.09.2021 10:40:52
 *  Author: fethiye
 */ 


#include <avr/io.h>
#include "avr/portpins.h"
#include "C:/Users/fethiye/Desktop/projeler/ACS712 ile akým ölçme - Atmel studio/ser_il.h"
#include <util/delay.h>
const int analogPin = PINA0;
int mVperAmp = 185;
int RawValue = 0;
int ACSoffset = 2500;
int Voltage = 0.0;
int Amps = 0.0;

uint16_t read_adc(uint8_t channel){
	ADMUX &= 0xF0;                    //Clear the older channel that was read
	channel=channel&0b00000111;       //Select ADC Channel ch must be 0-7
	ADMUX |= channel;                 //Defines the new ADC channel to be read
	ADCSRA |= (1<<ADSC);              //Starts a new conversion
	while(ADCSRA & (1<<ADSC));        //Wait until the conversion is done
	return ADCW;                      //Returns the ADC value of the chosen channel
}

int main(void)
{
	seri_yukle(16, 19200);
	
    while(1)
    {
		RawValue = read_adc(analogPin);
		Voltage = (RawValue / 1023.0) * 5000;
		Amps = ((Voltage - ACSoffset) / mVperAmp);
		
		printf("Ham deðer = %i \n\n\r",read_adc(0));
		printf("\t mV = ");
		strcat("%i", Voltage);
		printf("\t Amp = ");
		strcat("%i",Amps);
		_delay_ms(2500); 
    }
}