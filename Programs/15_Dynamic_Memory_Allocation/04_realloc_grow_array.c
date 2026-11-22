/* Topic: DMA - realloc: change the size of a block WITHOUT losing old data.
   Safe way: store the result in a temporary pointer first, so the old
   block is not lost if realloc fails and returns NULL.                  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr, *temp;

    ptr = (int *)malloc(2 * sizeof(int));
    if (ptr == NULL)
        return 1;
    ptr[0] = 5;
    ptr[1] = 7;
    printf("Before realloc (address %p): %d %d\n", (void *)ptr, ptr[0], ptr[1]);

    temp = (int *)realloc(ptr, 4 * sizeof(int));
    if (temp == NULL) {
        printf("realloc failed, old data is still safe\n");
        free(ptr);
        return 1;
    }
    ptr = temp;
    ptr[2] = 9;
    ptr[3] = 11;

    printf("After realloc  (address %p): ", (void *)ptr);
    for (i = 0; i < 4; i++)
        printf("%d ", ptr[i]);
    printf("\n");

    free(ptr);
    return 0;
}
