#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char* strp=NULL;
	char filename[25];
	char letter;
	int count=0;

	strp=strtok(argv[1],"_");
	if(strp==NULL||strcmp(strp,"cmpt201")!=0)
	{
		printf("rename before submitting");
	}

	strp=strtok(NULL,"_");	
	if(strp!=NULL)
	{
		printf("Length: %ld\n",strlen(strp));
		if(strlen(strp)<2||strlen(strp)>3)
		{
			printf("rename before submitting\n");
			exit(EXIT_FAILURE);
		}
	}
	else{
		printf("rename before submitting\n");
		exit(EXIT_FAILURE);
	}

//Couldn't figure out
	strp=strtok(NULL,".");
	printf("String 3: %s\n", strp);
	if(strp!=NULL)
	{
		for(int i=0;i<strlen(strp);i++)
		{
			letter=strp[i];
			printf("letter: %c",letter);
			if(i==0&&strcmp(letter,"l"))
			{
				count++;
				printf("%i\n",count);
			}
			if(i==1&&strp[i]=="a")
			{
				count++;
				printf("%i\n",count);
			}
			if(i==2&&strp[i]=="b")
			{
				count++;
				printf("%i\n",count);
			}
			printf("%i\n",count);
		}
		if(count!=3)
		{
			printf("rename before submitting please\n");
			exit(EXIT_FAILURE);
		}
	}
	else{
		printf("rename before submitting\n");
		exit(EXIT_FAILURE);
	}

	strp=strtok(NULL, ".");
	if(strp==NULL||strcmp(strp,"tar")!=0)
	{
		printf("rename before submitting\n");
	}

	strp=strtok(NULL,".");
	if(strp==NULL||strcmp(strp,"gz")!=0)
	{
		printf("rename before submitting\n");
	}

	else{
		printf("good to submit");
	}
	return 0;

}

