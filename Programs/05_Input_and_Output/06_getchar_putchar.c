/* Topic: Input/Output - character I/O with getchar() and putchar() */
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    putchar('\n');
    printf("Its ASCII value is %d\n", ch);
    return 0;
}
