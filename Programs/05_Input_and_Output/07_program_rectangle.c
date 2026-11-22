/* Topic: Input/Output - complete program: area & perimeter of a rectangle */
#include <stdio.h>

int main()
{
    float l, b;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area      = %.2f\n", l * b);
    printf("Perimeter = %.2f\n", 2 * (l + b));
    return 0;
}
