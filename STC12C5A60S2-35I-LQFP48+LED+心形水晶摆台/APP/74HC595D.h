#ifndef _74HC595D_H_
#define _74HC595D_H_

#include "STC12C5A60S2.h"
#include <delay_ms.h>

//对数据类型进行声明定义
//typedef unsigned int u16;
typedef unsigned char u8;
//第一组U2
sbit SCK2 = P0^2;//移位寄存器时钟，上升沿移位
sbit RCK2 = P0^1;//锁存寄存器时钟，高电平存储
sbit SER2 = P0^0;//串行数据输入端
void Hc595SendByte2(u8 dat);

//第二组U3
sbit SCK3 = P0^5;//移位寄存器时钟，上升沿移位
sbit RCK3 = P0^4;//锁存寄存器时钟，高电平存储
sbit SER3 = P0^3;//串行数据输入端
void Hc595SendByte3(u8 dat);

//第二组U4
sbit SCK4 = P1^0;//移位寄存器时钟，上升沿移位
sbit RCK4 = P0^7;//锁存寄存器时钟，高电平存储
sbit SER4 = P0^6;//串行数据输入端
void Hc595SendByte4(u8 dat);

//第二组U5
sbit SCK5 = P1^3;//移位寄存器时钟，上升沿移位
sbit RCK5 = P1^2;//锁存寄存器时钟，高电平存储
sbit SER5 = P1^1;//串行数据输入端
void Hc595SendByte5(u8 dat);

//第二组U6
sbit SCK6 = P1^6;//移位寄存器时钟，上升沿移位
sbit RCK6 = P1^5;//锁存寄存器时钟，高电平存储
sbit SER6 = P1^4;//串行数据输入端
void Hc595SendByte6(u8 dat);

//第二组U7
sbit SCK7 = P2^2;//移位寄存器时钟，上升沿移位
sbit RCK7 = P2^1;//锁存寄存器时钟，高电平存储
sbit SER7 = P2^0;//串行数据输入端
void Hc595SendByte7(u8 dat);

//第二组U8
sbit SCK8 = P2^5;//移位寄存器时钟，上升沿移位
sbit RCK8 = P2^4;//锁存寄存器时钟，高电平存储
sbit SER8 = P2^3;//串行数据输入端
void Hc595SendByte8(u8 dat);
//第二组U9
sbit SCK9 = P4^3;//移位寄存器时钟，上升沿移位
sbit RCK9 = P2^7;//锁存寄存器时钟，高电平存储
sbit SER9 = P2^6;//串行数据输入端
void Hc595SendByte9(u8 dat);

//第二组U10
sbit SCK10 = P5^0;//移位寄存器时钟，上升沿移位
sbit RCK10 = P4^5;//锁存寄存器时钟，高电平存储
sbit SER10 = P4^4;//串行数据输入端
void Hc595SendByte10(u8 dat);

void Hc595SendByte_all_LOW();
void Hc595SendByte_flicker();

#endif
