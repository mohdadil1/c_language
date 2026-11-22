/* Topic: DMA - practice: sum of n numbers using malloc */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    long sum = 0;
    int *a;

    printf("Enter n: ");
    scanf("%d", &n);
    if (n <= 0)
        return 1;

    a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Out of memory\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);             /* a[i] works on heap memory too */
        sum += a[i];
    }
    printf("Sum = %ld\n", sum);

    free(a);
    return 0;
}
