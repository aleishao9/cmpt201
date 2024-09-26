#include <stdio.h>
#include "planet.h"
#include <string.h>

#define G 65.73*(10^-12)

int main(int argc, char* argv[])
{
	long double h, g;

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
	if (strcmp(neptune))
        {
                mP= mass_Neptune;
                rP= rad_Neptune;
        }
	if (strcmp(uranus))
        {
                mP= mass_Uranus;
                rP= rad_Uranus;
        }
	if (strcmp(jupiter))
        {
                mP= mass_Jupiter;
                rP= rad_Jupiter;
        }
	if (strcmp(saturn))
        {
                mP= mass_Saturn;
                rP= rad_Saturn;
        }

	h = atof(argv[2]);
	g = G * mP / ((h + rP) * (h + rP));

	printf("%d-body @ %Lf [m] is %f [m/s2]", argv[1], argv[2], g);

	return 0;

}
