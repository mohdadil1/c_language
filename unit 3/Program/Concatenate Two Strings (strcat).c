#include <stdio.h>
#include <string.h>

int main() {
    char a[50] = "Hello ";
    char b[20] = "World";

    strcat(a, b);
    printf("%s", a);

    return 0;
}
// Program to concatenate two strings using strcat