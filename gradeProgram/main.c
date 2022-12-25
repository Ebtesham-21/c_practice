#include <stdio.h>
#include <stdlib.h>

int main()
{
    int your_num;
    printf("Enter your num: ");
    scanf("%d", &your_num);
    if(your_num >= 60){
        printf("Congratulations!");
    }
    else
    {
        printf("Failed, Try Again");
    }

    return 0;
}
