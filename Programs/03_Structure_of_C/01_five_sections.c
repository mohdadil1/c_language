/* ---------------- 1. DOCUMENTATION SECTION ----------------
   Program : Structure of a C program
   Purpose : Shows all sections of a C program
   -----------------------------------------------------------*/

/* ---------------- 2. PREPROCESSOR (LINK + DEFINITION) ----- */
#include <stdio.h>
#define PI 3.14159

/* ---------------- 3. GLOBAL DECLARATION SECTION ----------- */
int count = 0;
float area(float r);            /* function prototype */

/* ---------------- 4. main() FUNCTION ---------------------- */
int main()
{
    float r = 2.0f;             /* declaration part */
    printf("Area = %.2f\n", area(r));   /* executable part */
    printf("area() called %d time(s)\n", count);
    return 0;
}

/* ---------------- 5. SUB-PROGRAM SECTION ------------------ */
float area(float r)
{
    count++;
    return PI * r * r;
}
