// pointer_diff.c
#include <stdio.h>

int main(void) {
    int arr[8];
    int *p = &arr[2];
    int *q = &arr[6];
    printf("Distance = %td\n", q - p); // 4
    return 0;
}
// This program calculates the distance between two elements in an array
// using pointer subtraction and prints the result.