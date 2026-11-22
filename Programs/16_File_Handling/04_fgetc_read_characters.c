/* Topic: File Handling - fgetc reads one character at a time until EOF
   (run 03_fputs_write_lines first to create lines.txt)                  */
#include <stdio.h>

int main()
{
    FILE *fp = fopen("lines.txt", "r");
    int ch, count = 0;

    if (fp == NULL) {
        printf("Cannot open lines.txt\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {   /* ch is int so it can hold EOF */
        putchar(ch);
        count++;
    }
    fclose(fp);
    printf("\nTotal characters = %d\n", count);
    return 0;
}
