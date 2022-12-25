#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2;
   printf("Enter num1: ");
   scanf("%d", &num1);
   printf("Enter num2: ");
   scanf("%d", &num2);

   if(num1 > num2){
    printf("%d is max", num1);
   }
   else{
    printf("%d is max", num2);
   }
    return 0;
}
