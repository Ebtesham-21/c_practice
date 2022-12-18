#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height, width;
    double Area;


    printf("enter height: ");
    scanf("%lf", &height);
    printf("enter width: ");
    scanf("%lf", &width);
    Area = height * width;

    printf("Area: %lf", Area);

    return 0;
}
