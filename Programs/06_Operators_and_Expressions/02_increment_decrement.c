/* Topic: Operators - ++ and -- (pre and post) */
#include <stdio.h>

int main()
{
    int x = 5, y;

    y = x++;   /* post: use, then increment */
    printf("y = x++  -> y = %d, x = %d\n", y, x);

    x = 5;
    y = ++x;   /* pre: increment, then use */
    printf("y = ++x  -> y = %d, x = %d\n", y, x);

    x = 5;
    y = x--;
    printf("y = x--  -> y = %d, x = %d\n", y, x);

    x = 5;
    y = --x;
    printf("y = --x  -> y = %d, x = %d\n", y, x);
    return 0;
}
