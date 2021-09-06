#ifndef _sbit_h_
#define _sbit_h_

#include <avr/io.h>

//                      Access bits like variables:
struct bits {
	uint8_t b0:1, b1:1, b2:1, b3:1, b4:1, b5:1, b6:1, b7:1;
} __attribute__((__packed__));
#define SBIT_(port,pin) ((*(volatile struct bits*)&port).b##pin)
#define SBIT(x,y)       SBIT_(x,y)

#ifdef PORTA

#define	PORT_A0		SBIT( PORTA, 0 )
#define	PORT_A1		SBIT( PORTA, 1 )
#define	PORT_A2		SBIT( PORTA, 2 )
#define	PORT_A3		SBIT( PORTA, 3 )
#define	PORT_A4		SBIT( PORTA, 4 )
#define	PORT_A5		SBIT( PORTA, 5 )
#define	PORT_A6		SBIT( PORTA, 6 )
#define	PORT_A7		SBIT( PORTA, 7 )

#define	DDR_A0		SBIT( DDRA, 0 )
#define	DDR_A1		SBIT( DDRA, 1 )
#define	DDR_A2		SBIT( DDRA, 2 )
#define	DDR_A3		SBIT( DDRA, 3 )
#define	DDR_A4		SBIT( DDRA, 4 )
#define	DDR_A5		SBIT( DDRA, 5 )
#define	DDR_A6		SBIT( DDRA, 6 )
#define	DDR_A7		SBIT( DDRA, 7 )

#define	PIN_A0		SBIT( PINA, 0 )
#define	PIN_A1		SBIT( PINA, 1 )
#define	PIN_A2		SBIT( PINA, 2 )
#define	PIN_A3		SBIT( PINA, 3 )
#define	PIN_A4		SBIT( PINA, 4 )
#define	PIN_A5		SBIT( PINA, 5 )
#define	PIN_A6		SBIT( PINA, 6 )
#define	PIN_A7		SBIT( PINA, 7 )

#endif

#ifdef PORTB

#define	PORT_B0		SBIT( PORTB, 0 )
#define	PORT_B1		SBIT( PORTB, 1 )
#define	PORT_B2		SBIT( PORTB, 2 )
#define	PORT_B3		SBIT( PORTB, 3 )
#define	PORT_B4		SBIT( PORTB, 4 )
#define	PORT_B5		SBIT( PORTB, 5 )
#define	PORT_B6		SBIT( PORTB, 6 )
#define	PORT_B7		SBIT( PORTB, 7 )

#define	DDR_B0		SBIT( DDRB, 0 )
#define	DDR_B1		SBIT( DDRB, 1 )
#define	DDR_B2		SBIT( DDRB, 2 )
#define	DDR_B3		SBIT( DDRB, 3 )
#define	DDR_B4		SBIT( DDRB, 4 )
#define	DDR_B5		SBIT( DDRB, 5 )
#define	DDR_B6		SBIT( DDRB, 6 )
#define	DDR_B7		SBIT( DDRB, 7 )

#define	PIN_B0		SBIT( PINB, 0 )
#define	PIN_B1		SBIT( PINB, 1 )
#define	PIN_B2		SBIT( PINB, 2 )
#define	PIN_B3		SBIT( PINB, 3 )
#define	PIN_B4		SBIT( PINB, 4 )
#define	PIN_B5		SBIT( PINB, 5 )
#define	PIN_B6		SBIT( PINB, 6 )
#define	PIN_B7		SBIT( PINB, 7 )

#endif

#ifdef PORTC

#define	PORT_C0		SBIT( PORTC, 0 )
#define	PORT_C1		SBIT( PORTC, 1 )
#define	PORT_C2		SBIT( PORTC, 2 )
#define	PORT_C3		SBIT( PORTC, 3 )
#define	PORT_C4		SBIT( PORTC, 4 )
#define	PORT_C5		SBIT( PORTC, 5 )
#define	PORT_C6		SBIT( PORTC, 6 )
#define	PORT_C7		SBIT( PORTC, 7 )

#define	DDR_C0		SBIT( DDRC, 0 )
#define	DDR_C1		SBIT( DDRC, 1 )
#define	DDR_C2		SBIT( DDRC, 2 )
#define	DDR_C3		SBIT( DDRC, 3 )
#define	DDR_C4		SBIT( DDRC, 4 )
#define	DDR_C5		SBIT( DDRC, 5 )
#define	DDR_C6		SBIT( DDRC, 6 )
#define	DDR_C7		SBIT( DDRC, 7 )

#define	PIN_C0		SBIT( PINC, 0 )
#define	PIN_C1		SBIT( PINC, 1 )
#define	PIN_C2		SBIT( PINC, 2 )
#define	PIN_C3		SBIT( PINC, 3 )
#define	PIN_C4		SBIT( PINC, 4 )
#define	PIN_C5		SBIT( PINC, 5 )
#define	PIN_C6		SBIT( PINC, 6 )
#define	PIN_C7		SBIT( PINC, 7 )

#endif

#ifdef PORTD

#define	PORT_D0		SBIT( PORTD, 0 )
#define	PORT_D1		SBIT( PORTD, 1 )
#define	PORT_D2		SBIT( PORTD, 2 )
#define	PORT_D3		SBIT( PORTD, 3 )
#define	PORT_D4		SBIT( PORTD, 4 )
#define	PORT_D5		SBIT( PORTD, 5 )
#define	PORT_D6		SBIT( PORTD, 6 )
#define	PORT_D7		SBIT( PORTD, 7 )

#define	DDR_D0		SBIT( DDRD, 0 )
#define	DDR_D1		SBIT( DDRD, 1 )
#define	DDR_D2		SBIT( DDRD, 2 )
#define	DDR_D3		SBIT( DDRD, 3 )
#define	DDR_D4		SBIT( DDRD, 4 )
#define	DDR_D5		SBIT( DDRD, 5 )
#define	DDR_D6		SBIT( DDRD, 6 )
#define	DDR_D7		SBIT( DDRD, 7 )

#define	PIN_D0		SBIT( PIND, 0 )
#define	PIN_D1		SBIT( PIND, 1 )
#define	PIN_D2		SBIT( PIND, 2 )
#define	PIN_D3		SBIT( PIND, 3 )
#define	PIN_D4		SBIT( PIND, 4 )
#define	PIN_D5		SBIT( PIND, 5 )
#define	PIN_D6		SBIT( PIND, 6 )
#define	PIN_D7		SBIT( PIND, 7 )

#endif

#ifdef PORTE

#define	PORT_E0		SBIT( PORTE, 0 )
#define	PORT_E1		SBIT( PORTE, 1 )
#define	PORT_E2		SBIT( PORTE, 2 )
#define	PORT_E3		SBIT( PORTE, 3 )
#define	PORT_E4		SBIT( PORTE, 4 )
#define	PORT_E5		SBIT( PORTE, 5 )
#define	PORT_E6		SBIT( PORTE, 6 )
#define	PORT_E7		SBIT( PORTE, 7 )

#define	DDR_E0		SBIT( DDRE, 0 )
#define	DDR_E1		SBIT( DDRE, 1 )
#define	DDR_E2		SBIT( DDRE, 2 )
#define	DDR_E3		SBIT( DDRE, 3 )
#define	DDR_E4		SBIT( DDRE, 4 )
#define	DDR_E5		SBIT( DDRE, 5 )
#define	DDR_E6		SBIT( DDRE, 6 )
#define	DDR_E7		SBIT( DDRE, 7 )

#define	PIN_E0		SBIT( PINE, 0 )
#define	PIN_E1		SBIT( PINE, 1 )
#define	PIN_E2		SBIT( PINE, 2 )
#define	PIN_E3		SBIT( PINE, 3 )
#define	PIN_E4		SBIT( PINE, 4 )
#define	PIN_E5		SBIT( PINE, 5 )
#define	PIN_E6		SBIT( PINE, 6 )
#define	PIN_E7		SBIT( PINE, 7 )

#endif

#ifdef PORTF

#define	PORT_F0		SBIT( PORTF, 0 )
#define	PORT_F1		SBIT( PORTF, 1 )
#define	PORT_F2		SBIT( PORTF, 2 )
#define	PORT_F3		SBIT( PORTF, 3 )
#define	PORT_F4		SBIT( PORTF, 4 )
#define	PORT_F5		SBIT( PORTF, 5 )
#define	PORT_F6		SBIT( PORTF, 6 )
#define	PORT_F7		SBIT( PORTF, 7 )

#define	DDR_F0		SBIT( DDRF, 0 )
#define	DDR_F1		SBIT( DDRF, 1 )
#define	DDR_F2		SBIT( DDRF, 2 )
#define	DDR_F3		SBIT( DDRF, 3 )
#define	DDR_F4		SBIT( DDRF, 4 )
#define	DDR_F5		SBIT( DDRF, 5 )
#define	DDR_F6		SBIT( DDRF, 6 )
#define	DDR_F7		SBIT( DDRF, 7 )

#define	PIN_F0		SBIT( PINF, 0 )
#define	PIN_F1		SBIT( PINF, 1 )
#define	PIN_F2		SBIT( PINF, 2 )
#define	PIN_F3		SBIT( PINF, 3 )
#define	PIN_F4		SBIT( PINF, 4 )
#define	PIN_F5		SBIT( PINF, 5 )
#define	PIN_F6		SBIT( PINF, 6 )
#define	PIN_F7		SBIT( PINF, 7 )

#endif

#ifdef PORTG

#define	PORT_G0		SBIT( PORTG, 0 )
#define	PORT_G1		SBIT( PORTG, 1 )
#define	PORT_G2		SBIT( PORTG, 2 )
#define	PORT_G3		SBIT( PORTG, 3 )
#define	PORT_G4		SBIT( PORTG, 4 )
#define	PORT_G5		SBIT( PORTG, 5 )
#define	PORT_G6		SBIT( PORTG, 6 )
#define	PORT_G7		SBIT( PORTG, 7 )

#define	DDR_G0		SBIT( DDRG, 0 )
#define	DDR_G1		SBIT( DDRG, 1 )
#define	DDR_G2		SBIT( DDRG, 2 )
#define	DDR_G3		SBIT( DDRG, 3 )
#define	DDR_G4		SBIT( DDRG, 4 )
#define	DDR_G5		SBIT( DDRG, 5 )
#define	DDR_G6		SBIT( DDRG, 6 )
#define	DDR_G7		SBIT( DDRG, 7 )

#define	PIN_G0		SBIT( PING, 0 )
#define	PIN_G1		SBIT( PING, 1 )
#define	PIN_G2		SBIT( PING, 2 )
#define	PIN_G3		SBIT( PING, 3 )
#define	PIN_G4		SBIT( PING, 4 )
#define	PIN_G5		SBIT( PING, 5 )
#define	PIN_G6		SBIT( PING, 6 )
#define	PIN_G7		SBIT( PING, 7 )

#endif

#ifdef PORTH

#define	PORT_H0		SBIT( PORTH, 0 )
#define	PORT_H1		SBIT( PORTH, 1 )
#define	PORT_H2		SBIT( PORTH, 2 )
#define	PORT_H3		SBIT( PORTH, 3 )
#define	PORT_H4		SBIT( PORTH, 4 )
#define	PORT_H5		SBIT( PORTH, 5 )
#define	PORT_H6		SBIT( PORTH, 6 )
#define	PORT_H7		SBIT( PORTH, 7 )

#define	DDR_H0		SBIT( DDRH, 0 )
#define	DDR_H1		SBIT( DDRH, 1 )
#define	DDR_H2		SBIT( DDRH, 2 )
#define	DDR_H3		SBIT( DDRH, 3 )
#define	DDR_H4		SBIT( DDRH, 4 )
#define	DDR_H5		SBIT( DDRH, 5 )
#define	DDR_H6		SBIT( DDRH, 6 )
#define	DDR_H7		SBIT( DDRH, 7 )

#define	PIN_H0		SBIT( PINH, 0 )
#define	PIN_H1		SBIT( PINH, 1 )
#define	PIN_H2		SBIT( PINH, 2 )
#define	PIN_H3		SBIT( PINH, 3 )
#define	PIN_H4		SBIT( PINH, 4 )
#define	PIN_H5		SBIT( PINH, 5 )
#define	PIN_H6		SBIT( PINH, 6 )
#define	PIN_H7		SBIT( PINH, 7 )

#endif

#ifdef PORTJ

#define	PORT_J0		SBIT( PORTJ, 0 )
#define	PORT_J1		SBIT( PORTJ, 1 )
#define	PORT_J2		SBIT( PORTJ, 2 )
#define	PORT_J3		SBIT( PORTJ, 3 )
#define	PORT_J4		SBIT( PORTJ, 4 )
#define	PORT_J5		SBIT( PORTJ, 5 )
#define	PORT_J6		SBIT( PORTJ, 6 )
#define	PORT_J7		SBIT( PORTJ, 7 )

#define	DDR_J0		SBIT( DDRJ, 0 )
#define	DDR_J1		SBIT( DDRJ, 1 )
#define	DDR_J2		SBIT( DDRJ, 2 )
#define	DDR_J3		SBIT( DDRJ, 3 )
#define	DDR_J4		SBIT( DDRJ, 4 )
#define	DDR_J5		SBIT( DDRJ, 5 )
#define	DDR_J6		SBIT( DDRJ, 6 )
#define	DDR_J7		SBIT( DDRJ, 7 )

#define	PIN_J0		SBIT( PINJ, 0 )
#define	PIN_J1		SBIT( PINJ, 1 )
#define	PIN_J2		SBIT( PINJ, 2 )
#define	PIN_J3		SBIT( PINJ, 3 )
#define	PIN_J4		SBIT( PINJ, 4 )
#define	PIN_J5		SBIT( PINJ, 5 )
#define	PIN_J6		SBIT( PINJ, 6 )
#define	PIN_J7		SBIT( PINJ, 7 )

#endif

#ifdef PORTK

#define	PORT_K0		SBIT( PORTK, 0 )
#define	PORT_K1		SBIT( PORTK, 1 )
#define	PORT_K2		SBIT( PORTK, 2 )
#define	PORT_K3		SBIT( PORTK, 3 )
#define	PORT_K4		SBIT( PORTK, 4 )
#define	PORT_K5		SBIT( PORTK, 5 )
#define	PORT_K6		SBIT( PORTK, 6 )
#define	PORT_K7		SBIT( PORTK, 7 )

#define	DDR_K0		SBIT( DDRK, 0 )
#define	DDR_K1		SBIT( DDRK, 1 )
#define	DDR_K2		SBIT( DDRK, 2 )
#define	DDR_K3		SBIT( DDRK, 3 )
#define	DDR_K4		SBIT( DDRK, 4 )
#define	DDR_K5		SBIT( DDRK, 5 )
#define	DDR_K6		SBIT( DDRK, 6 )
#define	DDR_K7		SBIT( DDRK, 7 )

#define	PIN_K0		SBIT( PINK, 0 )
#define	PIN_K1		SBIT( PINK, 1 )
#define	PIN_K2		SBIT( PINK, 2 )
#define	PIN_K3		SBIT( PINK, 3 )
#define	PIN_K4		SBIT( PINK, 4 )
#define	PIN_K5		SBIT( PINK, 5 )
#define	PIN_K6		SBIT( PINK, 6 )
#define	PIN_K7		SBIT( PINK, 7 )

#endif

#ifdef PORTL

#define	PORT_L0		SBIT( PORTL, 0 )
#define	PORT_L1		SBIT( PORTL, 1 )
#define	PORT_L2		SBIT( PORTL, 2 )
#define	PORT_L3		SBIT( PORTL, 3 )
#define	PORT_L4		SBIT( PORTL, 4 )
#define	PORT_L5		SBIT( PORTL, 5 )
#define	PORT_L6		SBIT( PORTL, 6 )
#define	PORT_L7		SBIT( PORTL, 7 )

#define	DDR_L0		SBIT( DDRL, 0 )
#define	DDR_L1		SBIT( DDRL, 1 )
#define	DDR_L2		SBIT( DDRL, 2 )
#define	DDR_L3		SBIT( DDRL, 3 )
#define	DDR_L4		SBIT( DDRL, 4 )
#define	DDR_L5		SBIT( DDRL, 5 )
#define	DDR_L6		SBIT( DDRL, 6 )
#define	DDR_L7		SBIT( DDRL, 7 )

#define	PIN_L0		SBIT( PINL, 0 )
#define	PIN_L1		SBIT( PINL, 1 )
#define	PIN_L2		SBIT( PINL, 2 )
#define	PIN_L3		SBIT( PINL, 3 )
#define	PIN_L4		SBIT( PINL, 4 )
#define	PIN_L5		SBIT( PINL, 5 )
#define	PIN_L6		SBIT( PINL, 6 )
#define	PIN_L7		SBIT( PINL, 7 )

#endif


#endif