#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int str_len=0, str_index=0, length=0;
	char word[30];
	strcpy(word, argv[1]);
	

	while(word[str_index]!= '\0')
	{
		str_len++;
		str_index++;
	}
	printf("The length of %s is %d\n", word, str_len);

	return 0;
}

