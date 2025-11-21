// array_sum_fn.c
#include <stdio.h>

int sum_array(int *arr, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return s;
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Sum = %d\n", sum_array(a, n));
    return 0;
}
// This program defines a function 'sum_array' that takes an array and its size as arguments,
// calculates the sum of the array elements, and returns the sum to the caller.