#include<stdio.h>
void equality(int num1,int num2);// function that prints whether the entered numbers are equal or not
void biggest(int num1,int num2);// function that prints the biggest number of the two entered numbers
int main()
{
	int num1,num2;
	printf("Enter first number\n");
	scanf("%d",&num1);
	printf("Enter second number\n");
	scanf("%d",&num2);
    equality(num1,num2); 
	return 0;
}
void equality(int num1,int num2)
{
	if(num1 == num2)
	{
		printf("the two entered numbers are equal");
	}
	else
	{
		printf("the two entered numbers are Not equal\n");// in this case we want to know the biggest number so we call biggest
		biggest(num1,num2);
	}	
}
 
void biggest(int num1,int num2)
{
	if(num1>num2)
	{
		printf("the biggest number is %d",num1);
	}
	else
	{
		printf("the biggest number is %d",num2);
	}
}
