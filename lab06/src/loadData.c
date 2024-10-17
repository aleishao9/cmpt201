#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *filename;
	int *stationNumber;
	double *temp, *pres;
	char file[]="data.dat";

	filename=&file;
	loadData(filename, stationNumber, temp, pres);
}

int loadData(char* filename, int* stationNumber, double* temp, double* pres)
{
	FILE* ftxt;
	int stn;
	double temperature, pressure;

	ftxt=fopen(*filename, "r");
	if(ftxt==NULL)
	{
		printf("File could not be opened.\n");
		return 1;
	}

	fscanf(ftxt,"station: %d",&stn);
	fscanf(ftxt,"pressure [kPa] : %lf",&pressure);
	fscanf(ftxt,"Temperature [C]: %lf",&temperature);

	return 0;
}
