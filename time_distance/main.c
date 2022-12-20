#include <stdio.h>
#include <stdlib.h>

int main()
{
    float time, distance, speed;
    printf("Enter distance from city A to city B: ");
    scanf("%f", &distance);
    printf("Enter avarage speed : ");
    scanf("%f", &speed);
    time = distance / speed;
    printf("Avarage time : %.2f hr", time);


    return 0;
}
