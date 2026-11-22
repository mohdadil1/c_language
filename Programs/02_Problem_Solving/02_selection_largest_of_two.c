/* Topic: Problem Solving - SELECTION (choose one path)
   Pseudocode:
   READ a, b
   IF a > b THEN PRINT a ELSE PRINT b                                  */
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Largest = %d\n", a);
    else
        printf("Largest = %d\n", b);
    return 0;
}
