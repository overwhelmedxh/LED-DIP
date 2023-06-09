#include "stm32f4xx.h"
#include "delay.h"//延时函数所在的头文件

#include "DIP.h"
#include "led.h"
	


int main(void)
{ 
	LED_Init();		       //初始化LED端口
	DIP_Init();
	delay_init(168);     //初始化延时函数

	while(1)
	{
		/*流水灯显示*/
		LED0=DIP0;
		LED1=DIP1;
		LED2=DIP2;
		LED3=DIP3;
		LED4=DIP4;
		LED5=DIP5;
		LED6=DIP6;
		LED7=DIP7;
 	}
}

