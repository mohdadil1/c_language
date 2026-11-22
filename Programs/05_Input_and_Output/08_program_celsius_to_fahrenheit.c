/* Topic: Input/Output - complete program: temperature conversion */
#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("%.2f C = %.2f F\n", c, f);
    return 0;
}
