/* Topic: Command Line Arguments - what argc and argv hold
   argc = number of arguments (program name counts as 1)
   argv = array of strings; argv[0] is the program name

   Compile : gcc 01_print_argc_argv.c -o args
   Run     : ./args hello BCA 2026                                       */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("argc = %d\n", argc);
    for (i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);
    return 0;
}
