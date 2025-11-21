// func_noargs_noreturn.c
#include <stdio.h>

void greet(void) {
    printf("Hello from greet()\n");
}

int main(void) {
    greet();
    return 0;
}
// This program defines a function 'greet' that takes no arguments and returns no value.
// The 'main' function calls 'greet' to demonstrate its functionality.