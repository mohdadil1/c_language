/* Topic: Functions - declaration, definition and calling */
#include <stdio.h>

int square(int n);                 /* 1. declaration (prototype) */

int main()
{
    int x = 7;
    int r = square(x);             /* 3. function call */
    printf("square(%d) = %d\n", x, r);
    printf("square(12) = %d\n", square(12));
    return 0;
}

int square(int n)                  /* 2. definition */
{
    return n * n;
}
