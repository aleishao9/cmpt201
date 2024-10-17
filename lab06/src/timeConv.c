#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, int* argv[])
{
	double* totalSec;
       	int* hr, min, sec;
	
	sec2hms(totalSec, hr, min, sec);

}

int sec2hms(double* totalSec, int* hr, int* min, int* sec)
{
	int hours, mins, secs;

	if(*totalSec > 3600.0)
	{
		div_t hr_res = (totalSec,3600.0);
		hours = hr_res.quot;
		secs = hr_res.rem;
	}
	if(secs > 60)
	{
		div_t mins_res = (secs, 60);
		mins = mins_res.quot;
		secs = mins_res.rem;
	}

	hr = &hours;
	min = &mins;
	sec = &secs;

	//make character checks
	return 0;
}
