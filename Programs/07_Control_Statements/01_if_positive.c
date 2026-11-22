/* Topic: Control Statements - simple if */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("%d is positive\n", n);

    printf("Program over\n");
    return 0;
}
