/* Topic: Pointers - pointer arithmetic (p + 1 moves by sizeof(type) bytes) */
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;            /* same as &arr[0] */
    int *q = &arr[4];
    int i;

    for (i = 0; i < 5; i++)
        printf("p + %d = %p, *(p + %d) = %d\n", i, (void *)(p + i), i, *(p + i));

    p++;
    printf("After p++, *p = %d\n", *p);
    printf("q - p = %td elements apart\n", q - p);
    printf("arr[2] == *(arr + 2) == %d\n", *(arr + 2));
    return 0;
}
