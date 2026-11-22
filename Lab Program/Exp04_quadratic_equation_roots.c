/* Experiment 4: Design a program that takes three coefficients (a, b and c)
   of a Quadratic equation (ax^2 + bx + c = 0) as input and compute all
   possible roots.
   Compile on Linux with: gcc Exp04_quadratic_equation_roots.c -lm      */
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, root1, root2, real, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0)
            printf("Invalid equation (a and b both zero)\n");
        else
            printf("Not quadratic. Linear root x = %.2f\n", -c / b);
        return 0;
    }

    d = b * b - 4 * a * c;                  /* discriminant */

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    } else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Roots are complex (imaginary)\n");
        printf("Root1 = %.2f + %.2fi\nRoot2 = %.2f - %.2fi\n", real, imag, real, imag);
    }
    return 0;
}

/* Sample output:
   Enter coefficients a, b and c: 1 -5 6
   Roots are real and distinct
   Root1 = 3.00
   Root2 = 2.00

   Enter coefficients a, b and c: 1 2 5
   Roots are complex (imaginary)
   Root1 = -1.00 + 2.00i
   Root2 = -1.00 - 2.00i
*/
