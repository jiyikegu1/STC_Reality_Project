
#include <beep.h>
#include <delay_ms.h>

void Beep()		
{
	Delay_ms(30);
	beep = 0;
	Delay_ms(30);
	beep = 1;
	Delay_ms(30);
	beep = 0;
	Delay_ms(30);
	beep = 1;
}
