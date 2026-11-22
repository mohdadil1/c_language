/* Experiment 11: Write a C program to print the diagonal elements of a matrix.
   Principal diagonal  : elements where i == j
   Secondary diagonal  : elements where i + j == n - 1                    */
#include <stdio.h>
#define MAX 10

int main()
{
    int m[MAX][MAX], n, i, j;

    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) {
        printf("n must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements:\n", n * n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }

    printf("\nPrincipal diagonal elements : ");
    for (i = 0; i < n; i++)
        printf("%d ", m[i][i]);

    printf("\nSecondary diagonal elements : ");
    for (i = 0; i < n; i++)
        printf("%d ", m[i][n - 1 - i]);
    printf("\n");
    return 0;
}

/* Sample output:
   Enter order of square matrix (n): 3
   Enter 9 elements:
   1 2 3 4 5 6 7 8 9

   Matrix:
       1    2    3
       4    5    6
       7    8    9

   Principal diagonal elements : 1 5 9
   Secondary diagonal elements : 3 5 7
*/
