/* Topic: Strings - length, copy and reverse WITHOUT library functions */
#include <stdio.h>

int main()
{
    char s[] = "Computer", copy[20], rev[20];
    int len = 0, i;

    while (s[len] != '\0')          /* length */
        len++;

    for (i = 0; i <= len; i++)      /* copy (including '\0') */
        copy[i] = s[i];

    for (i = 0; i < len; i++)       /* reverse */
        rev[i] = s[len - 1 - i];
    rev[len] = '\0';

    printf("Length  = %d\nCopy    = %s\nReverse = %s\n", len, copy, rev);
    return 0;
}
