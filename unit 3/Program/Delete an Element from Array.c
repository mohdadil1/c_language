#include <stdio.h>

int main() {
    int arr[6] = {5, 10, 15, 20, 25, 30};
    int n = 6, pos;

    printf("Enter position to delete (0–5): ");
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
// Program to delete an element from an array at a specified position