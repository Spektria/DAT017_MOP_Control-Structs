


#ifndef EXTI_H
#define EXTI_H

typedef unsigned int ui32;
typedef volatile struct 
{
	ui32 IMR;
	ui32 EMR;
	ui32 RTSR;
	ui32 FTSR;
	ui32 SWIER;
	ui32 PR;
} EXTI_s;

#define EXTI (*((EXTI_s*) 0x40013C00))

#endif