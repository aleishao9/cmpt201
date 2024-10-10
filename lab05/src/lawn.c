#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float x_float;
    long double nat_log;

    x_float= atof(argv[1]);

    for(int k=1;k<=200;k++)
    {
        nat_log=+(pow(-1,k) * pow((x_float-1),k))/k;
        //printf("%d\n",k);
    }
    printf("%.2Le\n", nat_log);

}