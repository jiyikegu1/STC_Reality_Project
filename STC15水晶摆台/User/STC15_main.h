
#ifndef _STC15_MAIN_H_
#define _STC15_MAIN_H_

/*
��� IAP15W4K61S4   STC15W4K56S4 ϵ�� IO�ڳ�ʼ��
io�ڳ�ʼ�� P0 P1 P2 P3 P4 Ϊ׼˫��IO��   
ע��: STC15W4K32S4ϵ�е�оƬ,�ϵ��������PWM��ص�IO�ھ�Ϊ
      ����̬,�轫��Щ������Ϊ׼˫��ڻ�ǿ����ģʽ��������ʹ��
���IO: P0.6/P0.7/P1.6/P1.7/P2.1/P2.2
        P2.3/P2.7/P3.7/P4.2/P4.4/P4.5
*/
void IO_init(void)
{
  P0M0 = 0X00;
  P0M1 = 0X00;

  P1M0 = 0X00;
  P1M1 = 0X00;

  P2M0 = 0X00;
  P2M1 = 0X00;

  P3M0 = 0X00;
  P3M1 = 0X00;

  P4M0 = 0X00;
  P4M1 = 0X00;  
}

#endif