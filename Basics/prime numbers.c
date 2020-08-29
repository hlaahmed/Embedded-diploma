#include<stdio.h>
int main()
{
	int flag = 1; // flag initially set to 1
	for(int j = 2; j<100 ; j++)
	{
	    flag = 1; // reset flag
		for(int i= 2; i < j ; i++)	// prime number is only divisible by 1 and itself
			{
				if(j%i == 0)
				{
					flag = 0; // flag set to zero to indicate not prime
				}	
			}
		if(flag)
			printf("%d,",j);
	}
}
