/* Topic: Control Statements - ?: short-hand decision (max of two / three) */
#include <stdio.h>

int main()
{
    int a, b, c, max2, max3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max2 = (a > b) ? a : b;
    max3 = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Max of first two = %d\n", max2);
    printf("Max of all three = %d\n", max3);
    return 0;
}
