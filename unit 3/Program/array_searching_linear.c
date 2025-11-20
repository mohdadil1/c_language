//linear searching
#include <stdio.h>
int main() {
    int arr[100], n, i, target, found = 0;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Element %d found at position %d\n", target, i + 1);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    return 0;
}