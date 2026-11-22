/* Topic: Loops - nested loops (patterns) */
#include <stdio.h>

int main()
{
    int i, j, n = 5;

    printf("Right triangle of stars:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\nNumber triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\nPyramid:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
