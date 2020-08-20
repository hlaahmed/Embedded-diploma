#include<stdio.h>
int power(int num1);//function that returns 1 if the number is power of two, and 0 otherwise
int main()
{
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
    if(power(num1))
	{
		printf("the entered number is a power of 2");
	}
	else
	{
		printf("the entered number is Not a power of 2");
	}
	return 0;
}
int power(int num1)
{
	for(int i= 1; i < num1 ; i++)	
	{
		if(i*i == num1)
		{		
			return 1;
		}	
	}
	return 0;
	
}
 
