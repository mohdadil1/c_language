/* Topic: Loops - while (check first, then run) */
#include <stdio.h>

int main()
{
    int i = 1;              /* 1. initialise */
    while (i <= 10) {       /* 2. test       */
        printf("%d ", i);
        i++;                /* 3. update     */
    }
    printf("\n");
    return 0;
}
