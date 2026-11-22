/* Topic: Loops - continue (skip the rest of this iteration) */
#include <stdio.h>

int main()
{
    int i;
    printf("1 to 10 without 5: ");
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            continue;
        printf("%d ", i);
    }

    printf("\nOdd numbers 1 to 15: ");
    for (i = 1; i <= 15; i++) {
        if (i % 2 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
