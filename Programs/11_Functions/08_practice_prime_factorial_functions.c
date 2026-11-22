/* Topic: Functions - practice: prime check, factorial, GCD as functions */
#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

long long factorial(int n)
{
    long long f = 1;
    int i;
    for (i = 2; i <= n; i++)
        f *= i;
    return f;
}

int gcd(int a, int b)
{
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int i;
    printf("Primes up to 30: ");
    for (i = 1; i <= 30; i++)
        if (isPrime(i))
            printf("%d ", i);
    printf("\n10! = %lld\n", factorial(10));
    printf("gcd(48, 36) = %d\n", gcd(48, 36));
    return 0;
}
