#include<stdio.h>
void print_first_shape();
void print_second_shape();
int main()
{
  	print_first_shape();
	print_second_shape();
		
}
void print_first_shape()
{
	int space = 4;
	int astrict = 1;
	for(int i = 1 ;i<=5;i++)
	{
		for(int j = space ; j > 0 ;j--)
		{
			printf(" ");
		}
		for(int k = 1; k<= astrict ;k++)
		{
			printf("*");
		}
		for(int j = space ; j > 0 ;j--)
		{
			printf(" ");
		}
	    space --;
		astrict += 2;
		printf("\n");
	}
	for(int i =1 ; i<=3 ;i++)
	{
		int space2 = 3;
		int astrict =3;
		for(int j = 1;j<= astrict ;j++)
		{
			printf("*");
		}
		for(int j = 1;j<= space2;j++)
		{
			printf(" ");
		}
		for(int j = 1;j<= astrict;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void print_second_shape()
{
	int space1 = 3;
	int space2 = 2;
	int astrict = 7;
	for(int i = 1 ;i<=5;i++)
	{
		for(int j = space2 ; j > 0 ;j--)
		{
			printf(" ");
		}
		for(int k = 1; k<= astrict ;k++)
		{
			printf("*");
		}
		for(int j = space1 ; j > 0 ;j--)
		{
			printf(" ");
		}
		for(int k = 1; k<= astrict ;k++)
		{
			printf("*");
		}
	    space1 -= 2;
		space2--;
		if(astrict != 11)
			astrict += 2;
		printf("\n");
	}
	space1 = 1;
	astrict = 21;
	for(int i = 1;i<=11;i++)
	{
		for(int j = space1 ; j > 0 ;j--)
		{
			printf(" ");
		}
		for(int k = 1; k<= astrict ;k++)
		{
			printf("*");
		}
		space1++;
		astrict-= 2;
		printf("\n");
	}
}
