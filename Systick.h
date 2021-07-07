

#ifndef SYSTICK_H 
#define SYSTICK_H

typedef unsigned int ui32;
typedef volatile struct 
{
	union
	{
		ui32 STK_CTRL;
		struct 
		{
			ui32
				ENABLE:1, TICKINT:1, CLKSOURCE:1,
				unused1:13, COUNTFLAG:1, unused2:15;
		};
	};
	
	ui32 STK_LOAD;
	ui32 STK_VAL;
	ui32 STK_CALIB;
} SYSTICK;


#define SysTick (*((SYSTICK*) 0xE000E010))

#endif
