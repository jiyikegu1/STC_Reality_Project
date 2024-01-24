
#include "stc15f2k60s2.h"
#include "STC15_main.h"
#include "74HC595D.h"
#include "BY9301_24QS.h"
#include "key.h"
/**
1、主频11.0592；
2、串口波特率9600；，P0.0，P0.1修改为P7.6，P7.7

**/

/**
       ******实现功能******
1、复位RST,P5.4烧录程序时设置成复位管脚（当用作复位管脚时，由于STC8H内部已有4k上拉电阻，
   所以外部拉低可实现复位）；
2、P3.0RXD、P3.1TXD串口通信（程序烧写，已完成）;
   P5.0RXD3_2、P5.1TXD3_2串口通信（调试串口，待做）;
   P1.0RXD2、P1.1TXD2串口通信（语音通信，音乐播放器功能，需进一步核对程序和电路）；
3、心形指示流水灯（已完成）；
4、EX_LVD掉电检查，掉电检测；
5、轻触开关按键（轻触按键，当前程序不起作用）；
6、红外接收功能；
7、音乐播放器功能，之前采用蜂鸣器，但要实现音乐功能难度较大，
   改为音乐播放器芯片，现采用flash最大支持32M，可以试改为优盘；
**/

main()
{
  IO_init();				   //真对 IAP15W4K61S4  IO口初始化
	Hc595SendByte_all_LOW();//全亮
  uart2_init();
	BY9301_24QS_Track_playback1();
	BY9301_24QS_play();
  while(1)
  {
	//Hc595SendByte_flicker();//led闪烁
	key1_run();
	key2_run();
	key3_run();
	key4_run();
	LED0=1;

  }
}
