#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int str_len=0,length;
	char word[30];
	char str_char;
	strcpy(word, argv[1]);


	for(int i=0;strcmp(str_char,"/0")!=0;i++)
	{
		str_char=word[i];
		printf("%c",str_char);
		str_len++;
	}
	printf("String length: %d", str_len);
	length=strlen(argv[1]);
	printf("Correct string length: %d", length);
}

