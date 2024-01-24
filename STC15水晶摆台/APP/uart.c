
#include "uart.h"

/*
1、主频11.0592；
2、串口2波特率9600；
*/
																								
/* 
串口2用于语音芯片BY9301-24QS通信，模式0和模式1为异步通信，一位起始位和一位停止位，8位，奇偶位：无
程序目前功能：串口2向BY9301-24QS语音芯片发送0x0a（通讯数据格式是：起始位：1位； 
数据位： 8位；奇偶位：无； 停止位：1位。）
*/

#define FOSC 11059200L			  //MUC主频为11.0592下
#define BAUD 9600				  //串口2产生的波特率为9600
#define TM  (65536-(FOSC/4/BAUD)) //计算初值

#define S2RI  0X01				  //接收标志位
#define S2TI  0X02				  //发送标志位

/*
1、修改0X0A为m，例如发送0x0a，ISP_Check(0x0a);
*/

void ISP_Check(unsigned int m)					//串口2发送数据调用函数
{
  S2BUF=m;						//发送0x0a
  while(S2CON&S2TI==0);	//等特数据传送	(S2TI发送中断标志)
  S2CON&=~S2TI;					//清标志位   
}


void uart2_init()
{
	//串口2配置
	S2CON = 0x50;       //REN=1允许串行接受状态，串口工作模式2     	       
  T2L=TM;			       //配置串口2波特率	 初始值
  T2H=TM>>8;                    
  AUXR=0X14;		  //开启定时器T2  并且开启1T模式
  IE2=0X01;       //串口2中断使能                                                           
  EA   = 1;      // 开总中断
}

void Uart2()  interrupt 8 using 1		//串口2中断
{
  if(S2CON&S2RI)						//如果收到数据 S2RI置位
  {
   S2BUF=0X0A;							//此处需要修改
   S2CON&=~S2RI;						//清标志位  
  }
}
