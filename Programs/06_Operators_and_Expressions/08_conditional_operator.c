/* Topic: Operators - conditional (ternary) operator ?: */
#include <stdio.h>

int main()
{
    int a = 15, b = 25;
    int max = (a > b) ? a : b;
    printf("Max of %d and %d = %d\n", a, b, max);
    printf("%d is %s\n", a, (a % 2 == 0) ? "even" : "odd");
    return 0;
}
