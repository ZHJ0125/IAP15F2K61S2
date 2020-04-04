#include "tube.h"

void Delay1000ms()		//@11.0592MHz
{
	unsigned char i, j, k;
	_nop_();
	_nop_();
	i = 43;
	j = 6;
	k = 203;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void System_Init()
{
	HC138_A = 1;
	HC138_B = 0;
	HC138_C = 1;
	WR = 0;		// Reset WR  -->  Set Y5C
	P0 = 0x00;
	HC138_A = 0;
	HC138_B = 0;
	HC138_C = 1;
	WR = 0;		// Reset WR  -->  Set Y4C
	P0 = 0xFF;
}
void tube_selection()
{
	// Reset Y6
	HC138_A = 0;
	HC138_B = 1;
	HC138_C = 1;
	WR = 0;		// Reset WR  -->  Set Y6C
	// Digital tube selection
	P0 = 0xFF;
}

void tube_segment()
{
	// Reset Y7
	HC138_A = 1;
	HC138_B = 1;
	HC138_C = 1;
	WR = 0;		// Reset WR  -->  Set Y7C
}