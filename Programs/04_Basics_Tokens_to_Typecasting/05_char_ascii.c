/* Topic: Data Types - char is stored as an ASCII number */
#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("%c\n", ch);        /* as a character        -> A  */
    printf("%d\n", ch);        /* as its ASCII value    -> 65 */
    printf("%c\n", ch + 32);   /* lowercase letter      -> a  */
    printf("%c\n", ch + 1);    /* next letter           -> B  */
    return 0;
}
