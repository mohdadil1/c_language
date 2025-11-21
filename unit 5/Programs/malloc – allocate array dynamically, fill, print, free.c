// prog6_malloc_int_array.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    int *ptr;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not available.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("You entered: ");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);  // release memory
    return 0;
}
// This program dynamically allocates an array of integers, fills it with user input, prints the values, and then frees the allocated memory.
// This program dynamically allocates an array of integers, fills it with user input, prints the values, and then frees the allocated memory.
// Compile with: gcc -std=c11 -o prog6_malloc_int_array prog6_malloc_int_array.c
// Run with: ./prog6_malloc_int_array
// Example input/output:
// Enter number of integers: 5
// Enter 5 integers:
// 10 20 30 40 50
// You entered: 10 20 30 40 50
// This program dynamically allocates an array of integers, fills it with user input, prints the values, and then frees the allocated memory.
//