
#ifndef USART_H
#define USART_H

typedef unsigned short ui16;
typedef volatile struct tag_usart
{
	union 
	{
		ui16 sr;			// Status register
		struct
		{
			ui16 
				PE:1, FE:1, NF:1, ORE:1,
				IDLE:1, RXNE:1, TC:1, TXE:1,
				LDE:1, CTS:1, unused:6;
		}
	};
	ui16 Unused0;
	ui16 dr;			// Data register
	ui16 Unused1;
	ui16 brr;		// Brautrate register
	ui16 Unused2;
	union 
	{
		ui16 cr1;		// Control register 1...
		struct
		{
			ui16
				SBK:1, RWU:1, RE:1, TE:1, IDLEIE:1,
				RXNEIE:1, TCIE:1, TXEIE:1, PEIE:1,
				PS:1, PCE:1, WAKE:1, M:1, UE:1,
				RES:1, OVER8:1;
		}
	};
	ui16 Unused3;
	ui16 cr2;
	ui16 Unused4;
	ui16 cr3;
	ui16 Unused5;
	ui16 gtpr;		// Guard time and prescaler register
} USART;

#define USART_1		(*((USART* ) (0x40011000)))
#define USART_2 	(*((USART* ) (0x40004400)))

#endif