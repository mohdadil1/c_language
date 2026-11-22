/* Topic: Input/Output - pitfall: always check the return value of scanf */
#include <stdio.h>

int main()
{
    int a, b, n;
    printf("Enter two integers: ");
    n = scanf("%d %d", &a, &b);   /* returns how many values were read */

    if (n == 2)
        printf("Sum = %d\n", a + b);
    else
        printf("Invalid input! scanf read only %d value(s).\n", n);
    return 0;
}
