/* Topic: Control Statements - switch and break (simple calculator) */
#include <stdio.h>

int main()
{
    float a, b;
    char op;
    printf("Enter expression (e.g. 4 * 5): ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
    case '+':
        printf("Result = %.2f\n", a + b);
        break;
    case '-':
        printf("Result = %.2f\n", a - b);
        break;
    case '*':
        printf("Result = %.2f\n", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result = %.2f\n", a / b);
        else
            printf("Error: division by zero\n");
        break;
    default:
        printf("Unknown operator %c\n", op);
    }
    return 0;
}
