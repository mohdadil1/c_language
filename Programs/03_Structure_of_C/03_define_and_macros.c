/* Topic: Structure of C - Preprocessor: #define constants and macros */
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    printf("PI          = %f\n", PI);
    printf("SQUARE(5)   = %d\n", SQUARE(5));
    printf("SQUARE(2+3) = %d\n", SQUARE(2 + 3));   /* brackets keep it 25 */
    printf("MAX(4, 9)   = %d\n", MAX(4, 9));
    return 0;
}
