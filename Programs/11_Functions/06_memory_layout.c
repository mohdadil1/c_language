/* Topic: Functions - memory layout of a C program
   Text (code) | Data (initialised globals/static) | BSS (uninitialised)
   | Heap (malloc, grows up) ... Stack (locals, grows down)              */
#include <stdio.h>
#include <stdlib.h>

int initGlobal = 10;        /* data segment */
int uninitGlobal;           /* BSS segment  */

int main()
{
    static int st = 5;      /* data segment */
    int local = 1;          /* stack        */
    int *heap = (int *)malloc(sizeof(int));   /* heap */
    if (heap == NULL)
        return 1;

    printf("Code  (main)       : %p\n", (void *)main);
    printf("Data  (initGlobal) : %p\n", (void *)&initGlobal);
    printf("Data  (static st)  : %p\n", (void *)&st);
    printf("BSS   (uninit)     : %p\n", (void *)&uninitGlobal);
    printf("Heap  (malloc)     : %p\n", (void *)heap);
    printf("Stack (local)      : %p\n", (void *)&local);

    free(heap);
    return 0;
}
