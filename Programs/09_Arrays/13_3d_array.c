/* Topic: Arrays - 3-D array (blocks x rows x columns) */
#include <stdio.h>

int main()
{
    int a[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },      /* block 0 */
        { {7, 8, 9}, {10, 11, 12} }    /* block 1 */
    };
    int i, j, k;

    for (i = 0; i < 2; i++) {
        printf("Block %d:\n", i);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++)
                printf("%4d", a[i][j][k]);
            printf("\n");
        }
    }
    printf("a[1][0][2] = %d\n", a[1][0][2]);
    printf("Total elements = %zu\n", sizeof(a) / sizeof(int));
    return 0;
}
