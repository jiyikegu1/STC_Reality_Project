#ifndef _BEEP_H_
#define _BEEP_H_

#include <reg51.h>

//对数据类型进行声明定义
//typedef unsigned int u16;
//typedef unsigned char u8;
	
sbit beep = P3^7;
	
void Beep();

#endif
