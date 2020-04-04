#include "tube.h"

uchar code tab[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0xff};
uchar code segment[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};

void Delay600us()		//@11.0592MHz
{
	unsigned char i, j;
	i = 7;
	j = 113;
	do
	{
		while (--j);
	} while (--i);
}


void System_Init()
{
	HC138_A = 1;
	HC138_B = 0;
	HC138_C = 1;
	WR = 0;
	P0 = 0x00;
	HC138_A = 0;
	HC138_B = 0;
	HC138_C = 1;
	WR = 0;
	P0 = 0xFF;
}

void tube_segment(uint number)
{
	uchar segment;
	segment = tab[number];
	HC138_A = 1;
	HC138_B = 1;
	HC138_C = 1;
	WR = 0;			// Y7C
	P0 = segment;
}

void tube_selection(uchar selection)
{
	HC138_A = 0;
	HC138_B = 1;
	HC138_C = 1;
	WR = 0;
	P0 = selection;
}

void tube_show(uint number, uchar segment)
{
	tube_selection(OFF_SELECTION);
	tube_segment(number);
	tube_selection(segment);
	Delay600us();
	tube_segment(OFF_SEGMENT);
}