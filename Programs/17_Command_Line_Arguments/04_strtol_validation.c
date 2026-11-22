/* Topic: Command Line Arguments - strtol: safer conversion that detects bad input
   atoi("12abc") silently gives 12 and atoi("abc") gives 0.
   strtol tells us where the number ended, so we can reject junk.
   Run: ./check 42   or   ./check 12abc   or   ./check ff 16             */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *end;
    long value;
    int base = 10;

    if (argc < 2) {
        printf("Usage: %s number [base]\n", argv[0]);
        return 1;
    }
    if (argc >= 3)
        base = atoi(argv[2]);

    value = strtol(argv[1], &end, base);
    if (end == argv[1] || *end != '\0') {
        printf("\"%s\" is not a valid base-%d number\n", argv[1], base);
        return 1;
    }
    printf("Valid number: %ld (decimal)\n", value);
    printf("Square      : %ld\n", value * value);
    return 0;
}
