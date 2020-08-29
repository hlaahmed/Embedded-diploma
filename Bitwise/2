#include<stdio.h>
int main()
{
	unsigned int x = 0x12345678;
	unsigned short n = 4;	
	x = ((x & 0xff)<<8*(n-1)) |
	    ((x & (0xff<<8))<<8*(n-3)) |
		((x & (0xff<<16))>>8*(n-3)) |
		((x & (0xff<<24))>>8*(n-1));
	printf("new value is 0x%x",x);
}
