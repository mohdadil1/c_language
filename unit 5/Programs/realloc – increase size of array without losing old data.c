// prog8_realloc_demo.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int *ptr = (int *)malloc(3 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not available.\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
        ptr[i] = (i + 1) * 10;   // 10, 20, 30

    printf("Before realloc: ");
    for (i = 0; i < 3; i++)
        printf("%d ", ptr[i]);

    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL) {
        printf("\nReallocation failed.\n");
        return 1;
    }

    ptr[3] = 40;
    ptr[4] = 50;

    printf("\nAfter realloc: ");
    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
// This program demonstrates the use of realloc to increase the size of an array without losing old data.
// Compile with: gcc -std=c11 -o prog8_realloc_demo prog8_realloc_demo.c
// Run with: ./prog8_realloc_demo
// Example output:
// Before realloc: 10 20 30
// After realloc: 10 20 30 40 50
// This program demonstrates the use of realloc to increase the size of an array without losing old data.