#include <stdio.h>
#include <stdlib.h>

int main()
{
    int current_year;
    int your_age;
    int birth_year;


    printf("plase enter current year :  ");
    scanf("%d", &current_year);
    printf("plase enter your age :  ");
    scanf("%d", &your_age);
    birth_year = current_year - your_age;
    printf("Year you were born: %d", birth_year);
    return 0;
}
