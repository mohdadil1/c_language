/* Topic: Arrays - 2-D array: addition of two matrices */
#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int c[2][3], i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("A + B =\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", c[i][j]);
        printf("\n");
    }
    return 0;
}
