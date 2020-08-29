#include<stdio.h>
int factorial(int num1);//function that returns factorial of num1
int main()
{
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
    printf("the factorial for the entered number is %d",factorial(num1));
	return 0;
}
int factorial(int num1)
{
	int factorial = 1;
	if(num1 == 0 || num1 == 1)
	{
		return 1;
	}
	else
	{
		while(num1 != 1)
		{
			factorial = num1*factorial;
			num1--;
		}
		return factorial;
	}
	
}
 
