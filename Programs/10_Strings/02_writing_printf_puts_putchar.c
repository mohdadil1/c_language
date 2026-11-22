/* Topic: Strings - writing strings with printf, puts, putchar */
#include <stdio.h>

int main()
{
    char name[] = "Dennis Ritchie";
    int i;

    printf("printf : %s\n", name);
    printf("printf (first 6 chars): %.6s\n", name);

    printf("puts   : ");
    puts(name);                 /* adds a newline automatically */

    printf("putchar: ");
    for (i = 0; name[i] != '\0'; i++)
        putchar(name[i]);
    putchar('\n');
    return 0;
}
