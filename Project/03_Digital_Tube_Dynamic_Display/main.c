#include "tube.h"

void main()
{
	uchar i;
	System_Init();
	while(1)
	{
		for(i=0; i<8; i++)
		{
			tube_show(i, segment[i]);
		}
	}
}