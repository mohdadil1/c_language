/* Topic: Input/Output - printf and format specifiers */
#include <stdio.h>

int main()
{
    int i = 42;
    float f = 3.14159f;
    double d = 2.718281828;
    char c = 'K';
    char s[] = "BCA";

    printf("%%d  int        : %d\n", i);
    printf("%%f  float      : %f\n", f);
    printf("%%lf double     : %lf\n", d);
    printf("%%e  scientific : %e\n", d);
    printf("%%c  char       : %c\n", c);
    printf("%%s  string     : %s\n", s);
    printf("%%o  octal      : %o\n", i);
    printf("%%x  hex        : %x\n", i);
    printf("%%u  unsigned   : %u\n", 300u);
    return 0;
}
