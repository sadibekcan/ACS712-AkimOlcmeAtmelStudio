
unsigned int us(char prt,int trig, int echo)
{
	uint16_t uSound=0,cnt=0;
	
	
	cnt=10;
	uSound=10;

	if (prt=='a')
	{
		DDRA|=_BV(trig);
		DDRA&=~_BV(echo);
		PORTA &=~ _BV(trig);
		_delay_us(2) ;
		PORTA |=  _BV(trig);
		_delay_us(20) ;
		PORTA &=~  _BV(trig);
		_delay_us(2);

		_delay_us(30); // sonic burst

		while (!bit_is_set(PINA,echo)){
			cnt++;
			if (cnt>=25000)
			break;
		}

		while (bit_is_set(PINA,echo)) {
			uSound++;
			if (uSound>=25000)
			break;
		}
		
	} 
	else if (prt=='b')
	{
		DDRB|=_BV(trig);
		DDRB&=~_BV(echo);
		
		PORTB &=~ _BV(trig);
		_delay_us(2) ;
		PORTB |=  _BV(trig);
		_delay_us(20) ;
		PORTB &=~  _BV(trig);
		_delay_us(2);

		_delay_us(30); // sonic burst

		while (!bit_is_set(PINB,echo)){
			cnt++;
			if (cnt>=25000)
			break;
		}

		while (bit_is_set(PINB,echo)) {
			uSound++;
			if (uSound>=25000)
			break;
		}
		
	}
	else if (prt=='c')
	{
		DDRC|=_BV(trig);
		DDRC&=~_BV(echo);
		
		PORTC &=~ _BV(trig);
		_delay_us(2) ;
		PORTC |=  _BV(trig);
		_delay_us(20) ;
		PORTC &=~  _BV(trig);
		_delay_us(2);

		_delay_us(30); // sonic burst

		while (!bit_is_set(PINC,echo)){
			cnt++;
			if (cnt>=25000)
			break;
		}

		while (bit_is_set(PINC,echo)) {
			uSound++;
			if (uSound>=25000)
			break;
		}
		
	}
	else if (prt=='d')
	{
		DDRD|=_BV(trig);
		DDRD&=~_BV(echo);
		
		PORTD &=~ _BV(trig);
		_delay_us(2) ;
		PORTD |=  _BV(trig);
		_delay_us(20) ;
		PORTD &=~  _BV(trig);
		_delay_us(2);

		_delay_us(30); // sonic burst

		while (!bit_is_set(PIND,echo)){
			cnt++;
			if (cnt>=25000)
			break;
		}

		while (bit_is_set(PIND,echo)) {
			uSound++;
			if (uSound>=25000)
			break;
		}
		
	}	
	return uSound;
}
