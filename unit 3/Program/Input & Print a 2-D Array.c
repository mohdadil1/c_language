#include <stdio.h>

int main() {
    int a[2][3];

    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
// Program to input and print a 2-D array of size 2x3