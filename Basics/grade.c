#include<stdio.h>
int Grade(int num1);
int main()
{
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
	Grade(num1);
	return 0;
}
int Grade(int num1)
{
	if(num1 >= 85)
	{
		printf("Excellent");
		return 0;
	}
	if(num1 >= 75)
	{
		printf("very Good");
		return 0;
	}
	if(num1 >= 65)
	{
		printf("Good");
		return 0;
	}
	if(num1 >= 50)
	{
		printf("pass");
		return 0;
	}
	printf("fail");
	return 0;
}
 
 
