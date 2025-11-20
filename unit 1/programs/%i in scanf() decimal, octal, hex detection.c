// scan_base_demo.c
#include <stdio.h>

int main(void) {
    int x;
    printf("Enter a number (decimal, or prefix 0 for octal, 0x for hex): ");
    if (scanf("%i", &x) != 1) return 0;
    printf("Stored value (decimal) = %d\n", x);
    return 0;
}
// This program reads an integer in decimal, octal, or hexadecimal format using %i in scanf() and prints its decimal value.