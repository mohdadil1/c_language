/* Topic: Operators - arithmetic + - * / % */
#include <stdio.h>

int main()
{
    int a = 17, b = 5;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d   (integer division)\n", a / b);
    printf("a %% b = %d   (remainder)\n", a % b);
    printf("17.0 / 5 = %.2f\n", 17.0 / 5);
    printf("-17 %% 5 = %d (sign follows the left operand)\n", -17 % 5);
    return 0;
}
