/* Topic: Pointers - pointer to pointer, and traversing a string with a pointer */
#include <stdio.h>

int main()
{
    int x = 7;
    int *p = &x;
    int **pp = &p;
    const char *s = "Pointer";
    const char *c;

    printf("x = %d, *p = %d, **pp = %d\n", x, *p, **pp);

    printf("String via pointer: ");
    for (c = s; *c != '\0'; c++)
        putchar(*c);
    printf("\nLength = %td\n", c - s);
    return 0;
}
