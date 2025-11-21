// swap_demo.c
#include <stdio.h>

void swap_by_value(int a, int b) {
    int t = a; a = b; b = t; // only local
}

void swap_by_ref(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int main(void) {
    int x = 10, y = 20;
    swap_by_value(x, y);
    printf("After swap_by_value: x=%d y=%d\n", x, y); // unchanged

    swap_by_ref(&x, &y);
    printf("After swap_by_ref: x=%d y=%d\n", x, y);   // swapped
    return 0;
}
// This program demonstrates the difference between call by value and call by reference.