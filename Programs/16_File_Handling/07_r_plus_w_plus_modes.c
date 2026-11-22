/* Topic: File Handling - r+ and w+ modes (read and write on the same file)
   w+ : creates/empties the file, then allows read and write
   r+ : file must already exist, keeps its content, read and write       */
#include <stdio.h>

int main()
{
    FILE *fp;
    char buf[100];

    fp = fopen("modes.txt", "w+");
    if (fp == NULL)
        return 1;
    fputs("Written with w+\n", fp);
    rewind(fp);                         /* go back to the start to read */
    fgets(buf, sizeof(buf), fp);
    printf("Read back (w+): %s", buf);
    fclose(fp);

    fp = fopen("modes.txt", "r+");
    if (fp == NULL)
        return 1;
    fgets(buf, sizeof(buf), fp);
    printf("Existing (r+) : %s", buf);
    fseek(fp, 0, SEEK_SET);
    fputs("OVER", fp);                  /* overwrite the first 4 characters */
    rewind(fp);
    fgets(buf, sizeof(buf), fp);
    printf("After r+ write: %s", buf);
    fclose(fp);
    return 0;
}
