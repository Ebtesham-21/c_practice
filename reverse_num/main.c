#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int units, tens, hundreds, reversedNum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    units = num % 10;
    tens = (num / 10) % 10;
    hundreds = num/100;

    reversedNum = units;
    reversedNum = reversedNum * 10 + tens;
    reversedNum = reversedNum * 10 + hundreds;




    printf("%d reverse is : %d", num, reversedNum);
    return 0;
}
