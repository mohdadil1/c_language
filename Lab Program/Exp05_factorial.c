/* Experiment 5: Write a program to calculate the factorial of a given number. */
#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number does not exist\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}

/* Sample output:
   Enter a number: 5
   Factorial of 5 = 120
*/
