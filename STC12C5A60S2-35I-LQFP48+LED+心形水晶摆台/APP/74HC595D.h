#ifndef _74HC595D_H_
#define _74HC595D_H_

#include "STC12C5A60S2.h"
#include <delay_ms.h>

//���������ͽ�����������
//typedef unsigned int u16;
typedef unsigned char u8;
//��һ��U2
sbit SCK2 = P0^2;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK2 = P0^1;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER2 = P0^0;//�������������
void Hc595SendByte2(u8 dat);

//�ڶ���U3
sbit SCK3 = P0^5;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK3 = P0^4;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER3 = P0^3;//�������������
void Hc595SendByte3(u8 dat);

//�ڶ���U4
sbit SCK4 = P1^0;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK4 = P0^7;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER4 = P0^6;//�������������
void Hc595SendByte4(u8 dat);

//�ڶ���U5
sbit SCK5 = P1^3;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK5 = P1^2;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER5 = P1^1;//�������������
void Hc595SendByte5(u8 dat);

//�ڶ���U6
sbit SCK6 = P1^6;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK6 = P1^5;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER6 = P1^4;//�������������
void Hc595SendByte6(u8 dat);

//�ڶ���U7
sbit SCK7 = P2^2;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK7 = P2^1;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER7 = P2^0;//�������������
void Hc595SendByte7(u8 dat);

//�ڶ���U8
sbit SCK8 = P2^5;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK8 = P2^4;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER8 = P2^3;//�������������
void Hc595SendByte8(u8 dat);
//�ڶ���U9
sbit SCK9 = P4^3;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK9 = P2^7;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER9 = P2^6;//�������������
void Hc595SendByte9(u8 dat);

//�ڶ���U10
sbit SCK10 = P5^0;//��λ�Ĵ���ʱ�ӣ���������λ
sbit RCK10 = P4^5;//����Ĵ���ʱ�ӣ��ߵ�ƽ�洢
sbit SER10 = P4^4;//�������������
void Hc595SendByte10(u8 dat);

void Hc595SendByte_all_LOW();
void Hc595SendByte_flicker();

#endif
