/* Topic: Control Statements - if-else (choosing between two paths) */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is EVEN\n", n);
    else
        printf("%d is ODD\n", n);
    return 0;
}
