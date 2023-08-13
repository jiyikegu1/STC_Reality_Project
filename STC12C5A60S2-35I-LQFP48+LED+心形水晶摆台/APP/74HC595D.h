#ifndef _74HC595D_H_
#define _74HC595D_H_

#include "reg51.h"
#include <delay_ms.h>

//���������ͽ�����������
//typedef unsigned int u16;
typedef unsigned char u8;

sbit SCK = P0^2;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK = P0^1;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER = P0^0;//�������������

void Hc595SendByte(u8 dat);
void Hc595SendByte_all_LOW();
void Hc595SendByte_flicker();

#endif
