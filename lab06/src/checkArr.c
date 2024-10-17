#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, int* argv[])
{
	double* array[]={10,2,15,18,2,3,6}, min, mean, max;
	int* n;

	arrLength=sizeof(array)/sizeof(array[0]);
	n=&arrLength;

	stats(array,n,min,mean,max);
}

int stats(double* array, int* n, double* min, double* mean, double* max)
{
	float average=0.0;
	int minimum=0, maximum=0;
	int size=*n;

	for(int i=0;i<*n;i++)
	{
		if(array[i]<minimum)
		{
			minimum=array[i]
		}
		if(array[i]>maximum)
		{
			maximum=array[i]
		}
		average+=array[i];
	}
	average/=size;
	mean=&average;
	min=&minimum;
	max=&maximum;

	return 0;
}
