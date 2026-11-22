/* Topic: Pointers - call by value vs call by reference (swap) */
#include <stdio.h>

void swapByValue(int a, int b)       /* gets copies: original unchanged */
{
    int t = a;
    a = b;
    b = t;
}

void swapByReference(int *a, int *b) /* gets addresses: original changed */
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 10, y = 20;

    swapByValue(x, y);
    printf("After swapByValue    : x = %d, y = %d\n", x, y);

    swapByReference(&x, &y);
    printf("After swapByReference: x = %d, y = %d\n", x, y);
    return 0;
}
