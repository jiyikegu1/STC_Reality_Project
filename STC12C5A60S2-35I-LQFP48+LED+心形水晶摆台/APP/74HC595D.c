
#include <intrins.h>
#include <74HC595D.h>
#include <delay_ms.h>

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
		RCK=1;
		_nop_();
		_nop_();
		RCK=0;
}

void Hc595SendByte_all_LOW()//
{
	Hc595SendByte(0x00);//µÍµçÆ½ 01 led1£»02 led2£»03 led1£¬led2£»04 led3£»05 led1£¬led3£»06 led2£¬led3£»
	                   //07 led1£¬led2£¬led3£»08 led4£»09 led1,led4£»0A led2,led4£»0B led1,led2,led4£»
	                   //0C led3,led4£»0D led1,led3,led4£»0E led2,led3,led4£»0F led1,led2,led3,led4£»
}

void Hc595SendByte_flicker()//ledÉÁË¸
{
	  Hc595SendByte(0x01);//led1
		Delay_ms(300);
		Hc595SendByte(0x02);//led2
		Delay_ms(300);
		Hc595SendByte(0x04);//led3
		Delay_ms(300);
		Hc595SendByte(0x08);//led4
		Delay_ms(300);
		Hc595SendByte(0x1F);//led5
		Delay_ms(300);
		Hc595SendByte(0x2F);//led6
		Delay_ms(300);
		Hc595SendByte(0x4F);//led7
		Delay_ms(300);
		Hc595SendByte(0x8F);//led8
		Delay_ms(300);
}
