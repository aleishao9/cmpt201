#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int loadData(char* filename, int* stationNumber, double* temp, double* pres)
{
	FILE* ftxt;

	ftxt=fopen(filename, "r");
	if(ftxt==NULL)
	{
		printf("File could not be opened.\n");
		fclose(ftxt);
		return 1;
	}

	if(fscanf(ftxt,"station: %i", stationNumber)!=1)
	{
		printf("Failure to read station number\n");
		fclose(ftxt);
		return 1;
	}
	if(fscanf(ftxt,"pressure [kPa] : %lf", pres)!=1)
	{
		printf("Failure to read pressure\n");
		fclose(ftxt);
		return 1;
	}
	if(fscanf(ftxt,"Temperature [C]: %lf", temp)!=1)
	{
		printf("Failure to read temperature\n");
		fclose(ftxt);
		return 1;
	}

	fclose(ftxt);
	return 0;
}


int main()
{
	int stationNumber, status;
	double temp, pres;
	char filename[]="data.dat";

	status =loadData(filename, &stationNumber, &temp, &pres);

	if(status==1)
	{
		printf("File could not be loaded\n");
		return 1;
	}

	printf("station: %i\npressure [kPa] : %lf\nTemperature [C]: %lf\n", stationNumber, pres, temp);

	return 0;
}
