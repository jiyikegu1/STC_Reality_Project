
#include <74HC595D.h>
#include <beep.h>	
	
void main(void)
{
	InitialSound();
	Hc595SendByte_all_LOW();//ȫ��
	while(1)
	{
		Hc595SendByte_flicker();//led��˸
		Beep();
	}
}
