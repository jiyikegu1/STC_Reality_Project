
#include <intrins.h>
#include <74HC595D.h>
#include <delay_ms.h>



void Hc595SendByte2(u8 dat)
{
	u8 a;
	SCK2=0;
	RCK2=0;
	for(a=0;a<8;a++)
	{
		SER2=dat>>7;
		dat<<=1;
		
		SCK2=1;
		_nop_();
		_nop_();
		SCK2=0;
	}
		RCK2=1;
		_nop_();
		_nop_();
		RCK2=0;
}

void Hc595SendByte3(u8 dat)
{
	u8 a;
	SCK3=0;
	RCK3=0;
	for(a=0;a<8;a++)
	{
		SER3=dat>>7;
		dat<<=1;
		
		SCK3=1;
		_nop_();
		_nop_();
		SCK3=0;
	}
		RCK3=1;
		_nop_();
		_nop_();
		RCK3=0;
}

void Hc595SendByte4(u8 dat)
{
	u8 a;
	SCK4=0;
	RCK4=0;
	for(a=0;a<8;a++)
	{
		SER4=dat>>7;
		dat<<=1;
		
		SCK4=1;
		_nop_();
		_nop_();
		SCK4=0;
	}
		RCK4=1;
		_nop_();
		_nop_();
		RCK4=0;
}

void Hc595SendByte5(u8 dat)
{
	u8 a;
	SCK5=0;
	RCK5=0;
	for(a=0;a<8;a++)
	{
		SER5=dat>>7;
		dat<<=1;
		
		SCK5=1;
		_nop_();
		_nop_();
		SCK5=0;
	}
		RCK5=1;
		_nop_();
		_nop_();
		RCK5=0;
}

void Hc595SendByte6(u8 dat)
{
	u8 a;
	SCK6=0;
	RCK6=0;
	for(a=0;a<8;a++)
	{
		SER6=dat>>7;
		dat<<=1;
		
		SCK6=1;
		_nop_();
		_nop_();
		SCK6=0;
	}
		RCK6=1;
		_nop_();
		_nop_();
		RCK6=0;
}

void Hc595SendByte7(u8 dat)
{
	u8 a;
	SCK7=0;
	RCK7=0;
	for(a=0;a<8;a++)
	{
		SER7=dat>>7;
		dat<<=1;
		
		SCK7=1;
		_nop_();
		_nop_();
		SCK7=0;
	}
		RCK7=1;
		_nop_();
		_nop_();
		RCK7=0;
}

void Hc595SendByte8(u8 dat)
{
	u8 a;
	SCK8=0;
	RCK8=0;
	for(a=0;a<8;a++)
	{
		SER8=dat>>7;
		dat<<=1;
		
		SCK8=1;
		_nop_();
		_nop_();
		SCK8=0;
	}
		RCK8=1;
		_nop_();
		_nop_();
		RCK8=0;
}

void Hc595SendByte9(u8 dat)
{
	u8 a;
	SCK9=0;
	RCK9=0;
	for(a=0;a<8;a++)
	{
		SER9=dat>>7;
		dat<<=1;
		
		SCK9=1;
		_nop_();
		_nop_();
		SCK9=0;
	}
		RCK9=1;
		_nop_();
		_nop_();
		RCK9=0;
}

void Hc595SendByte10(u8 dat)
{
	u8 a;//放在P4SW |= (1<<6)下，编译不通过
	P4SW |= (1<<4);//放在头文件中编译不通过
  P4SW |= (1<<5);
  //P4SW |= (1<<6);		//P4.6允许设置成IO
	SCK10=0;
	RCK10=0;
	for(a=0;a<8;a++)
	{
		SER10=dat>>7;
		dat<<=1;
		
		SCK10=1;
		_nop_();
		_nop_();
		SCK10=0;
	}
		RCK10=1;
		_nop_();
		_nop_();
		RCK10=0;
}


void Hc595SendByte_all_LOW()//全亮
{
	Hc595SendByte2(0x00);//低电平 01 led1；02 led2；03 led1，led2；04 led3；05 led1，led3；06 led2，led3；
	                   //07 led1，led2，led3；08 led4；09 led1,led4；0A led2,led4；0B led1,led2,led4；
	                   //0C led3,led4；0D led1,led3,led4；0E led2,led3,led4；0F led1,led2,led3,led4；
	                   //FF全灭,00全亮
	Hc595SendByte3(0x00);
	Hc595SendByte4(0x00);
	Hc595SendByte5(0x00);
	Hc595SendByte6(0x00);
	Hc595SendByte7(0x00);
	Hc595SendByte8(0x00);
	Hc595SendByte9(0x00);
	Hc595SendByte10(0x00);
}

void Hc595SendByte_flicker()//led闪烁
{
	    Hc595SendByte2(0xFF);//FF全灭
	    Hc595SendByte3(0xFF);//FF全灭
	    Hc595SendByte4(0xFF);//FF全灭
	    Hc595SendByte5(0xFF);//FF全灭
	    Hc595SendByte6(0xFF);//FF全灭
	    Hc595SendByte7(0xFF);//FF全灭
	    Hc595SendByte8(0xFF);//FF全灭
	    Hc595SendByte9(0xFF);//FF全灭
	    Hc595SendByte10(0xFF);//FF全灭		
	
	    Hc595SendByte2(0xFE);//led1
		  Delay_ms(30);
		  Hc595SendByte2(0xFD);//led2
		  Delay_ms(30);
		  Hc595SendByte2(0xFB);//led3
		  Delay_ms(30);
		  Hc595SendByte2(0xF7);//led4
		  Delay_ms(30);
		  Hc595SendByte2(0xEF);//led5
		  Delay_ms(30);
		  Hc595SendByte2(0xDF);//led6
		  Delay_ms(30);
		  Hc595SendByte2(0xBF);//led7
		  Delay_ms(30);
		  Hc595SendByte2(0x7F);//led8
		  Delay_ms(30);
	    Hc595SendByte2(0xFF);//FF全灭
	
	    Hc595SendByte3(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte3(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte3(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte3(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte3(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte3(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte3(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte3(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte3(0xFF);//FF全灭
			
			Hc595SendByte4(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte4(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte4(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte4(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte4(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte4(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte4(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte4(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte4(0xFF);//FF全灭
			
			Hc595SendByte5(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte5(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte5(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte5(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte5(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte5(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte5(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte5(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte5(0xFF);//FF全灭
			
			Hc595SendByte6(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte6(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte6(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte6(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte6(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte6(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte6(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte6(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte6(0xFF);//FF全灭
			
			Hc595SendByte7(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte7(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte7(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte7(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte7(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte7(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte7(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte7(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte7(0xFF);//FF全灭
			
			Hc595SendByte8(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte8(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte8(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte8(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte8(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte8(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte8(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte8(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte8(0xFF);//FF全灭
			
			Hc595SendByte9(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte9(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte9(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte9(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte9(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte9(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte9(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte9(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte9(0xFF);//FF全灭
			
			Hc595SendByte10(0xFE);//led9
		  Delay_ms(30);
		  Hc595SendByte10(0xFD);//led10
		  Delay_ms(30);
		  Hc595SendByte10(0xFB);//led11
		  Delay_ms(30);
		  Hc595SendByte10(0xF7);//led12
		  Delay_ms(30);
		  Hc595SendByte10(0xEF);//led13
		  Delay_ms(30);
		  Hc595SendByte10(0xDF);//led14
		  Delay_ms(30);
		  Hc595SendByte10(0xBF);//led15
		  Delay_ms(30);
		  Hc595SendByte10(0x7F);//led16
		  Delay_ms(30);
			Hc595SendByte10(0xFF);//FF全灭
}
