#include <stdio.h>

int main() {
    char str[50];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);
    return 0;
}
// Program to read full sentence using fgets (SAFE)