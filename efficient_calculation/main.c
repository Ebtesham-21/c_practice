#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, x2, x4, x6, x8;
    printf("Enter the num: ");
    scanf("%d", &x);
    x2 = pow(x,2);
    x4 = pow(x,4);
    x6 = pow(x,6);
    x8 = pow(x,8);
    printf("number powers: %d %d %d %d", x2, x4, x6, x8);



    return 0;
}
