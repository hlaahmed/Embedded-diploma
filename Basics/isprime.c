#include<stdio.h>
int isprime(int num1);//function that returns 1 if the number is prime, and 0 otherwise
int main()
{
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
    if(isprime(num1))
	{
		printf("the entered number is a prime number");
	}
	else
	{
		printf("the entered number is Not a prime number");
	}
	return 0;
}
int isprime(int num1)
{
	if(num1 <= 1) // the smallest prime number is 2
	{
		return 0;
	}
	else
	{
		
		for(int i= 2; i < num1 ; i++)	// prime number is only divisible by 1 and itself
		{
			if(num1%i == 0)
			{
				return 0;
			}	
		}
		return 1;
	}
}
 
