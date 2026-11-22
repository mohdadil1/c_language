/* Topic: Pointers - pointer assignment (two pointers to the same variable) */
#include <stdio.h>

int main()
{
    int a = 5, b = 9;
    int *p1 = &a, *p2;

    p2 = p1;                 /* p2 now points where p1 points (to a) */
    *p2 = 100;
    printf("a = %d (changed via p2)\n", a);

    p1 = &b;                 /* p1 now points to b */
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
    return 0;
}
