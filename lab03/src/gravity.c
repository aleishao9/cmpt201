#include <stdio.h>
#include "planet.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define G (65.73*pow(10,-12))

int main(int argc, char* argv[])
{
	long double gravity, mP, rP;
	float height;

	if (0==strcmp(argv[1],"earth"))
	{
		mP= MASS_EARTH;
		rP= RAD_EARTH;
	}

	if (0==strcmp(argv[1],"mars"))
	{
		mP= MASS_MARS;
		rP= RAD_MARS;
	}
	if (0==strcmp(argv[1],"venus"))
        {
                mP= MASS_VENUS;
                rP= RAD_VENUS;
	}

	if (0==strcmp(argv[1],"mercury"))
        {
                mP= MASS_MERCURY;
                rP= RAD_MERCURY;
	}
	if (0==strcmp(argv[1],"neptune"))
        {
                mP= MASS_NEPTUNE;
                rP= RAD_NEPTUNE;
        }
	if (0==strcmp(argv[1],"uranus"))
        {
                mP= MASS_URANUS;
                rP= RAD_URANUS;
        }
	if (0==strcmp(argv[1],"jupiter"))
        {
                mP= MASS_JUPITER;
                rP= RAD_JUPITER;
        }
	if (0==strcmp(argv[1],"saturn"))
        {
                mP= MASS_SATURN;
                rP= RAD_SATURN;
        }

	height = atof(argv[2]);
	gravity = G * mP / ((height + rP) * (height + rP));

	printf("%s-body @ %s [m] is %2Lf [m/s2]\n", argv[1], argv[2], gravity);

	return 0;

}
