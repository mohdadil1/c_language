#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, value;

    printf("Enter position (0-5): ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
// Program to insert an element in an array at a specified position