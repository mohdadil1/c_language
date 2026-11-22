/* Topic: Recursion - GCD (Euclid) and printing a string in reverse */
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void printReverse(const char *s)
{
    if (*s == '\0')
        return;
    printReverse(s + 1);
    putchar(*s);
}

int main()
{
    printf("gcd(48, 18) = %d\n", gcd(48, 18));
    printf("Reverse of \"recursion\": ");
    printReverse("recursion");
    putchar('\n');
    return 0;
}
