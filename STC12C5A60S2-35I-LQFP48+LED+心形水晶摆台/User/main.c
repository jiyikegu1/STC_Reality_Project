
#include <74HC595D.h>

	
void main(void)
{
	Hc595SendByte_all_LOW();
	while(1)
	{
		Hc595SendByte_flicker();
	}
}
