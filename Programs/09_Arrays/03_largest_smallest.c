/* Topic: Arrays - largest and smallest element */
#include <stdio.h>

int main()
{
    int arr[] = {45, 12, 89, 3, 67, 29};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, max = arr[0], min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Largest = %d, Smallest = %d\n", max, min);
    return 0;
}
