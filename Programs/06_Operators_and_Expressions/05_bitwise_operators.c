/* Topic: Operators - bitwise & | ^ ~ << >> */
#include <stdio.h>

void printBinary(unsigned int n)
{
    int i;
    for (i = 7; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main()
{
    unsigned int a = 12, b = 10;   /* 00001100 and 00001010 */

    printf("a      = "); printBinary(a);      printf(" (%u)\n", a);
    printf("b      = "); printBinary(b);      printf(" (%u)\n", b);
    printf("a & b  = "); printBinary(a & b);  printf(" (%u)\n", a & b);
    printf("a | b  = "); printBinary(a | b);  printf(" (%u)\n", a | b);
    printf("a ^ b  = "); printBinary(a ^ b);  printf(" (%u)\n", a ^ b);
    printf("~a     = "); printBinary(~a);     printf(" (low 8 bits)\n");
    printf("a << 1 = "); printBinary(a << 1); printf(" (%u)\n", a << 1);
    printf("a >> 2 = "); printBinary(a >> 2); printf(" (%u)\n", a >> 2);
    return 0;
}
