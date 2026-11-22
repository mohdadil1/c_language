/* Topic: Constants - values that never change */
#include <stdio.h>
#define PI 3.14159                 /* symbolic constant */

int main()
{
    const int MAX = 100;           /* const qualifier   */
    /* MAX = 200;                     ERROR: read-only   */

    printf("Integer constants : %d %o %x\n", 25, 025, 0x25);  /* decimal, octal, hex */
    printf("Real constants    : %f %e\n", 3.5, 2.5e3);
    printf("Char constant     : %c\n", 'Z');
    printf("String constant   : %s\n", "Hello");
    printf("Escape sequences  : tab\t[\t] newline\n\n");
    printf("PI = %f, MAX = %d\n", PI, MAX);
    return 0;
}
