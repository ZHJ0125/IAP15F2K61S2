#include "button.h"

// ���ܣ������󰴼�����ֵ��ʾ���������
void main()
{
	System_Init();
	while(1)
	{
		Matrix_Key();
		Delay2ms();
	}
}
