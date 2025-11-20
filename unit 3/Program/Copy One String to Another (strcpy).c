#include <stdio.h>
#include <string.h>

int main() {
    char src[20] = "Hello";
    char dest[20];

    strcpy(dest, src);
    printf("Copied string: %s", dest);

    return 0;
}
// Program to copy one string to another using strcpy