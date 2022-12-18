#include<stdio.h>

// functions declaration
int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);
int mod(int n1, int n2);


int main()
{
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("%d\n",  add(num1, num2));
  printf("%d\n",  subtract(num1, num2));
  printf("%d\n", multiply(num1, num2));
  printf("%d\n",  divide(num1, num2));
  printf("%d\n",  mod(num1, num2));

  return 0;
}


int add(int n1, int n2)
{
  int result;
  result = n1 + n2;
  return result;
}

int subtract(int n1, int n2)
{
  int result;
  result = n1 - n2;
  return result;
}


int multiply(int n1, int n2)
{
  int result;
  result = n1 * n2;
  return result;
}


int divide(int n1, int n2)
{
  int result;
  result = n1 / n2;
  return result;
}

int mod(int n1, int n2)
{
    int result;
    result = n1 % n2;
    return result;

}

