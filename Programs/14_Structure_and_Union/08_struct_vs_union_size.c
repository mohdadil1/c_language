/* Topic: Union - deciding the size: size of union = size of its largest member
   (a struct needs space for ALL members, plus possible padding)
   Note: here the largest member is char[20], but the union prints 24 bytes,
   because it is rounded up to a multiple of 8 so the double stays aligned. */
#include <stdio.h>

struct sabc {
    int x;
    float y;
    char z[20];
    double d;
};

union uabc {
    int x;
    float y;
    char z[20];
    double d;
};

int main()
{
    printf("sizeof(int)=%zu float=%zu char[20]=%zu double=%zu\n",
           sizeof(int), sizeof(float), sizeof(char[20]), sizeof(double));
    printf("sizeof(struct sabc) = %zu\n", sizeof(struct sabc));
    printf("sizeof(union  uabc) = %zu\n", sizeof(union uabc));
    return 0;
}
