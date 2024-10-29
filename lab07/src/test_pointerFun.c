#include <stdio.h>
#include <math.h>
#include "pointerFun.h"

int main()
{	
    printf("Q1\n");
    double coef[]={3.0,4.0}, x[]={1.0,2.0,3.0};
	int nc, na;
	nc=sizeof(coef)/sizeof(coef[0]);
	na=sizeof(x)/sizeof(x[0]);
    double y[na];
    poly(coef, x, y, &nc, &na);
    printf("\n \n");


    printf("Q2\n");
    char str[]="Pineapple";
    int n=sizeof(str)/sizeof(str[0]);
    reverso(str, &n);
    printf("Reversed string: %s\n \n",str);


    printf("Q3\n");
    char centr_str[]="The   ";
    int size=sizeof(centr_str)/sizeof(centr_str[0]);
    str_centre(centr_str, &size);
    printf("Centered string: %s\n", centr_str);

    return 0;
}