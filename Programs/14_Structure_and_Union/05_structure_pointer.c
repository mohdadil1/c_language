/* Topic: Structure - accessing members using a structure pointer
   (*ptr).x and ptr->x are the same.  *ptr.x is WRONG because . has higher
   precedence than *, so it means *(ptr.x).                               */
#include <stdio.h>

struct abc {
    int x;
    int y;
};

int main()
{
    struct abc a = {5, 9};
    struct abc *ptr = &a;

    printf("(*ptr).x = %d, (*ptr).y = %d\n", (*ptr).x, (*ptr).y);
    printf("ptr->x   = %d, ptr->y   = %d\n", ptr->x, ptr->y);

    ptr->x = 50;                        /* modify through the pointer */
    printf("After ptr->x = 50, a.x = %d\n", a.x);
    return 0;
}
