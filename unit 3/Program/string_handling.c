//reverse a string in place without user defined functions 
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards middle
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

