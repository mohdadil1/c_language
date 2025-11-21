// return_pointer.c
#include <stdio.h>

int *find_mid(int arr[], int n) {
    return &arr[n / 2];
}

int main(void) {
    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = find_mid(a, n);
    printf("Middle element = %d\n", *mid);
    return 0;
}
// This program defines a function 'find_mid' that takes an array and its size as arguments,
// and returns a pointer to the middle element of the array.