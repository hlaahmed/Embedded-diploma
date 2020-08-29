#include<stdio.h>
void evenodd(int num1);//function that prints whether the entered number is even or odd
int main()
{
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
    evenodd(num1); 
	return 0;
}
void evenodd(int num1)
{
	if(num1%2 == 0)
	{
		printf("the entered number is even");
	}
	else
	{
		printf("the entered number is odd");
		
	}	
}
 
