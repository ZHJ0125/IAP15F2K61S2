#include "tube.h"

//// Digital tube segment from 0 to 9
uchar code tab[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};

void main()
{
	uint i;
	System_Init();
	tube_selection();
	tube_segment();
	while(1)
	{
		// Digital tube segment selection
		for(i=0; i<9; i++)
		{
			P0 = tab[i];
			Delay1000ms();
		}
	}
}