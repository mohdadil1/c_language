/* Topic: Arrays - 2-D array: declare, access and print as a matrix */
#include <stdio.h>

int main()
{
    int m[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int i, j;

    printf("m[1][2] = %d\n", m[1][2]);
    printf("Matrix (3 rows x 4 columns):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
    printf("Size of m = %zu bytes (3 * 4 * %zu)\n", sizeof(m), sizeof(int));
    return 0;
}
