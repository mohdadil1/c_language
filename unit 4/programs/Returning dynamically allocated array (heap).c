// return_heap_array.c
#include <stdio.h>
#include <stdlib.h>

int *make_sequence(int n) {
    int *arr = malloc(n * sizeof *arr);
    if (!arr) return NULL;
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    return arr;
}

int main(void) {
    int n = 5;
    int *seq = make_sequence(n);
    if (!seq) return 1;
    for (int i = 0; i < n; i++) printf("%d ", seq[i]);
    free(seq);
    return 0;
}
// This program defines a function 'make_sequence' that dynamically allocates an array
// of integers from 1 to n and returns a pointer to the array.
// The 'main' function calls 'make_sequence', prints the array elements, and frees the allocated memory.