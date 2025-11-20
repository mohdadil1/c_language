// bitwise_demo.c
#include <stdio.h>

int main(void) {
    unsigned int a = 6; // 0110
    unsigned int b = 5; // 0101
    printf("a & b = %u\n", a & b); // 0100 -> 4
    printf("a | b = %u\n", a | b); // 0111 -> 7
    printf("a ^ b = %u\n", a ^ b); // 0011 -> 3
    printf("~a = %u\n", (unsigned int)~a);
    printf("a << 1 = %u\n", a << 1); // 01100 -> 12
    printf("a >> 1 = %u\n", a >> 1); // 0011 -> 3
    return 0;
}
// This program demonstrates the use of bitwise operators in C.