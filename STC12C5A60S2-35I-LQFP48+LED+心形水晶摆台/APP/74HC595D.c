
//#include <reg51.h>
#include<intrins.h>
#include <74HC595D.h>


//对数据类型进行声明定义
//typedef unsigned int u16;
//typedef unsigned char u8;

void Hc595SendByte(u8 dat)
{
	u8 a;
	SCK=0;
	RCK=0;
	for(a=0;a<8;a++)
	{
		SER=dat>>7;
		dat<<=1;
		
		SCK=1;
		_nop_();
		_nop_();
		SCK=0;
	}
		SCK=1;
		_nop_();
		_nop_();
		SCK=0;
}
