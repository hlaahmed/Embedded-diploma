#include<stdio.h>
int main()
{
 
	int a[10],n;
    char count1, count0;    
	printf("Enter the number: ");    
	scanf("%d",&n); 
	char bitNum =0;
	for(int i=0;n>0;i++)    
	{    
		a[i]=n%2;    
		n=n/2;   
        bitNum++;		
	}  
	for(int i=0;i<bitNum;i++)    
	{    
		if(a[i]==1)
			count1++;
		else
			count0++;
	}  
	printf("number of ones is %d \n",count1);
	printf("number of zeros is %d \n",count0);
    
}
