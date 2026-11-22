/* Topic: File Handling - fgets reads a line at a time
   (run 03_fputs_write_lines first to create lines.txt)                  */
#include <stdio.h>

int main()
{
    FILE *fp = fopen("lines.txt", "r");
    char line[200];
    int n = 0;

    if (fp == NULL) {
        printf("Cannot open lines.txt\n");
        return 1;
    }
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%d> %s", ++n, line);
    fclose(fp);
    return 0;
}
