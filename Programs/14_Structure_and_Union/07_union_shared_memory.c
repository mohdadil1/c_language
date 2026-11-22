/* Topic: Union - members share the SAME memory location.
   Changing one member changes what the others read.                     */
#include <stdio.h>

union abc {
    int x;
    char y;
};

int main()
{
    union abc u;

    u.x = 65;
    printf("After u.x = 65 : x = %d, y = %c\n", u.x, u.y);   /* y reads 'A' */

    u.y = 'B';
    printf("After u.y = 'B': x = %d, y = %c\n", u.x, u.y);   /* x changes too */

    printf("Address of u.x = %p\n", (void *)&u.x);
    printf("Address of u.y = %p (same!)\n", (void *)&u.y);
    return 0;
}
