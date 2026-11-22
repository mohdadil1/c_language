/* Topic: Arrays - linear search */
#include <stdio.h>

int main()
{
    int arr[] = {14, 7, 23, 9, 31, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, i, found = -1;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("%d found at index %d (position %d)\n", key, found, found + 1);
    else
        printf("%d not found\n", key);
    return 0;
}
