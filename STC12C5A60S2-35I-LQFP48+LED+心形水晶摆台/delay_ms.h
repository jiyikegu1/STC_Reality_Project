#ifndef _DELAY_MS_H_
#define _DELAY_MS_H_

#include <reg51.h>

//对数据类型进行声明定义
typedef unsigned int u16;
//typedef unsigned char u8;
	
void Delay1ms();
void Delay_ms(u16 n);

#endif
