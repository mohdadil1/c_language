// fib_rec_iter.c
#include <stdio.h>

int fib_rec(int n) {
    if (n <= 1) return n;
    return fib_rec(n-1) + fib_rec(n-2);
}

int fib_iter(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b; a = b; b = c;
    }
    return b;
}

int main(void) {
    int n = 10;
    printf("fib_rec(10) = %d\n", fib_rec(n));
    printf("fib_iter(10) = %d\n", fib_iter(n));
    return 0;
}
// This program defines two functions to calculate the nth Fibonacci number:
// 'fib_rec' uses a recursive approach, while 'fib_iter' uses an improved iterative method.
// The 'main' function demonstrates both methods by calculating and printing the 10th Fibonacci number.
