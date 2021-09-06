#include "util/delay.h"

//
#define START			0x08
#define RE_START		0x10
#define MT_SLA_ACK		0x18
#define MT_SLA_NOACK 	0x20
#define MT_DATA_ACK		0x28
#define MT_DATA_NOACK	0x30
#define MR_SLA_ACK		0x40
#define MR_SLA_NOACK	0x48
#define MR_DATA_ACK		0x50
#define MR_DATA_NOACK	0x58	
	                            
#define RD_DEVICE_ADDR  0x3D	   
#define WD_DEVICE_ADDR  0x3C	   

//
#define Start()			(TWCR=(1<<TWINT)|(1<<TWSTA)|(1<<TWEN))		
#define Stop()			(TWCR=(1<<TWINT)|(1<<TWSTO)|(1<<TWEN))		
#define Wait()			{while(!(TWCR&(1<<TWINT)));}				
#define TestAck()		(TWSR&0xf8)									
#define SetAck			(TWCR|=(1<<TWEA))							
#define SetNoAck		(TWCR&=~(1<<TWEA))							
#define Twi()			(TWCR=(1<<TWINT)|(1<<TWEN))				    
#define Write8Bit(x)	{TWDR=(x);TWCR=(1<<TWINT)|(1<<TWEN);}		

unsigned char I2C_Write(unsigned char RegAddress,unsigned char Wdata);
unsigned char I2C_Read(unsigned RegAddress);

unsigned char I2C_Write(unsigned char RegAddress,unsigned char Wdata)
{
	  Start();						
	  Wait();
	  if(TestAck()!=START) 
		return 1;					
	  
	  Write8Bit(WD_DEVICE_ADDR);	
	  Wait();
	  if(TestAck()!=MT_SLA_ACK) 
		return 1;					
	  
	  Write8Bit(RegAddress);		
	  Wait();
	  if(TestAck()!=MT_DATA_ACK) 
	  	return 1;				   
	  
	  Write8Bit(Wdata);			 	
	  Wait();
	  if(TestAck()!=MT_DATA_ACK) 
	  	return 1;				   
	  Stop();  						
 	_delay_ms(10);				
	  return 0;
}



unsigned char I2C_Read(unsigned RegAddress)

 {
	 unsigned  char  temp;

	   Start();
	   Wait();
	   if (TestAck()!=START) 
	   	  return 1;			 		
	   
	   Write8Bit(WD_DEVICE_ADDR);	
	   Wait(); 
	   if (TestAck()!=MT_SLA_ACK) 
	   	  return 1;				    
	   
	   Write8Bit(RegAddress);		
	   Wait();
	   if (TestAck()!=MT_DATA_ACK) 
	   	  return 1;

	    Start();	   				
	   Wait();
	   if (TestAck()!=RE_START)  
	   	return 1;
	   Write8Bit(RD_DEVICE_ADDR);	
	   Wait();
	   if(TestAck()!=MR_SLA_ACK)  
	   	  return 1;				   
	   
	   Twi();	 				   
	   Wait();
	   if(TestAck()!=MR_DATA_NOACK) 
	   	 return 1;					
	   
	   temp=TWDR;
       Stop();
	   return temp;

      } 
	
