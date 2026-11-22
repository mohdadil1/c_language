/* Topic: Functions - static local variable keeps its value between calls */
#include <stdio.h>

void counter(void)
{
    int normal = 0;             /* created fresh on every call */
    static int s = 0;           /* initialised once, lives for whole program */
    normal++;
    s++;
    printf("normal = %d, static = %d\n", normal, s);
}

int main()
{
    counter();
    counter();
    counter();
    return 0;
}
