/* Topic: Control Statements - decisions using ASCII values of characters */
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter, lowercase is %c\n", ch + 32);
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase letter, uppercase is %c\n", ch - 32);
    else if (ch >= '0' && ch <= '9')
        printf("Digit, numeric value %d\n", ch - '0');
    else
        printf("Special character (ASCII %d)\n", ch);
    return 0;
}
