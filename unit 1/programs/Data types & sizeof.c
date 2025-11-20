// datatypes_sizeof.c
#include <stdio.h>

int main(void) {
    printf("Sizes (bytes) — char: %zu, short: %zu, int: %zu, long: %zu, long long: %zu\n",
           sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    printf("float: %zu, double: %zu\n", sizeof(float), sizeof(double));
    return 0;
}
// This program prints the sizes of various data types in C using the sizeof operator.