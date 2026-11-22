/* Topic: Loops - break (leave the loop immediately) */
#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 7)
            break;              /* stop when i becomes 7 */
        printf("%d ", i);
    }
    printf("\nLoop stopped at i = %d\n", i);
    return 0;
}
