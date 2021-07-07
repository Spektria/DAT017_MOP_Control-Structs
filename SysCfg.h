

#ifndef SYSCFG_H
#define SYSCFG_H

typedef unsigned int ui32;
typedef unsigned short ui16;

typedef volatile struct 
{
	ui32 MEMRMP;
	ui32 PMC;
	ui16 EXTICR1;
	ui16 unused1;
	ui16 EXTICR2;
	ui16 unused2;
	ui16 EXTICR3;
	ui16 unused3;
	ui16 EXTICR4;
	ui16 unused4;
	ui32 CMPCR;
} SYSCFG;

#define SysCfg (*((SYSCFG*) 0x40013800))

#endif