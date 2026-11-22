/* Topic: Functions - parameters (formal) and arguments (actual) */
#include <stdio.h>

float simpleInterest(float p, float r, float t)   /* p, r, t : formal parameters */
{
    return (p * r * t) / 100;
}

int main()
{
    float principal = 10000, rate = 7.5f, time = 2;
    /* principal, rate, time : actual arguments */
    printf("Simple Interest = %.2f\n", simpleInterest(principal, rate, time));
    return 0;
}
