#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char* strp=NULL;
    char filename[20];

    strp=strtok(argv[1],".");
    if(strp==NULL)
    {
	    printf("file not valid");
    }

    strp=strtok(NULL,".");
    if(strp==NULL||strcmp(strp,"dat")!=0)
    {
	    printf("file not valid");
    }

    else
    {strcpy(filename,argv[1]);}

    return 0;


}
