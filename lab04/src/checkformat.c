#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fh;
    int n,num,v1,v2;

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
        printf("file not valid\n");
        exit(EXIT_FAILURE);
    }
    else{
        num=fscanf(fh,"%i", &n);
        //printf("Amount of following lines: %i\n", n);
    }

    for(int i=0;i<n;i++)
    {
        num=fscanf(fh,"%i,%i",&v1,&v2);
        //printf("Amount of integers in line:%i, Num1:%i, Num2:%i\n", num, v1, v2);
        
        if(num!=2)
        {
            printf("file format is not valid\n");
            exit(EXIT_FAILURE);
        }
    }
    printf("file valid\n");
    return 0;
}