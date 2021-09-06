#include <stdio.h> //standart Giri�- ��k��

void gonder(char kar); //Veri G�nderme
int al(char kar);   //Veri Alma
FILE data= FDEV_SETUP_STREAM(gonder, al, _FDEV_SETUP_RW);//(g�nderilen, al�nan, Etkilenen Bayrak)) / _FDEV_SETUP_RW= okuma - yazma



void seri_yukle(uint16_t CPU_MHZ,uint16_t BAUD )
{
	int ubrr=(CPU_MHZ*1000000)/16/BAUD-1;
	stdout=stdin=&data; //standart girdi ve ciktiyi veriler degiskenine yonlendir
	UCSRA=0x00; // Senkron i�in kullan�l�r. asenkron yapt���m i�in kapal�
	UCSRB=0x18; // 00011000 - TXEN - PD0 pini Al�c� olur / RXEN - PD1 pini G�nderir
	UCSRC=0x86; // 10000110 - UCSZ0 / UCSZ1 / ursel akitf.
	UBRRH=0x00;
	UBRRL=ubrr; // Ba�lant� h�z�
}

void gonder(char kar)
{
	//loop_until_bit_is_set(UCSRA, UDRE); // ucsra n�n 5. yazmac� olan udre
	// 1 oldu�unda, yeni veri i�in bo� oldu�unu g�sterir. e�er bo�sa g�nder i�lemi yap�l�r
	while (!(UCSRA&(1<<UDRE)));			// 2. yol
	
	UDR = kar;							// G�nderme ve alma UDR den ge�er.
}

int al(char kar)
{
	//loop_until_bit_is_set(UCSRA,RXC); // UCSRA i�indeki 7. bitinde bulunan RXC yazmac� akitif oldu�unda kullan
	
	while (!(UCSRA & (1<<RXC)));
	return kar= UDR;
}
