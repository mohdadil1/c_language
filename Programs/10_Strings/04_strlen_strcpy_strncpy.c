/* Topic: Strings - strlen, strcpy, strncpy */
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Programming";
    char dest[20], part[10];

    printf("strlen(\"%s\") = %zu\n", src, strlen(src));

    strcpy(dest, src);
    printf("strcpy  -> dest = %s\n", dest);

    strncpy(part, src, 7);
    part[7] = '\0';                 /* strncpy may not add '\0' itself */
    printf("strncpy -> part = %s\n", part);
    return 0;
}
