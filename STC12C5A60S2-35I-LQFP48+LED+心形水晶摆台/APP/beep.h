#ifndef _BEEP_H_
#define _BEEP_H_

#include <reg51.h>

//���������ͽ�����������
//typedef unsigned int u16;
//typedef unsigned char u8;
	
sbit beep = P3^7;
	
void Beep();

#endif
