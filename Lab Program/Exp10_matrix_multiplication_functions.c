/* Experiment 10: Write a program to multiply two matrices using separate
   functions for input matrices, display matrix and main function. */
#include <stdio.h>
#define MAX 10

void inputMatrix(int m[MAX][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
}

void displayMatrix(int m[MAX][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%6d", m[i][j]);
        printf("\n");
    }
}

void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX],
                    int r1, int c1, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication not possible: columns of A must equal rows of B\n");
        return 0;
    }
    if (r1 < 1 || c1 < 1 || c2 < 1 || r1 > MAX || c1 > MAX || c2 > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("\nEnter elements of matrix A:\n");
    inputMatrix(a, r1, c1);
    printf("\nEnter elements of matrix B:\n");
    inputMatrix(b, r2, c2);

    multiplyMatrix(a, b, c, r1, c1, c2);

    printf("\nMatrix A:\n");
    displayMatrix(a, r1, c1);
    printf("\nMatrix B:\n");
    displayMatrix(b, r2, c2);
    printf("\nResult A x B:\n");
    displayMatrix(c, r1, c2);
    return 0;
}

/* Sample output (2x2 x 2x2):
   A = 1 2      B = 5 6      A x B = 19 22
       3 4          7 8              43 50
*/
