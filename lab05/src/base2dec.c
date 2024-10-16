#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    char num_str[10];
    int num_base = atoi(argv[2]);
    strcpy(num_str,argv[1]);
    int to_decimal=0;
    char *str_end;


    /*needs pointer argument (str_end) to get any remaining chars and allows error checking
    but error checking isn't required*/
    to_decimal=strtol(num_str,&str_end,num_base);
    printf("%d\n", to_decimal);

    return 0;
}