// func_args_noreturn.c
#include <stdio.h>

void print_sum(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int main(void) {
    print_sum(7, 8);
    return 0;
}
// This program defines a function 'print_sum' that takes two integer arguments and returns no value.
// The 'main' function calls 'print_sum' with sample values to demonstrate its functionality.
