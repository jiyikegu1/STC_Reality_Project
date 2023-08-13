
//#include <reg51.h>
#include <74HC595D.h>
//#include <delay_ms.h>

//对数据类型进行声明定义
//typedef unsigned int u16;
//typedef unsigned char u8;
	
void main(void)
{
	
	
	Hc595SendByte(0x01);
	//P0=0x7f;
	while(1);
//	{
//		Hc595SendByte(0x08);
//		Delay_ms(3);
//		Hc595SendByte(0x02);
//		Delay_ms(3);
//	}
}
