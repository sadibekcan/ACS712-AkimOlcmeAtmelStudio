
/*		ÖRNEK
#define D4 _PORTC4
#define D5 _PORTC5
#define D6 _PORTC6
#define D7 _PORTC7
#define RS _PORTC0
#define EN _PORTC1
*/

#include <stdio.h>
void lcd_char_yaz(char a);
FILE lcd_std = FDEV_SETUP_STREAM(lcd_char_yaz, NULL, _FDEV_SETUP_WRITE);

#define _PORTA0 0
#define _PORTA1 1
#define _PORTA2 2
#define _PORTA3 3
#define _PORTA4 4
#define _PORTA5 5
#define _PORTA6 6
#define _PORTA7 7
#define _PORTB0 10
#define _PORTB1 11
#define _PORTB2 12
#define _PORTB3 13
#define _PORTB4 14
#define _PORTB5 15
#define _PORTB6 16
#define _PORTB7 17
#define _PORTC0 20
#define _PORTC1 21
#define _PORTC2 22
#define _PORTC3 23
#define _PORTC4 24
#define _PORTC5 25
#define _PORTC6 26
#define _PORTC7 27
#define _PORTD0 30
#define _PORTD1 31
#define _PORTD2 32
#define _PORTD3 33
#define _PORTD4 34
#define _PORTD5 35
#define _PORTD6 36
#define _PORTD7 37

#ifndef D0
#define D0 _PORTA0
#define D1 _PORTA1
#define D2 _PORTA2
#define D3 _PORTA3
#endif

#include<util/delay.h>

void pinSecimi(int a, int b)
{
	if(b == 0)
	{
		if(a == _PORTA0)
		PORTA &= ~(1<<PA0);
		else if(a == _PORTA1)
		PORTA &= ~(1<<PA1);
		else if(a == _PORTA2)
		PORTA &= ~(1<<PA2);
		else if(a == _PORTA3)
		PORTA &= ~(1<<PA3);
		else if(a == _PORTA4)
		PORTA &= ~(1<<PA4);
		else if(a == _PORTA5)
		PORTA &= ~(1<<PA5);
		else if(a == _PORTA6)
		PORTA &= ~(1<<PA6);
		else if(a == _PORTA7)
		PORTA &= ~(1<<PA7);
		else if(a == _PORTB0)
		PORTB &= ~(1<<PB0);
		else if(a == _PORTB1)
		PORTB &= ~(1<<PB1);
		else if(a == _PORTB2)
		PORTB &= ~(1<<PB2);
		else if(a == _PORTB3)
		PORTB &= ~(1<<PB3);
		else if(a == _PORTB4)
		PORTB &= ~(1<<PB4);
		else if(a == _PORTB5)
		PORTB &= ~(1<<PB5);
		else if(a == _PORTB6)
		PORTB &= ~(1<<PB6);
		else if(a == _PORTB7)
		PORTB &= ~(1<<PB7);
		else if(a == _PORTC0)
		PORTC &= ~(1<<PC0);
		else if(a == _PORTC1)
		PORTC &= ~(1<<PC1);
		else if(a == _PORTC2)
		PORTC &= ~(1<<PC2);
		else if(a == _PORTC3)
		PORTC &= ~(1<<PC3);
		else if(a == _PORTC4)
		PORTC &= ~(1<<PC4);
		else if(a == _PORTC5)
		PORTC &= ~(1<<PC5);
		else if(a == _PORTC6)
		PORTC &= ~(1<<PC6);
		else if(a == _PORTC7)
		PORTC &= ~(1<<PC7);
		else if(a == _PORTD0)
		PORTD &= ~(1<<PD0);
		else if(a == _PORTD1)
		PORTD &= ~(1<<PD1);
		else if(a == _PORTD2)
		PORTD &= ~(1<<PD2);
		else if(a == _PORTD3)
		PORTD &= ~(1<<PD3);
		else if(a == _PORTD4)
		PORTD &= ~(1<<PD4);
		else if(a == _PORTD5)
		PORTD &= ~(1<<PD5);
		else if(a == _PORTD6)
		PORTD &= ~(1<<PD6);
		else if(a == _PORTD7)
		PORTD &= ~(1<<PD7);
	}
	else
	{
		if(a == _PORTA0)
		PORTA |= (1<<PA0);
		else if(a == _PORTA1)
		PORTA |= (1<<PA1);
		else if(a == _PORTA2)
		PORTA |= (1<<PA2);
		else if(a == _PORTA3)
		PORTA |= (1<<PA3);
		else if(a == _PORTA4)
		PORTA |= (1<<PA4);
		else if(a == _PORTA5)
		PORTA |= (1<<PA5);
		else if(a == _PORTA6)
		PORTA |= (1<<PA6);
		else if(a == _PORTA7)
		PORTA |= (1<<PA7);
		else if(a == _PORTB0)
		PORTB |= (1<<PB0);
		else if(a == _PORTB1)
		PORTB |= (1<<PB1);
		else if(a == _PORTB2)
		PORTB |= (1<<PB2);
		else if(a == _PORTB3)
		PORTB |= (1<<PB3);
		else if(a == _PORTB4)
		PORTB |= (1<<PB4);
		else if(a == _PORTB5)
		PORTB |= (1<<PB5);
		else if(a == _PORTB6)
		PORTB |= (1<<PB6);
		else if(a == _PORTB7)
		PORTB |= (1<<PB7);
		else if(a == _PORTC0)
		PORTC |= (1<<PC0);
		else if(a == _PORTC1)
		PORTC |= (1<<PC1);
		else if(a == _PORTC2)
		PORTC |= (1<<PC2);
		else if(a == _PORTC3)
		PORTC |= (1<<PC3);
		else if(a == _PORTC4)
		PORTC |= (1<<PC4);
		else if(a == _PORTC5)
		PORTC |= (1<<PC5);
		else if(a == _PORTC6)
		PORTC |= (1<<PC6);
		else if(a == _PORTC7)
		PORTC |= (1<<PC7);
		else if(a == _PORTD0)
		PORTD |= (1<<PD0);
		else if(a == _PORTD1)
		PORTD |= (1<<PD1);
		else if(a == _PORTD2)
		PORTD |= (1<<PD2);
		else if(a == _PORTD3)
		PORTD |= (1<<PD3);
		else if(a == _PORTD4)
		PORTD |= (1<<PD4);
		else if(a == _PORTD5)
		PORTD |= (1<<PD5);
		else if(a == _PORTD6)
		PORTD |= (1<<PD6);
		else if(a == _PORTD7)
		PORTD |= (1<<PD7);
	}
}



//lcd 8 Bit Kýsmý
void lcd8_Port(char a)
{
	if(a & 1)
	pinSecimi(D0,1);
	else
	pinSecimi(D0,0);
	
	if(a & 2)
	pinSecimi(D1,1);
	else
	pinSecimi(D1,0);
	
	if(a & 4)
	pinSecimi(D2,1);
	else
	pinSecimi(D2,0);
	
	if(a & 8)
	pinSecimi(D3,1);
	else
	pinSecimi(D3,0);
	
	if(a & 16)
	pinSecimi(D4,1);
	else
	pinSecimi(D4,0);

	if(a & 32)
	pinSecimi(D5,1);
	else
	pinSecimi(D5,0);
	
	if(a & 64)
	pinSecimi(D6,1);
	else
	pinSecimi(D6,0);
	
	if(a & 128)
	pinSecimi(D7,1);
	else
	pinSecimi(D7,0);
}
void lcd8_Cmd(char a)
{
	pinSecimi(RS,0);          
	lcd8_Port(a);             
	pinSecimi(EN,1);          
	_delay_ms(1);
	pinSecimi(EN,0);             
	_delay_ms(1);
}

void lcd8_Temizle()
{
	lcd8_Cmd(1);
}

void lcd8_imlec(char a, char b)
{
	if(a == 1)
	lcd8_Cmd(0x80 + b);
	else if(a == 2)
	lcd8_Cmd(0xC0 + b);
}

void lcd8_yukle()
{
	pinSecimi(RS,0);
	pinSecimi(EN,0);
	_delay_ms(20);
	lcd8_Cmd(0x30);
	_delay_ms(5);
	lcd8_Cmd(0x30);
	_delay_ms(1);
	lcd8_Cmd(0x30);
	_delay_ms(10);
	/////////////////////////////////////////////////////
	lcd8_Cmd(0x38);    
	lcd8_Cmd(0x0C);    
	lcd8_Cmd(0x01);    
	lcd8_Cmd(0x06);    
}

void lcd8_char_yaz(char a)
{
	pinSecimi(RS,1);         
	lcd8_Port(a);            
	pinSecimi(EN,1);         
	_delay_ms(1);
	pinSecimi(EN,0);         
	_delay_ms(1);
}

void lcd8_yaz(char *a)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	lcd8_char_yaz(a[i]);
}

void lcd8_saga_kaydir()
{
	lcd8_Cmd(0x1C);
}

void lcd8_sola_kaydir()
{
	lcd8_Cmd(0x18);
}


//lcd 4 Bit Kýsmý

void lcd_Port(char a)
{
	if(a & 1)
	pinSecimi(D4,1);
	else
	pinSecimi(D4,0);
	
	if(a & 2)
	pinSecimi(D5,1);
	else
	pinSecimi(D5,0);
	
	if(a & 4)
	pinSecimi(D6,1);
	else
	pinSecimi(D6,0);
	
	if(a & 8)
	pinSecimi(D7,1);
	else
	pinSecimi(D7,0);
}
void lcd_Cmd(char a)
{
	pinSecimi(RS,0);             // => RS = 0
	lcd_Port(a);
	pinSecimi(EN,1);            // => E = 1
	_delay_ms(1);
	pinSecimi(EN,0);             // => E = 0
	_delay_ms(1);
}

void lcd_temizle()
{
	lcd_Cmd(0);
	lcd_Cmd(1);
}

void lcd_imlec(char a, char b)
{
	char temp,z,y;
	if(a == 1)
	{
		temp = 0x80 + b;
		z = temp>>4;
		y = (0x80+b) & 0x0F;
		lcd_Cmd(z);
		lcd_Cmd(y);
	}
	else if(a == 2)
	{
		temp = 0xC0 + b;
		z = temp>>4;
		y = (0xC0+b) & 0x0F;
		lcd_Cmd(z);
		lcd_Cmd(y);
	}
}

void lcd_yukle()
{
	stdout = stdin = &lcd_std;
	lcd_Port(0x00);
	_delay_ms(20);
	///////////// Reset process from datasheet /////////
	lcd_Cmd(0x03);
	_delay_ms(5);
	lcd_Cmd(0x03);
	_delay_ms(11);
	lcd_Cmd(0x03);
	/////////////////////////////////////////////////////
	lcd_Cmd(0x02);
	lcd_Cmd(0x02);
	lcd_Cmd(0x08);
	lcd_Cmd(0x00);
	lcd_Cmd(0x0C);
	lcd_Cmd(0x00);
	lcd_Cmd(0x06);
}

void lcd_char_yaz(char a)
{
	char temp,y;
	temp = a&0x0F;
	y = a&0xF0;
	pinSecimi(RS,1);             // => RS = 1
	lcd_Port(y>>4);             //Data transfer
	pinSecimi(EN,1);
	_delay_ms(1);
	pinSecimi(EN,0);
	_delay_ms(1);
	lcd_Port(temp);
	pinSecimi(EN,1);
	_delay_ms(1);
	pinSecimi(EN,0);
	_delay_ms(1);
}

void lcd_yaz(char *a)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	lcd_char_yaz(a[i]);
}

void lcd_saga_kaydir()
{
	lcd_Cmd(0x01);
	lcd_Cmd(0x0C);
}

void lcd_sola_kaydir()
{
	lcd_Cmd(0x01);
	lcd_Cmd(0x08);
}
//electrosome.com ' a teþekkür ederiz

