/* Topic: Operators - logical && || ! and short-circuit evaluation */
#include <stdio.h>

int main()
{
    int age = 20, marks = 75, x = 0;

    printf("age >= 18 && marks >= 60 : %d\n", age >= 18 && marks >= 60);
    printf("age < 18  || marks >= 90 : %d\n", age < 18 || marks >= 90);
    printf("!(age >= 18)             : %d\n", !(age >= 18));

    /* short-circuit: right side is NOT evaluated when the result is already known */
    if (0 && ++x)
        printf("never printed\n");
    printf("After 0 && ++x, x = %d (++x never ran)\n", x);
    return 0;
}
