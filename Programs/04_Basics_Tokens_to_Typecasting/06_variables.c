/* Topic: Variables - named memory locations (declare, initialise, update) */
#include <stdio.h>

int main()
{
    int marks;              /* declaration          */
    marks = 85;             /* assignment           */
    float price = 99.5f;    /* declaration + init   */
    int a, b = 2, c = 3;    /* many in one line     */

    a = b + c;
    marks = marks + 5;      /* value can change     */

    printf("marks = %d, price = %.2f, a = %d\n", marks, price, a);
    printf("address of marks = %p\n", (void *)&marks);
    return 0;
}
