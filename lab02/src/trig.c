#include <stdio.h>
#include "trig.h"
#include "math_constants.h"
#include <math.h>

int main(void)
{
	float varQ;

	varQ=sin(N*PI)+cos(N*PI)+cos((N*PI)/2);
	printf("Variable q = %f\n",varQ);

	return 0;
}
