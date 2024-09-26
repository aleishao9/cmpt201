#include <stdio.h>

int main(void)
{
	FILE* fh;
	fh = fopen("planet.h","w");
	fpointf(fh, "earth, %E, %E \n", mass_Earth, rad_Earth);
	fclose(fh);

	return 0;

}
