/* Topic: Tokens - the smallest units of a C program
   int x, a = 2, b = 3, c = 5;
   Keywords    : int, return
   Identifiers : main, x, a, b, c, printf
   Constants   : 2, 3, 5, 0
   String      : "The value of x is %d\n"
   Operators   : =, +, *
   Symbols     : ( ) { } , ;                                           */
#include <stdio.h>

int main()
{
    int x, a = 2, b = 3, c = 5;
    x = a + b * c;
    printf("The value of x is %d\n", x);
    return 0;
}
