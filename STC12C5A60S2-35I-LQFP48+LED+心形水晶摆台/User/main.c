
/**
1、复位RST；
2、P3.0RXD、P3.1TXD串口功能；
3、心形指示流水灯；
4、EX_LVD掉电检查；
5、轻触开关按键；
6、红外接收功能；
7、音乐播放器功能，之前采用蜂鸣器，但要实现音乐功能难度较大，改为音乐播放器芯片；
**/

#include <74HC595D.h>
//#include <beep.h>	,不再用蜂鸣器，改为音乐播放器
	
void main(void)
{
	//InitialSound();
	Hc595SendByte_all_LOW();//全亮
	while(1)
	{
		Hc595SendByte_flicker();//led闪烁
		//Beep();
	}
}
