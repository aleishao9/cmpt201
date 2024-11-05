#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, current=1, target=3;
    double* distance;
    FILE* fd;
    char buffer[100];
    int* ptr_x, ptr_y, ptr_z;
    typedef struct {double* x; double* y; double* z; double* d} point;
    
    ptr_x,ptr_y,ptr_z= malloc(4 * sizeof(int));


    fd=fopen("data.dat","r");
    if(fd==NULL)
    {
        printf("File not valid");
        exit(EXIT_FAILURE);
    }

    while(current<target && fgets(buffer, sizeof(buffer), fd))
    {
        current++;
    }

    for(int i=4; i>=target; i++)
    {
        fscanf(fd,"%lf, %lf, %lf", ptr_x, ptr_y, ptr_z);
        printf(ptr_x,ptr_y,ptr_z);
    }
}

int dist_eq(ptr_x, ptr_y, ptr_z, distance)
{
    for(int i=0; i < 5; i++)
    {
        for(int j=1; j < 4; j++)
        {
            distance=pow((pow(ptr_x-ptr_x,2)+pow(ptr_y-ptr_y,2)+pow(ptr_z-ptr_z,2)),(1/2));
        }
    }
}
