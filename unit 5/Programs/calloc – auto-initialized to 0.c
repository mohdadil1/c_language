// prog7_calloc_demo.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5, i;
    int *ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not available.\n");
        return 1;
    }

    printf("Values after calloc (should be 0): ");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
// This program demonstrates the use of calloc to allocate an array of integers initialized to 0.
// Compile with: gcc -std=c11 -o prog7_calloc_demo prog7_calloc_demo.c
// Run with: ./prog7_calloc_demo
// Example output:
// Values after calloc (should be 0): 0 0 0 0 0
// This program demonstrates the use of calloc to allocate an array of integers initialized to 0.