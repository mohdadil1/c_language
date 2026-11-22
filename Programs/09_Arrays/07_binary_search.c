/* Topic: Arrays - binary search (array must be sorted) */
#include <stdio.h>

int main()
{
    int arr[] = {3, 8, 12, 19, 25, 33, 47, 58};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, low = 0, high = n - 1, mid, found = -1;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found != -1)
        printf("%d found at index %d\n", key, found);
    else
        printf("%d not found\n", key);
    return 0;
}
