/* Experiment 3: Design a C program to implement the pyramid pattern using
   looping statements. */
#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)     /* leading spaces */
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)    /* stars          */
            printf("*");
        printf("\n");
    }
    return 0;
}

/* Sample output:
   Enter number of rows: 5
       *
      ***
     *****
    *******
   *********
*/
