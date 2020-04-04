#include "button.h"

// 功能：将矩阵按键的数值显示到数码管上
void main()
{
	System_Init();
	while(1)
	{
		Matrix_Key();
		Delay2ms();
	}
}
