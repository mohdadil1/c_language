/* Experiment 7: Write a program to calculate the GCD of two numbers using
   recursion (Euclid's method: gcd(a, b) = gcd(b, a % b), gcd(a, 0) = a). */
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)                 /* base condition */
        return a;
    return gcd(b, a % b);       /* recursive call */
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
    return 0;
}

/* Sample output:
   Enter two numbers: 48 18
   GCD of 48 and 18 = 6
*/
