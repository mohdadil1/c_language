/* Topic: Loops - difference between while and do-while */
#include <stdio.h>

int main()
{
    int i = 10;

    while (i < 5) {
        printf("while: %d\n", i);       /* never runs: condition false */
    }

    do {
        printf("do-while: %d\n", i);    /* runs once even though false */
    } while (i < 5);

    return 0;
}
