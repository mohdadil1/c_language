/* Topic: Arrays - delete an element from a given position */
#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, i;

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 1;
    }

    for (i = pos - 1; i < n - 1; i++)   /* shift elements left */
        arr[i] = arr[i + 1];
    n--;

    printf("After deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
