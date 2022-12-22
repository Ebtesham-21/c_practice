#include <stdio.h>
#include <stdlib.h>

int main()
{
    int per_hours, total_hours, total_salary;
    printf("Enter per hours: ");
    scanf("%d", &per_hours);
    printf("Enter total_hours: ");
    scanf("%d",&total_hours);
    total_salary = per_hours * total_hours;
    printf("Your total salary %d", total_salary);

    return 0;
}
