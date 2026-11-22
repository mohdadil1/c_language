/* Topic: Arrays - 2-D array: transpose of a matrix */
#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int t[3][2], i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            t[j][i] = a[i][j];

    printf("Transpose:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%4d", t[i][j]);
        printf("\n");
    }
    return 0;
}
