#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	FILE *fh;
	fh = fopen("Cdatatypes.txt","w");


	fprintf("DataType    | Bytes | Min Value | Max Value  |\n");
	fprintf("short int   | %li     | %.2e | %.2e   |\n", sizeof(short), (double)SHRT_MIN, (double)SHRT_MAX);
	fprintf("int         | %li     | %.2e | %.2e   |\n", sizeof(int), (double)INT_MIN, (double)INT_MAX);
	fprintf("long int    | %li     | %.2e | %.2e   |\n", sizeof(long), (double)LONG_MIN, (double)LONG_MAX);
	fprintf("char        | %li     | %i      | %i        |\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	fprintf("float       | %li     | %.2e  | %.2e   |\n", sizeof(float), FLT_MIN, FLT_MAX);
	fprintf("double      | %li     | %.2e | %.2e  |\n", sizeof(double), DBL_MIN, DBL_MAX);
	fprintf("long double | %li    | %.2Le| %.2Le |\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

	fclose(fh);
	
	return 0;

}
