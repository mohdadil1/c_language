/* Topic: Data Types - signed and unsigned ranges (from <limits.h>) */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("char           : %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char  : 0 to %u\n", UCHAR_MAX);
    printf("short          : %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short : 0 to %u\n", USHRT_MAX);
    printf("int            : %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int   : 0 to %u\n", UINT_MAX);
    printf("float          : %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double         : %e to %e\n", DBL_MIN, DBL_MAX);
    return 0;
}
