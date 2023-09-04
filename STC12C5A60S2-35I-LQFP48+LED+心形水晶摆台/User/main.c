
#include <74HC595D.h>
#include <beep.h>
	
void main(void)
{
	Hc595SendByte_all_LOW();
	while(1)
	{
		Hc595SendByte_flicker();
		Beep();
	}
}
