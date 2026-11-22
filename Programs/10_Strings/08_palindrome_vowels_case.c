/* Topic: Strings - palindrome check, vowel count, case conversion */
#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int i, len, isPal = 1, vowels = 0;

    printf("Enter a word: ");
    scanf("%49s", s);
    len = strlen(s);

    for (i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i]) {
            isPal = 0;
            break;
        }

    for (i = 0; i < len; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vowels++;
    }

    printf("%s %s a palindrome\n", s, isPal ? "is" : "is not");
    printf("Vowels = %d\n", vowels);

    for (i = 0; i < len; i++)               /* to uppercase using ASCII */
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    printf("Uppercase = %s\n", s);
    return 0;
}
