#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Programming";
    char dst[6];

    strncpy(dst, src, sizeof(dst) - 1);
    dst[5] = '\0';

    printf("Copied safely: %s", dst);
    return 0;
}
// Program to safely copy a string using strncpy