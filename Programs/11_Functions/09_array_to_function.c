/* Topic: Functions - passing an array to a function */
#include <stdio.h>

int sumArray(int arr[], int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += arr[i];
    return s;
}

void doubleAll(int arr[], int n)        /* changes are seen by the caller */
{
    int i;
    for (i = 0; i < n; i++)
        arr[i] *= 2;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5}, i;
    printf("Sum = %d\n", sumArray(a, 5));
    doubleAll(a, 5);
    printf("After doubleAll: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
