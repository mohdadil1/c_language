/* Topic: Typecasting - explicit conversion using (type) */
#include <stdio.h>

int main()
{
    int sum = 17, count = 5;

    float wrong = sum / count;            /* integer division -> 3.00 */
    float right = (float)sum / count;     /* cast first       -> 3.40 */

    printf("Without cast: %.2f\n", wrong);
    printf("With cast   : %.2f\n", right);
    printf("(int)7.9    = %d\n", (int)7.9);
    printf("(char)97    = %c\n", (char)97);
    return 0;
}
