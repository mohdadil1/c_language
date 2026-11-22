/* Topic: Command Line Arguments - display a file given on the command line
   Run: ./showfile notes.txt                                            */
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]);
        return 1;
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        perror(argv[1]);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
