#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char* strp=NULL;
	char filename[25];

	int num;

	strp=strtok(argv[1],"_");
	printf("String: %s\n", strp);
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
	//look up how to split string in c
	if(strp==NULL||strchr(strp,"lab")==NULL)
	{
		for(int i=0, length=strlen(strp); i<length; i++)
		{
			int strp[i];
			if(strp[i]>=48&&strp[i]<=57)
			{
				num++;
			}
		}
		if(num>2)
		{
			printf("rename before submitting");
			exit(EXIT_FAILURE);
		}
	
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

