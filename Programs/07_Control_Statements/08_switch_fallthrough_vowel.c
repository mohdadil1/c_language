/* Topic: Control Statements - switch fall-through (cases without break share code) */
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf(" %c", &ch);

    switch (ch) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("%c is a vowel\n", ch);
        break;
    default:
        printf("%c is a consonant (or not a letter)\n", ch);
    }
    return 0;
}
