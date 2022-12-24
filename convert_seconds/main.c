#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours, minutes, seconds, remaining_sec;
    printf("input total seconds: ");
    scanf("%d", &seconds );
    hours = seconds / 3600;
    minutes = (seconds - hours * 3600)/ 60;

    remaining_sec = (seconds - hours * 3600) % 60;
    printf("Time %d:%d:%d", hours, minutes, remaining_sec);

    return 0;
}
