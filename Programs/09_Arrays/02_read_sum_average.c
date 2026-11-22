/* Topic: Arrays - read n elements, find sum and average (traversal) */
#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;
    printf("How many elements (max 100)? ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 1;

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / n);
    return 0;
}
