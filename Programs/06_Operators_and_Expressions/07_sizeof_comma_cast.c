/* Topic: Operators - sizeof, comma and cast operators */
#include <stdio.h>

int main()
{
    int x, y;
    double d = 9.99;

    printf("sizeof(int) = %zu, sizeof d = %zu\n", sizeof(int), sizeof d);

    x = (y = 3, y + 2);           /* comma: evaluate left to right, keep the last value */
    printf("x = (y = 3, y + 2) -> x = %d\n", x);

    printf("(int)d = %d\n", (int)d);
    return 0;
}
