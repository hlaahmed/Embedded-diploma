#include<stdio.h>
typedef unsigned char unint8;
typedef unsigned short unint16;
void sortasc(unint16 array[],unint8 size); // sort an array ascending
int main()
{
	unint16 array[] = {8,9,1,5,10};
	unint8 size = sizeof(array)/sizeof(unint16);
	unint16 *point = &(array[0]);
	sortasc(point,size);
    for(int i=0;i<size;i++)
	{
		printf("%d,",array[i]);
	}
}
void sortasc(unint16* point,unint8 size)
{
	unint16 min,temp;
	for(int start=0; start<size;start++)
	{
		min = point[start];
		 for(int i=start+1;i<size;i++)
		{
			if(point[i]<min)
			{
				temp  = min;
				min = point[i];
				point[i] = temp;
			}
		}
		point[start]= min;
	}
}
