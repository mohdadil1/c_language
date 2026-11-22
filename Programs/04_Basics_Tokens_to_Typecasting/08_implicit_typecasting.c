/* Topic: Typecasting - implicit (automatic) conversion */
#include <stdio.h>

int main()
{
    int i = 10;
    float f = 2.5f;
    char c = 'A';

    float r1 = i + f;    /* int promoted to float      -> 12.5 */
    int r2 = c + 1;      /* char promoted to int       -> 66   */
    int r3 = 9.87;       /* double -> int, fraction lost -> 9  */

    printf("i + f = %.2f\n", r1);
    printf("c + 1 = %d\n", r2);
    printf("int r3 = 9.87 -> %d\n", r3);
    return 0;
}
