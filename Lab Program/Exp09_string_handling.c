/* Experiment 9: String handling
   a. Write a function to reverse the string and display it.
   b. Write a function to concatenate the two strings without using strcat.
   c. Write a function to find the length of the string.                */
#include <stdio.h>

/* c. length of a string (without strlen) */
int stringLength(char str[])
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

/* a. reverse the string and display it */
void reverseString(char str[])
{
    int i = 0, j = stringLength(str) - 1;
    char temp;
    while (i < j) {                 /* swap from both ends */
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string     : %s\n", str);
}

/* b. concatenate src at the end of dest (without strcat) */
void concatenate(char dest[], char src[])
{
    int i = stringLength(dest), j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main()
{
    char str1[100], str2[50];

    printf("Enter first string : ");
    scanf("%49s", str1);
    printf("Enter second string: ");
    scanf("%49s", str2);

    /* c. length */
    printf("\nLength of \"%s\"   = %d\n", str1, stringLength(str1));
    printf("Length of \"%s\"   = %d\n", str2, stringLength(str2));

    /* b. concatenation */
    concatenate(str1, str2);
    printf("Concatenated string : %s\n", str1);

    /* a. reverse */
    reverseString(str1);
    return 0;
}

/* Sample output:
   Enter first string : Hello
   Enter second string: World

   Length of "Hello"   = 5
   Length of "World"   = 5
   Concatenated string : HelloWorld
   Reversed string     : dlroWolleH
*/
