/* Topic: Operators - precedence (which goes first) and associativity */
#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2, d;

    d = a + b * c;              /* * before +        -> 10 + 10 = 20 */
    printf("a + b * c    = %d\n", d);

    d = (a + b) * c;            /* brackets first    -> 15 * 2 = 30  */
    printf("(a + b) * c  = %d\n", d);

    d = a - b - c;              /* left to right     -> (10-5)-2 = 3 */
    printf("a - b - c    = %d\n", d);

    d = 100 / 10 * 2;           /* left to right     -> 10 * 2 = 20  */
    printf("100 / 10 * 2 = %d\n", d);

    d = a > b && b > c;         /* relational before logical -> 1    */
    printf("a > b && b > c = %d\n", d);
    return 0;
}
