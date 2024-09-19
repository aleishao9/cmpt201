#include <stdio.h>
#include <math.h>

int main(void)
{
	int varA;
	float varB;
	float varD;

	varD= log10f(varB) / log10f((float)varA);
	printf("The value of D: %f\n", varD);

	return 0;
}