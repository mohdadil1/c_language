/* Topic: File Handling - fputc writes one character at a time */
#include <stdio.h>

int main()
{
    FILE *fp = fopen("chars.txt", "w");
    const char *msg = "Hello from fputc!\n";
    int i;

    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }
    for (i = 0; msg[i] != '\0'; i++)
        fputc(msg[i], fp);

    fclose(fp);
    printf("Written to chars.txt\n");
    return 0;
}
