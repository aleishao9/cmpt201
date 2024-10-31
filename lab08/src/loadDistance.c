#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, current=1, read_lines=3;
    double* distance;
    FILE* fd;
    char buffer[100];
    int* ptr_x, ptr_y, ptr_z;
    typedef struct {double* point1; double* point2; double* d} dist;
    
    ptr_x,ptr_y,ptr_z= malloc(4 * sizeof(int));


    fd=fopen("data.dat","r");
    if(fd==NULL)
    {
        printf("File not valid");
        exit(EXIT_FAILURE);
    }

    while(fgets(buffer, sizeof(buffer), fd))
    {
        if(current==read_lines)
        {

        }
    }

    int dist_eq(ptr_x, ptr_y, ptr_z, distance)
    {
        for(int i=0; i < 5; i++)
        {
            for(int j=1; i < 4; j++)
            {
                *distance=pow((pow(ptr_x[i]-ptr_x[j])+pow(ptr_y[i]-ptr_y[j])+pow(ptr_z[i]-ptr_z)),(1/2));
            }
        }
    }
}