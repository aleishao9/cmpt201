//use scanf to get user input (%[^\n]s specifies to take everything)
//convert input to ascii
//loop through array to check every character entered
#include <stdio.h>

int main(void)
{
	char char_array[30];
	int char_ascii, n, i, alpha_count;

	printf("Please enter a string: ");
	scanf("%[^\n]s", char_array);

	for(n=30,i=0;i<=n;i++)
	{
		char_ascii = (int) char_array[i];
		printf("%c",char_array[i]);
		if(char_ascii<=31||char_ascii==127)
		{
			alpha_count++;
			printf("Contains a control character\n");
		}
		if(char_ascii>=65&&char_ascii<=90||char_ascii>=97&&char_ascii<=122)
		{}
	}
	return 0;
}