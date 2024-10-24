#include <stdio.h>
#include <math.h>
#include <ctype.h>

void poly(double* coef, double* x, double* y, int* nc, int* na)
{
	for(int j=0;j<*na;j++)
	{
		for(int i=0;i<*nc;i++)
		{
			*y=+coef[j]*(pow(x[i],j));
			printf("y = %lf",*y);
		}
		printf("\n");
	}
}

void reverso(char* str, int* n)
{
	int j=*n-2;
	char temp_str[j];

	for(int i=0 ; i<(*n);i++)
	{
		temp_str[i]=str[j];
		j--;
	}
	str=temp_str;
}

void str_centre(char* str, int* n)
{
	
}
