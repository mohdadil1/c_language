/* Topic: Keywords vs Identifiers
   int float;   -> ERROR (float is a keyword)
   int Float;   -> valid (C is case sensitive)                          */
#include <stdio.h>

int main()
{
    int Float = 10;        /* identifier (not the keyword float) */
    int roll_no = 25;      /* letters, digits, underscore allowed */
    int _count = 3;        /* may start with underscore           */
    /* int 2nd = 5;           invalid: cannot start with a digit */

    printf("Float = %d, roll_no = %d, _count = %d\n", Float, roll_no, _count);
    return 0;
}
