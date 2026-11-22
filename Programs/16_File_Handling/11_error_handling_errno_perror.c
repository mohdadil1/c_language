/* Topic: File Handling - error handling with errno, perror(), strerror()
   and exit status EXIT_SUCCESS / EXIT_FAILURE                           */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("this_file_does_not_exist.txt", "r");

    if (fp == NULL) {
        printf("errno value      : %d\n", errno);
        perror("perror says      ");
        printf("strerror(errno)  : %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}
