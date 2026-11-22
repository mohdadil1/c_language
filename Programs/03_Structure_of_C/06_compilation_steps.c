/* Topic: Structure of C - Compilation: from .c file to running program

   Try these commands to see each stage:
     gcc -E 06_compilation_steps.c -o prog.i    (preprocess)
     gcc -S prog.i -o prog.s                    (compile to assembly)
     gcc -c prog.s -o prog.o                    (assemble to object code)
     gcc prog.o -o prog                         (link -> executable)
     ./prog                                     (run)                  */
#include <stdio.h>
#define MSG "Compiled, assembled, linked and running!"

int main()
{
    printf("%s\n", MSG);
    return 0;
}
