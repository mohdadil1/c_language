/* Topic: File Handling - copy one file into another and count lines
   (run 03_fputs_write_lines first to create lines.txt)                  */
#include <stdio.h>

int main()
{
    FILE *src = fopen("lines.txt", "r");
    FILE *dst;
    int ch, lines = 0;

    if (src == NULL) {
        perror("lines.txt");
        return 1;
    }
    dst = fopen("lines_copy.txt", "w");
    if (dst == NULL) {
        perror("lines_copy.txt");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
        if (ch == '\n')
            lines++;
    }
    fclose(src);
    fclose(dst);
    printf("Copied %d lines to lines_copy.txt\n", lines);
    return 0;
}
