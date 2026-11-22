/* Topic: Loops - for loop (count a fixed number of times) */
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
        printf("%d x %2d = %d\n", n, i, n * i);
    return 0;
}
