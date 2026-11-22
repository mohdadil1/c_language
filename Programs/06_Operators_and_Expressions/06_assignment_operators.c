/* Topic: Operators - assignment and compound assignment */
#include <stdio.h>

int main()
{
    int x = 10, a, b, c;
    x += 5;  printf("x += 5  -> %d\n", x);
    x -= 3;  printf("x -= 3  -> %d\n", x);
    x *= 2;  printf("x *= 2  -> %d\n", x);
    x /= 4;  printf("x /= 4  -> %d\n", x);
    x %= 4;  printf("x %%= 4  -> %d\n", x);

    a = b = c = 7;   /* chained assignment (right to left) */
    printf("a = b = c = 7 -> %d %d %d\n", a, b, c);
    return 0;
}
