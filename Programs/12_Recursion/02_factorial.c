/* Topic: Recursion - factorial
   1. Divide into a smaller sub-problem : fact(n) = n * fact(n - 1)
   2. Base condition to stop            : fact(0) = fact(1) = 1        */
#include <stdio.h>

long long fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Factorial of a negative number is not defined\n");
    else
        printf("%d! = %lld\n", n, fact(n));
    return 0;
}
