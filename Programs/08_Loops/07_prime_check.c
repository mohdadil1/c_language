/* Topic: Loops - for loop with a flag (prime number check) */
#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
        isPrime = 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf("%d is %s\n", n, isPrime ? "PRIME" : "NOT prime");
    return 0;
}
