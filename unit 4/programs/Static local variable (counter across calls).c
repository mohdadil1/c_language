// static_counter.c
#include <stdio.h>

void counter(void) {
    static int c = 0; // retains value across calls
    c++;
    printf("counter = %d\n", c);
}

int main(void) {
    counter();
    counter();
    counter();
    return 0;
}
// This program defines a function 'counter' that uses a static local variable
// to keep track of how many times it has been called.
// Each time 'counter' is called, it increments and prints the value of the static variable.
