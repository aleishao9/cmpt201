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
    int to_decimal=0, k=strlen(num_str);

    for(int i=0, num; i<k ;i++)
    {
        num=num_str[i] - '0';
        to_decimal += num * pow(num_base,k-i-1);
        printf("Binary: %d, Base: %d, Exp: %d, Decimal: %d\n",num, num_base, k-i-1, to_decimal);
    }
            /*
        if(isalpha(num_str[0]))
        {
            if(strcmp(num_str[0],"A"))
            {
                num_str[0]="10";
                num_str[0]=atoi(num_str[0]);
            }
        }
        printf("%d", num_str[0]); */
    printf("%d\n", to_decimal);
    return 0;
}