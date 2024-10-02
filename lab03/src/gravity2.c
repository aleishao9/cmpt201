#include <stdio.h>
#include "planet.h"

int main(void)
{
	FILE* fh;
	fh = fopen("planet.h","w");
	fprintf(fh, "Mercury, %E, %E \n", MASS_MERCURY, RAD_MERCURY);
	fclose(fh);

	return 0;

}
