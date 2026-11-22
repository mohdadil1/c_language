/* Topic: Command Line Arguments - converting arguments to numbers with atoi
   Run: ./sum 10 20 30   ->  Sum = 60                                    */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;

    if (argc < 2) {                     /* common mistake: not checking argc */
        printf("Usage: %s num1 num2 ...\n", argv[0]);
        return 1;
    }
    for (i = 1; i < argc; i++)          /* start at 1: skip program name */
        sum += atoi(argv[i]);
    printf("Sum = %d\n", sum);
    return 0;
}
