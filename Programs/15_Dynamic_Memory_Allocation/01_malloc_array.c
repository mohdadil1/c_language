/* Topic: DMA - malloc: allocate an array at run time, fill, print, free */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;

    printf("How many integers? ");
    scanf("%d", &n);
    if (n <= 0)
        return 1;

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {                  /* always check for NULL */
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", ptr + i);

    printf("You entered: ");
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    free(ptr);                          /* give memory back to the heap */
    ptr = NULL;                         /* avoid a dangling pointer */
    return 0;
}
