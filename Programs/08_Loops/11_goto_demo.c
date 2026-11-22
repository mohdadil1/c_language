/* Topic: Loops - goto (jump to a label). Use rarely; loops are clearer. */
#include <stdio.h>

int main()
{
    int i = 1;

start:
    printf("%d ", i);
    i++;
    if (i <= 5)
        goto start;         /* acts like a loop */

    printf("\n");

    /* common legitimate use: jumping out of nested loops */
    {
        int r, c;
        for (r = 1; r <= 3; r++)
            for (c = 1; c <= 3; c++) {
                if (r * c == 4)
                    goto found;
            }
        printf("Not found\n");
        return 0;
    found:
        printf("Found r * c == 4 at r = %d, c = %d\n", r, c);
    }
    return 0;
}
