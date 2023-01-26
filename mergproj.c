#include<reg51.h>
sbit red1=P1^0;
sbit yellow1=P1^1;
sbit green1=P1^2;
sbit red2=P1^3;
sbit yellow2=P1^4;
sbit green2=P1^5;
sbit red3=P1^6;
sbit yellow3=P1^7;
sbit green3=P3^2;
//void delay1();
//void delay2();
void ssd_delay(int y);
void main()
{
red1=yellow1=green1=0;
red2=yellow2=green2=0;
red3=yellow3=green3=0;
while(3)
{		
green1=1;
red2=1;
red3=1;	
	ssd_delay(9);
	red2=0;
	yellow2=1;
	ssd_delay(5);
	green1=0;
	yellow2=0;
	green2=1;
	red1=1;
	ssd_delay(9);
	yellow3=1;
	red3=0;
	ssd_delay(5);
	green2=0;
	yellow3=0;
	green3=1;
	red2=1;
	ssd_delay(9);
	yellow1=1;
	red1=0;
	ssd_delay(5);
	yellow1=0;
	green3=0;
}
}
void ssd_delay(int y)
{
unsigned char
seg [10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned char x;
unsigned int i;
P2=0x00;
for (x=0;x<y;x++)
	{
	P2=seg[x];
	for(i=0;i<40000;i++);
	}
}

