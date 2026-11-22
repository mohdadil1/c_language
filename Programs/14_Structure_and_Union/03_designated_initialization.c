/* Topic: Structure - designated initialization (members in any order, C99) */
#include <stdio.h>

struct abc {
    int x;
    int y;
    int z;
};

int main()
{
    struct abc a = {10, 20, 30};              /* positional: order x, y, z */
    struct abc b = {.z = 3, .x = 1, .y = 2};  /* designated: any order     */
    struct abc c = {.y = 50};                 /* others become 0           */

    printf("a: x=%d y=%d z=%d\n", a.x, a.y, a.z);
    printf("b: x=%d y=%d z=%d\n", b.x, b.y, b.z);
    printf("c: x=%d y=%d z=%d\n", c.x, c.y, c.z);
    return 0;
}
