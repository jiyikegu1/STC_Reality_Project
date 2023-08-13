#ifndef _74HC595D_H_
#define _74HC595D_H_

#include "reg51.h"
#include <delay_ms.h>

//对数据类型进行声明定义
//typedef unsigned int u16;
typedef unsigned char u8;

sbit SCK = P0^2;//移位寄存器时钟，上升沿移位
sbit RCK = P0^1;//锁存寄存器时钟，高电平存储
sbit SER = P0^0;//串行数据输入端

void Hc595SendByte(u8 dat);
void Hc595SendByte_all_LOW();
void Hc595SendByte_flicker();

#endif
