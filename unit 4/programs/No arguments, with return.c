// func_noargs_return.c
#include <stdio.h>

int get_year(void) {
    return 2025;
}

int main(void) {
    printf("Year = %d\n", get_year());
    return 0;
}
// This program defines a function 'get_year' that takes no arguments and returns an integer value.