#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int stats(double* array, int* n, double* min, double* mean, double* max)
{
	*min=array[0];
	*max=0.0;
	*mean=0.0;

	for(int i=0;i<*n;i++)
	{
		if(array[i]<*min)
		{
			*min=array[i];
		}
		if(array[i]>*max)
		{
			*max=array[i];
		}
		*mean+=array[i];
	}
	*mean/=*n;
	
	//make parameter checks
	return 0;
}


int main()
{
	double array[]={10,2,15,17,2,3,6}, min, mean, max;
	int *n;
	int arrLength;

	arrLength=sizeof(array)/sizeof(array[0]);
	n=&arrLength;

	stats(array, n, &min, &mean, &max);
	printf("This array has a minimum of %g, maximum of %g, and a mean of %g\n", min, max, mean);

	return 0;
}