/* Topic: Pointers - variables, memory and addresses; & (address of) and * (value of) */
#include <stdio.h>

int main()
{
    int x = 25;
    int *p = &x;             /* p stores the address of x */

    printf("Value of x          : %d\n", x);
    printf("Address of x (&x)   : %p\n", (void *)&x);
    printf("Value of p          : %p\n", (void *)p);
    printf("Value at p (*p)     : %d\n", *p);
    printf("Address of p (&p)   : %p\n", (void *)&p);

    *p = 50;                 /* change x through the pointer */
    printf("After *p = 50, x    : %d\n", x);
    return 0;
}
