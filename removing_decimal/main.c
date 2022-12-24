#include <stdio.h>
#include <stdlib.h>

int main()
{
    float data, decimal_data;
    printf("Enter number: ");
    scanf("%f", &data);
    decimal_data = data - (int)data;
    printf("decimal : %.2f", decimal_data);


    return 0;
}
