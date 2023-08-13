
#include <reg51.h>
#include <delay_ms.h>

void Delay1ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 16;
	j = 147;
	do
	{
		while (--j);
	} while (--i);
}

void Delay_ms(u16 n)
{
	typedef unsigned int u16;
	u16 i;
	for(i=1;i<=n;i++)
	{
		Delay1ms();
	}

}