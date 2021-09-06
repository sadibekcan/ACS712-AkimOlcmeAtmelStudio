#include <stdbool.h>
#include "i2c.h"

int x,y,z;
double angle;

unsigned char display[5]={0,0,0,0,0};


void read()
{
	I2C_Write(0x02,0x00);   
	_delay_ms(50);

	x=I2C_Read(0x03);
	x=(x<<8)+I2C_Read(0x04);

	y=I2C_Read(0x07);
	y=(y<<8)+I2C_Read(0x08);

	z=I2C_Read(0x05);
	z=(z<<8)+I2C_Read(0x06);
}

int x_aci()
{
	int x_aci;
	read();

	x_aci= atan2((double)y,(double)x) * (180 / 3.14159265) + 180; 

	return x_aci;

}

int y_aci()
{

	int y_aci;
	read();

	y_aci= atan2((double)z,(double)x) * (180 / 3.14159265) + 180; 

	return y_aci;

}

int z_aci()
{

	int z_aci;
	read();

	z_aci= atan2((double)z,(double)y) * (180 / 3.14159265) + 180;

	return z_aci;

}