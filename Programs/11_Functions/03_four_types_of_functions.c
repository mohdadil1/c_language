/* Topic: Functions - the 4 types based on arguments and return value */
#include <stdio.h>

/* 1. No arguments, no return value */
void greet(void)
{
    printf("1. Hello from greet()\n");
}

/* 2. Arguments, no return value */
void printSum(int a, int b)
{
    printf("2. Sum = %d\n", a + b);
}

/* 3. No arguments, with return value */
int getNumber(void)
{
    return 42;
}

/* 4. Arguments and a return value */
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    greet();
    printSum(3, 4);
    printf("3. getNumber() returned %d\n", getNumber());
    printf("4. multiply(6, 7) = %d\n", multiply(6, 7));
    return 0;
}
