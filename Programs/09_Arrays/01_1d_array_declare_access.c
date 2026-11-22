/* Topic: Arrays - 1-D array: declare, initialise, access */
#include <stdio.h>

int main()
{
    int marks[5] = {78, 85, 90, 66, 72};   /* declaration + initialisation */
    int a[5] = {1, 2};                     /* rest become 0               */
    int b[] = {10, 20, 30};                /* size taken from the list    */
    int i;

    printf("marks[0] = %d, marks[4] = %d\n", marks[0], marks[4]);
    marks[2] = 95;                         /* change one element          */

    printf("marks : ");
    for (i = 0; i < 5; i++)
        printf("%d ", marks[i]);
    printf("\na     : ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\nb has %zu elements\n", sizeof(b) / sizeof(b[0]));
    return 0;
}
