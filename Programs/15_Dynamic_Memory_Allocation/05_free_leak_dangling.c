/* Topic: DMA - free(), memory leak and dangling pointer (shown safely) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));
    if (p == NULL)
        return 1;
    *p = 42;
    printf("*p = %d\n", *p);

    /* MEMORY LEAK would happen if we did:  p = NULL;  (before free)
       - the address is lost and the block can never be freed.          */

    free(p);            /* memory released ...                            */
    /* ... but p still holds the old address: p is now DANGLING.
       Using *p here would be undefined behaviour.                       */
    p = NULL;           /* fix: set to NULL after free                    */

    if (p == NULL)
        printf("p set to NULL after free - no dangling pointer\n");
    return 0;
}
