// factorial_recursion.c
#include <stdio.h>

unsigned long fact(unsigned n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main(void) {
    printf("5! = %lu\n", fact(5));
    return 0;
}
// This program defines a recursive function 'fact' to calculate the factorial of a number.
// The base case is when n is less than or equal to 1, returning 1.
// For other values, it returns n multiplied by the factorial of (n-1).