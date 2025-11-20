#include <stdio.h>
#include <string.h>

int main() {
    char a[10] = "Hi";
    char b[] = "There";

    strncat(a, b, sizeof(a) - strlen(a) - 1);

    printf("%s", a);
    return 0;
}
// Program to safely concatenate two strings using strncat