#include <stdio.h>

int main(void)
{
	char character;

	printf("Please enter a single character : ");
	scanf("%c",&character);
	printf("%c -> %i\n",character, character);

	return 0;
}