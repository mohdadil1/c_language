/* Topic: Functions - scope: local vs global variables */
#include <stdio.h>

int x = 100;                    /* global */

void show(void)
{
    int y = 5;                  /* local to show() */
    printf("show(): global x = %d, local y = %d\n", x, y);
}

int main()
{
    int x = 1;                  /* local x hides the global x */
    printf("main(): local x = %d\n", x);
    show();
    {
        int x = 2;              /* block scope */
        printf("inner block: x = %d\n", x);
    }
    printf("main(): local x again = %d\n", x);
    return 0;
}
