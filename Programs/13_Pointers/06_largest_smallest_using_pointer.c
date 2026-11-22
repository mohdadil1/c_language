/* Topic: Pointers - application: largest and smallest element using a pointer */
#include <stdio.h>

void findMinMax(int *arr, int n, int *min, int *max)
{
    int i;
    *min = *max = *arr;
    for (i = 1; i < n; i++) {
        if (*(arr + i) > *max) *max = *(arr + i);
        if (*(arr + i) < *min) *min = *(arr + i);
    }
}

int main()
{
    int a[] = {34, 7, 91, 15, 62};
    int min, max;
    findMinMax(a, 5, &min, &max);       /* two results returned via pointers */
    printf("Largest = %d, Smallest = %d\n", max, min);
    return 0;
}
