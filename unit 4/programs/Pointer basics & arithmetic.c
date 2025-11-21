// pointer_iterate.c
#include <stdio.h>

int main(void) {
    int a[] = {5, 6, 7, 8};
    int *p = a;              // points to a[0]
    for (int i = 0; i < 4; i++, p++)
        printf("a[%d]=%d\n", i, *p);
    return 0;
}
// This program demonstrates pointer arithmetic by iterating through an array
// using a pointer and printing each element.
