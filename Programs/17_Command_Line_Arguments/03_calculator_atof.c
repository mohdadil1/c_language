/* Topic: Command Line Arguments - calculator using atof
   Run: ./calc 12.5 x 4     (use x for multiply; * is expanded by the shell) */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double a, b;
    char op;

    if (argc != 4) {
        printf("Usage: %s num1 op num2   (op: + - x /)\n", argv[0]);
        return 1;
    }
    a = atof(argv[1]);
    op = argv[2][0];
    b = atof(argv[3]);

    switch (op) {
    case '+': printf("%.2f\n", a + b); break;
    case '-': printf("%.2f\n", a - b); break;
    case 'x': case '*': printf("%.2f\n", a * b); break;
    case '/':
        if (b == 0) {
            printf("Division by zero\n");
            return 1;
        }
        printf("%.2f\n", a / b);
        break;
    default:
        printf("Unknown operator %c\n", op);
        return 1;
    }
    return 0;
}
