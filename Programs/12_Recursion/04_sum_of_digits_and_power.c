/* Topic: Recursion - sum of digits, power, sum of first n numbers */
#include <stdio.h>

int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumDigits(n / 10);
}

long long power(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int sumN(int n)
{
    if (n == 0)
        return 0;
    return n + sumN(n - 1);
}

int main()
{
    printf("sumDigits(12345) = %d\n", sumDigits(12345));
    printf("power(2, 10)     = %lld\n", power(2, 10));
    printf("sumN(100)        = %d\n", sumN(100));
    return 0;
}
