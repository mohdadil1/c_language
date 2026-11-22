/* Topic: Pointers - application: sum of array elements using a pointer */
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    int *p = a;

    printf("How many elements (max 100)? ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 1;

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);             /* p + i is the address of a[i] */

    for (i = 0; i < n; i++)
        sum += *(p + i);

    printf("Sum = %d\n", sum);
    return 0;
}
