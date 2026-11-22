/* Topic: DMA - calloc: allocates multiple blocks and sets them to ZERO
   malloc(n * size)  -> memory has garbage values
   calloc(n, size)   -> memory is initialised to 0                       */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, i;
    int *c = (int *)calloc(n, sizeof(int));
    if (c == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("calloc values (always 0): ");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");

    for (i = 0; i < n; i++)
        c[i] = (i + 1) * 10;
    printf("After filling           : ");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
    printf("\n");

    free(c);
    return 0;
}
