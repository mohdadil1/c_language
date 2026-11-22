/* Topic: Structure of C - Sub-program (user-defined function) section */
#include <stdio.h>

int add(int a, int b);          /* declaration (prototype) */

int main()
{
    int x = 4, y = 6;
    printf("%d + %d = %d\n", x, y, add(x, y));
    return 0;
}

int add(int a, int b)           /* definition */
{
    return a + b;
}
