/* Topic: Problem Solving - Algorithm to C (average of three marks + result) */
#include <stdio.h>

int main()
{
    float m1, m2, m3, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3;                 /* sequence  */
    printf("Average = %.2f\n", avg);

    if (avg >= 40)                            /* selection */
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");
    return 0;
}
