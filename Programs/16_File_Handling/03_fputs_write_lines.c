/* Topic: File Handling - fputs writes a whole string */
#include <stdio.h>

int main()
{
    FILE *fp = fopen("lines.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }
    fputs("Line 1: C was created by Dennis Ritchie\n", fp);
    fputs("Line 2: at Bell Labs in 1972\n", fp);
    fputs("Line 3: UNIX was rewritten in C\n", fp);
    fclose(fp);
    printf("Written to lines.txt\n");
    return 0;
}
