#include <stdio.h>
#include "planet.h"

int main(void)
{
	FILE* fh;
	fh = fopen("planetInfo.txt","w");

	fprintf(fh, "Mercury, %.4E, %.4E\n", MASS_MERCURY, RAD_MERCURY);
	fprintf(fh, "Venus, %.4E, %.4E\n" MASS_VENUS, RAD_VENUS);
	fprintf(fh, "Earth, %.4E, %.4E\n" MASS_EARTH, RAD_EARTH);
	fprintf(fh, "Mars, %.4E, %.4E\n" MASS_MARS, RAD_MARS);
	fprintf(fh, "Jupiter, %.4E, %.4E\n" MASS_JUPITER, RAD_JUPITER);
	fprintf(fh, "Saturn, %.4E, %.4E\n" MASS_SATURN, RAD_SATURN);
	fprintf(fh, "Uranus, %.4E, %.4E\n" MASS_URANUS, RAD_URANUS);
	fprintf(fh, "Neptune, %.4E, %.4E\n" MASS_NEPTUNE, RAD_NEPTUNE);

	fclose(fh);

	return 0;

}
