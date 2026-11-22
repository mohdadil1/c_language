/* Topic: Strings - reading strings with scanf and fgets
   gets() is unsafe (no size limit) and was removed in C11 - use fgets(). */
#include <stdio.h>
#include <string.h>

int main()
{
    char word[30], line[100];

    printf("Enter one word: ");
    scanf("%29s", word);            /* stops at first space; no & for arrays */
    getchar();                      /* remove the leftover newline */

    printf("Enter a full line: ");
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';   /* remove the newline fgets keeps */

    printf("Word: %s\nLine: %s\n", word, line);
    return 0;
}
