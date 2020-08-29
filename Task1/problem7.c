#include<stdio.h>
int perfectsquare(int num1);//function that returns 1 if the number is a perfect square, and 0 otherwise
int main()
{
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
    if(perfectsquare(num1))
	{
		printf("the entered number is a perfect square");
	}
	else
	{
		printf("the entered number is Not a perfect square");
	}
	return 0;
}
int perfectsquare(int num1)
{
	for(int i= 1; i < num1/2 ; i++)	
	{
		if(i*i == num1)
		{		
			return 1;
		}	
	}
	return 0;
	
}
 
 
