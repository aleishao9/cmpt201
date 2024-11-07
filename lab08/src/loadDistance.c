#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
    float z;
} Point;

typedef struct {
    int pointA; // Line index of the first point
    int pointB; // Line index of the second point
    double d;   // Calculated minimum distance between pointA and pointB
} dist;

// Function to calculate the Euclidean distance between two points
double calculateDistance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

int main() {
    FILE *file = fopen("data.dat", "r");
    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    /* to skip the first lines */
    char buffer[256];
    fgets(buffer, sizeof(buffer), file);
    fgets(buffer, sizeof(buffer), file);

    int n;
    fscanf(file, "%d", &n);

    /* malloc returns a 'void' pointer normally so in this case i'm type casting it
    as a 'Point' pointer so that it can be treated as an array of Point structures*/
    Point *points = (Point *)malloc(n * sizeof(Point));

    /* assigning each Point it's x,y,z coordinates*/
    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%f,%f,%f", &points[i].x, &points[i].y, &points[i].z);
    }
    fclose(file);

    /* setting the initial distance to a very large number so that it can
    be replaced by whatever distance that's calculated and i don't have code
    an exeption for when distance empty or set at 0 to begin with */
    dist minDist;
    minDist.d = __DBL_MAX__;


    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double distance = calculateDistance(points[i], points[j]);
            if (distance < minDist.d) {
                minDist.d = distance;
                /* updating current points with points
                that have a smaller distance between them */
                minDist.pointA = i + 1;
                minDist.pointB = j + 1;
            }
        }
    }


    printf("The minimum distance is %.2f and is between points %d and %d.\n",
           minDist.d, minDist.pointA, minDist.pointB);


    free(points);

    return 0;
}