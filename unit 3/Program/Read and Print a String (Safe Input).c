#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    scanf("%19s", name);

    printf("You entered: %s", name);
    return 0;
}
// Program to read and print a string (safe input)