#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fh;
    int n,num;

    char* strp=NULL;
    char filename[20];
    strcpy(filename,argv[1]);

    strp=strtok(argv[1],".");
    if(strp==NULL)
    {
	    printf("file not valid");
        exit(EXIT_FAILURE);
    }

    strp=strtok(NULL,".");
    if(strp==NULL||strcmp(strp,"dat")!=0)
    {
	    printf("file not valid");
        exit(EXIT_FAILURE);
    }


    fh=fopen(filename,"r");
    if(fh==NULL)
    {
        printf("File not valid\n");
        exit(EXIT_FAILURE);
    }
    else{
        num=fscanf(fh,"%i", &n);
    }
    printf("%i", num);
    for(int i=0;i<=n;i++)
    {

    }
    return 0;


}
