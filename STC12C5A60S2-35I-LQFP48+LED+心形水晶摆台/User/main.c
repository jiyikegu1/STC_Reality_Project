
/**
1����λRST��
2��P3.0RXD��P3.1TXD���ڹ��ܣ�
3������ָʾ��ˮ�ƣ�
4��EX_LVD�����飻
5���ᴥ���ذ�����
6��������չ��ܣ�
7�����ֲ��������ܣ�֮ǰ���÷���������Ҫʵ�����ֹ����ѶȽϴ󣬸�Ϊ���ֲ�����оƬ��
**/

#include <74HC595D.h>
//#include <beep.h>	,�����÷���������Ϊ���ֲ�����
	
void main(void)
{
	//InitialSound();
	Hc595SendByte_all_LOW();//ȫ��
	while(1)
	{
		Hc595SendByte_flicker();//led��˸
		//Beep();
	}
}
