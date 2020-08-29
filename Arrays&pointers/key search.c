#include<stdio.h>
typedef unsigned char unint8;
typedef unsigned short unint16;
int search(unint16* point,unint8 size,unint16 key); // search for key in an array
int main()
{
	unint16 array[] = {8,9,1,5,10};
	unint8 size = sizeof(array)/sizeof(unint16);
	unint16 *point = &(array);
	unint16 key;
	printf("enter key: ");
	scanf("%d",&key);
	int result = search(point,size,key);
	if(result == -1)
	{
		printf("not found");
	}
	else
	{
		printf("found at %d",result);
	}
}
int search(unint16* point,unint8 size,unint16 key)
{
	for(int i=0;i<size;i++)
	{
		if(point[i] == key)
		{
			return i;
		}
	}
	return -1;
}
	
