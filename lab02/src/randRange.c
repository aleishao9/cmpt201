#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define R_MIN 15
#define R_MAX 2

int main(void)
{
	srand(time(NULL));
	int r;

	r=(rand()%(R_MAX-R_MIN+1))+R_MIN;
	return 0;
}
