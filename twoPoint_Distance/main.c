#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;
    printf("Enter 1st point: \n");
    scanf("%f", &x1);
    printf("Enter 2nd point: \n");
    scanf("%f", &x2);
    printf("Enter 3rd point: \n");
    scanf("%f", &y1);
    printf("Enter 4th point: \n");
    scanf("%f", &y2);
    distance = sqrt(pow((x1 - x2),2) + pow((y1-y2),2));
    printf("Distance: %f", distance);



    return 0;
}
