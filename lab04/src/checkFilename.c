#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	char* strp=NULL;
	char filename[25];

	strp=strtok(argv[1],"_");
	if(strp==NULL||strcmp(strp,"cmpt201")!=0)
	{
		printf("rename before submitting");
	}

	strp=strtok(NULL,"_");
	if(strp==NULL||islower(strp)||strlen(strp)>3||strlen(strp)==1)
	{
		printf("rename before submitting");
	}

	strp=strtok(argv[1],".");
	if(strp==NULL)
	{
		printf("rename before submitting");
	}

	strp=strtok(NULL, ".");
	if(strp==NULL||strcmp(strp,"tar")!=0)
	{
		printf("rename before submitting");
	}

	strp=strtok(NULL,".");
	if(strp==NULL||strcmp(strp,"gz")!=0)
	{
		printf("rename before submitting");
	}

	else{
		printf("good to submit");
	}
	return 0;

}

