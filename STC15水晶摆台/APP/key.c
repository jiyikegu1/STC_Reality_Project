
#include "key.h"

sbit key1=P3^4;
sbit key2=P3^2;
sbit key3=P3^6;
sbit key4=P3^5;

void key1_run()
{
if(key1==0)
	  {
	   delayms(30);
	   if(key1==0)
	    {
		  LED0=1;
		 }	  
	  }
	  else
	  {
	     LED0=0;}
}

void key2_run()
{
if(key2==0)
	  {
	   delayms(30);
	   if(key2==0)
	    {
		  LED0=1;
		 }	  
	  }
	  else
	  {
	     LED0=0;}
}

void key3_run()
{
if(key3==0)
	  {
	   delayms(30);
	   if(key3==0)
	    {
		  LED0=1;
		 }	  
	  }
	  else
	  {
	     LED0=0;}
}

void key4_run()
{
if(key4==0)
	  {
	   delayms(30);
	   if(key4==0)
	    {
		  LED0=1;
		 }	  
	  }
	  else
	  {
	     LED0=0;}
}