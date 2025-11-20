#include <stdio.h>

int main() {
    int arr[5], max;
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Maximum = %d", max);
    return 0;
}
// Program to find the maximum element in an array of 5 numbers