/* Topic: Problem Solving - SEQUENCE (steps run one after another)
   Algorithm:
   Step 1: Start
   Step 2: Read P, R, T
   Step 3: SI = (P * R * T) / 100
   Step 4: Print SI
   Step 5: Stop                                                        */
#include <stdio.h>

int main()
{
    float p, r, t, si;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
