#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    long double nat_log=0.0;
    float x_float= atof(argv[1]);

    if(x_float<=0||x_float>1)
    {
        printf("Entry must be 0 < x <= 1\n");
        exit(EXIT_FAILURE);
    }

    for(int k=1;k<=200;k++)
    {
        nat_log+=((pow(-1,k-1)) * (pow((x_float-1),k))) / k;
    }

    printf("The Natural Log of %g is %.4Lf\n", x_float, nat_log);

    return 0;

}