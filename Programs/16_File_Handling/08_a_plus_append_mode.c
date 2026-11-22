/* Topic: File Handling - a+ mode: read and APPEND (writes always go to the end) */
#include <stdio.h>

int main()
{
    FILE *fp = fopen("log.txt", "a+");
    char line[100];

    if (fp == NULL) {
        printf("Cannot open log.txt\n");
        return 1;
    }
    fputs("New entry added\n", fp);     /* appended at the end */

    rewind(fp);                         /* reading may start anywhere */
    printf("Contents of log.txt (grows each run):\n");
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("  %s", line);
    fclose(fp);
    return 0;
}
