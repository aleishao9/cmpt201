#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sec2hms(double* totalSec, int* hr, int* min, int* sec)
{
	int hours=0, mins=0, secs=0;

	*hr=0;
	*min=0;
	*sec=0;
	
	if(*totalSec >= 3600.0)
	{
		*hr=(int)(*totalSec/3600);
		*totalSec=fmod(*totalSec, 3600);
	}
	if(*totalSec >= 60)
	{
		*min=(int)(*totalSec/60);
		*totalSec=fmod(*totalSec, 60);
	}
	*sec=(int)(*totalSec);
	//make character checks
	return 0;
}


int main(void)
{
	double totalSec;
    int hr, min, sec;

	printf("Enter total amount of seconds: ");
	if(scanf("%lf", &totalSec)!= 1)
	{
		return 1;
	}

	sec2hms(&totalSec, &hr, &min, &sec);
	printf("Converts to: %d hours, %d minutes, and %d seconds\n", hr, min, sec);

	return 0;
}