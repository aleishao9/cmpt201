#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("DataType | Bytes | Min Value | Max Value |");
	printf("short int | %i | %i | %i |", sizeof(variable), INT_MIN, INT_MAX);
	printf("int | %i | %i | %i |", sizeof(variable), INT_MIN, INT_MAX);
	printf("long int | %li | %li | %li |", sizeof(variable), INT_MIN, INT_MAX);
	printf("char | %i | %i | %i |", sizeof(variable), INT_MIN, INT_MAX);
	printf("float | %i | %f | %f |", sizeof(variable), INT_MIN, INT_MAX);
	printf("double | %i | %d | %d |", sizeof(variable), INT_MIN, INT_MAX);

	return 0;

}
