#include<stdio.h>
typedef unsigned char unint8;
typedef unsigned short unint16;
unint16 findmax(unint16 array[],unint8 size); // find max element in an array
int main()
{
	unint16 array[] = {8,9,1,5,10};
	unint8 size = sizeof(array)/sizeof(unint16);
	unint16 *point = &(array[0]);
	printf("max number is, %d",findmax(point,size));
}
unint16 findmax(unint16* point,unint8 size)
{
	unint16 max,temp;
	max = point[0];
	for(int i=0;i<size;i++)
	{
		if(point[i]>max)
		{
			temp  = max;
			max = point[i];
			point[i] = temp;
		}
	}
	return max;
}
