#include <stdio.h> //standart Giriþ- Çýkýþ

void gonder(char kar); //Veri Gönderme
int al(char kar);   //Veri Alma
FILE data= FDEV_SETUP_STREAM(gonder, al, _FDEV_SETUP_RW);//(gönderilen, alýnan, Etkilenen Bayrak)) / _FDEV_SETUP_RW= okuma - yazma



void seri_yukle(uint16_t CPU_MHZ,uint16_t BAUD )
{
	int ubrr=(CPU_MHZ*1000000)/16/BAUD-1;
	stdout=stdin=&data; //standart girdi ve ciktiyi veriler degiskenine yonlendir
	UCSRA=0x00; // Senkron için kullanýlýr. asenkron yaptýðým için kapalý
	UCSRB=0x18; // 00011000 - TXEN - PD0 pini Alýcý olur / RXEN - PD1 pini Gönderir
	UCSRC=0x86; // 10000110 - UCSZ0 / UCSZ1 / ursel akitf.
	UBRRH=0x00;
	UBRRL=ubrr; // Baðlantý hýzý
}

void gonder(char kar)
{
	//loop_until_bit_is_set(UCSRA, UDRE); // ucsra nýn 5. yazmacý olan udre
	// 1 olduðunda, yeni veri için boþ olduðunu gösterir. eðer boþsa gönder iþlemi yapýlýr
	while (!(UCSRA&(1<<UDRE)));			// 2. yol
	
	UDR = kar;							// Gönderme ve alma UDR den geçer.
}

int al(char kar)
{
	//loop_until_bit_is_set(UCSRA,RXC); // UCSRA içindeki 7. bitinde bulunan RXC yazmacý akitif olduðunda kullan
	
	while (!(UCSRA & (1<<RXC)));
	return kar= UDR;
}
