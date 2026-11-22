/* Topic: Union - accessing members through a pointer with the arrow (->) operator */
#include <stdio.h>

union abc {
    int x;
    char y;
};

int main()
{
    union abc var;
    union abc *ptr = &var;

    var.x = 66;
    printf("ptr->x = %d, ptr->y = %c\n", ptr->x, ptr->y);

    ptr->y = 'C';
    printf("After ptr->y = 'C': var.y = %c, var.x = %d\n", var.y, var.x);
    return 0;
}
