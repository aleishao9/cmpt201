#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	int variable;

	printf("DataType | Bytes | Min Value | Max Value |");
	printf("short int | %i | %i | %i |", sizeof(variable), SHRT_MIN, SHRT_MAX);
	printf("int | %i | %i | %i |", sizeof(variable), INT_MIN, INT_MAX);
	printf("long int | %li | %li | %li |", sizeof(variable), LONG_MIN, LONG_MAX);
	printf("char | %i | %i | %i |", sizeof(variable), CHAR_MIN, CHAR_MAX);
	printf("float | %i | %f | %f |", sizeof(variable), FLT_MIN, FLT_MAX);
	printf("double | %i | %lf | %lf |", sizeof(variable), DBL_MIN, DBL_MAX);
	printf("long double | %i | %Lf | %Lf |", sizeof(variable), LDBL_MIN, LDBL_MAX);

	return 0;

}
