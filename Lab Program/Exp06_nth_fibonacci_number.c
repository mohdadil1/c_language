/* Experiment 6: Write a program to calculate the nth Fibonacci number given
   the first two numbers in the series. */
#include <stdio.h>

int main()
{
    long long first, second, next;
    int n, i;

    printf("Enter the first two numbers of the series: ");
    scanf("%lld %lld", &first, &second);
    printf("Enter n (position of the term to find): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n must be 1 or more\n");
        return 0;
    }

    printf("Series: ");
    if (n == 1) {
        printf("%lld\n", first);
        printf("Term 1 of the series = %lld\n", first);
        return 0;
    }
    printf("%lld %lld ", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;      /* each term = sum of previous two */
        printf("%lld ", next);
        first = second;
        second = next;
    }
    printf("\nTerm %d of the series = %lld\n", n, second);
    return 0;
}

/* Sample output:
   Enter the first two numbers of the series: 0 1
   Enter n (position of the term to find): 10
   Series: 0 1 1 2 3 5 8 13 21 34
   Term 10 of the series = 34
*/
