#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius;
    double farenhite;
    printf("Converting Farenhite to Celsius: ", farenhite);
    scanf("%lf", &farenhite);
    celsius = (farenhite - 32)/ 1.8;
    printf("Celsius: %.2f ", celsius);

    return 0;
}
