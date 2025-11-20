#include <stdio.h>

int main() {
    int arr[5], key;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }

    printf("Not found.\n");
    return 0;
}
// Program to perform linear search in an array of 5 numbers