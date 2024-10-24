#include <stdio.h>
#include <math.h>
#include "pointerFun.h"

int main()
{	
    double coef[]={3.0,4.0}, x[]={1.0,2.0,3.0};
	int nc, na;
	nc=sizeof(coef)/sizeof(coef[0]);
	na=sizeof(x)/sizeof(x[0]);
    double y[na];
    poly(coef, x, y, &nc, &na);


    char str[]="Pineapple";
    int n=sizeof(str)/sizeof(str[0]);
    reverso(str, &n);
    printf("Reversed string: %s\n",str);


    char title_str[]="The   ";
    int size=sizeof(title_str)/sizeof(title_str[0]);
    int* n=&size;
    str_centre(title_str, n);
}