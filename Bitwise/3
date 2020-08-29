#include<stdio.h>
int main()
{
	unsigned short x = 0b00101011 ;
	unsigned short n = 8;
	unsigned short y,z;
	for(int i = 0;i< n/2;i++)
	{
		 y = (x >> 7-i) & 1 ;
		 z = (x >> i) & 1 ;
	    char flag;
		if(y != z)
		{
			if(y == 0)
			{
				flag = 1;
			}
			else
			{
				flag = 2;
			}
		}
		else 
			flag = 0;
		switch(flag)
		{
			case 1:
			{
				x = x | 1<<(7-i);// set bit y
				x = x & ~(1<<i); // clear bit z
				break;
			}
			case 2:
			{
				x = x | 1<<i; // set bit z
				x = x & ~(1<<(7-i)); // clear bit y
				break;
			}
			default:
			{
				// do nothing
			}
		}
			
	}
	printf("new value is 0x%x",x);
    
}
