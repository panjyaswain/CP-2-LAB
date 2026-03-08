//Develop a program to create a structure for a 2D point and use it to calculate the distance between two points//
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() 
{
    struct Point p1, p2;
    float distance;

    printf("Enter x and y coordinates of first point: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter x and y coordinates of second point: ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) +
                    (p2.y - p1.y)*(p2.y - p1.y));

    printf("Distance between the two points = %.2f", distance);

    return 0;
}
