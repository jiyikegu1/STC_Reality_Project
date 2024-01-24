
#ifndef _LED_H_
#define _LED_H_

#include "stc15f2k60s2.h"

sbit  LED0=P7^0;//定义LED0指示灯为单片机指示灯
void key1_run();
void key2_run();
void key3_run();
void key4_run();

#endif