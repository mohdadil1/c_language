/* Topic: Arrays - insert an element at a given position */
#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, value, i;

    printf("Enter position (1 to %d) and value: ", n + 1);
    scanf("%d %d", &pos, &value);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 1;
    }

    for (i = n; i >= pos; i--)      /* shift elements right */
        arr[i] = arr[i - 1];
    arr[pos - 1] = value;
    n++;

    printf("After insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
