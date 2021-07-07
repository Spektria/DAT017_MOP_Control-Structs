
#ifndef GPIO_H
#define GPIO_H

typedef unsigned int ui32;
typedef unsigned short ui16;
typedef unsigned char ui8;

typedef volatile struct 
{
	ui32 MODER;
	ui16 OTYPER;
	ui16 unused1;
	ui32 OSPEEDR;
	ui32 PUPDR;
	
	union
	{
		ui16 IDR;
		struct
		{
			ui8 IDR_LOW;
			ui8 IDR_HIGH;
		};
	};
	ui16 unused2;
	union
	{
		ui16 ODR;
		struct 
		{
			ui8 ODR_LOW;
			ui8 ODR_HIGH;
		};
	};
	ui16 unused3;
	ui32 BSRR;
	ui32 LCKR;
	ui32 AFRL;
	ui32 AFRH;
} GPIO;


#define GPIO_D (*(GPIO*) (0x40020C00))
#define GPIO_E (*(GPIO*) (0x40021000))

#endif