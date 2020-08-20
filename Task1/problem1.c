#include<stdio.h>
float calculate(int num1,int num2);
int main()
{
	int num1,num2;
	printf("Enter first number\n");
	scanf("%d",&num1);
	printf("Enter second number\n");
	scanf("%d",&num2);
	printf("The result of the calculation is %f",calculate(num1,num2));
	
	return 0;
}
float calculate(int num1,int num2)
{
	float Result = ((num1 + num2)*3)/2.0 - 10;
	return Result;
}