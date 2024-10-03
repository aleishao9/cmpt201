#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char* strp=NULL;
	char filename[25];

	strp=strtok(argv[1],"_");
	if(strp==NULL)
	{
		printf("rename before submitting");
	}

	strp=strtok(NULL,"_");
	if(strp==NULL)
	{
		printf("rename before submitting");
	}

	return 0;

}

