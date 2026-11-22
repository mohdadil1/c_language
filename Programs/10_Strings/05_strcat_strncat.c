/* Topic: Strings - strcat and strncat (joining strings) */
#include <stdio.h>
#include <string.h>

int main()
{
    char first[40] = "Hello";
    char second[] = " World";
    char s[40] = "C";

    strcat(first, second);
    printf("strcat  -> %s\n", first);

    strncat(s, " Language and more", 9);   /* append only 9 characters */
    printf("strncat -> %s\n", s);
    return 0;
}
