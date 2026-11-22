/* Experiment 2: Write a C program to find whether the given integer is a
   prime number or not. */
#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 1)                     /* 0, 1 and negatives are not prime */
        isPrime = 0;

    for (i = 2; i * i <= n; i++) {  /* check divisors up to sqrt(n) */
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}

/* Sample output:
   Enter an integer: 29
   29 is a prime number
*/
