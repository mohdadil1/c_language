/* Topic: Pointers - declaring and initialising pointers of different types */
#include <stdio.h>

int main()
{
    int i = 10;
    float f = 2.5f;
    char c = 'Z';

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;
    int *pn = NULL;          /* a pointer that points nowhere (safe default) */

    printf("*pi = %d, *pf = %.1f, *pc = %c\n", *pi, *pf, *pc);
    printf("sizeof(int*) = %zu, sizeof(char*) = %zu (all pointers same size)\n",
           sizeof(pi), sizeof(pc));
    if (pn == NULL)
        printf("pn is NULL - never dereference it!\n");
    return 0;
}
