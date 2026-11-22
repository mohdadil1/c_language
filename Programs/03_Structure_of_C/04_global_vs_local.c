/* Topic: Structure of C - Global declaration section and main() */
#include <stdio.h>

int g = 100;            /* global: visible to every function */

void show()
{
    printf("Inside show(): g = %d\n", g);
}

int main()
{
    int l = 5;          /* local: visible only inside main() */
    printf("Inside main(): g = %d, l = %d\n", g, l);
    g = 200;
    show();
    return 0;
}
