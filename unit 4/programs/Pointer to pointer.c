// pointer_to_pointer.c
#include <stdio.h>

int main(void) {
    int val = 42;
    int *p = &val;
    int **pp = &p;
    printf("val=%d, *p=%d, **pp=%d\n", val, *p, **pp);
    return 0;
}
// This program demonstrates the use of a pointer to a pointer.
// It defines an integer variable, a pointer to that variable, and a pointer to the pointer,
// then prints the values accessed through each level of indirection.