/* Topic: Recursion - trace of fun(3)
   Method 1: print BEFORE the recursive call -> 3 2 1
   Method 2: print AFTER  the recursive call -> 1 2 3 (printed while returning) */
#include <stdio.h>

void funBefore(int n)
{
    if (n == 0)             /* base condition */
        return;
    printf("%d ", n);
    funBefore(n - 1);
}

void funAfter(int n)
{
    if (n == 0)
        return;
    funAfter(n - 1);
    printf("%d ", n);
}

int main()
{
    printf("Method 1: ");
    funBefore(3);
    printf("\nMethod 2: ");
    funAfter(3);
    printf("\n");
    return 0;
}
