/* Topic: Strings - what a string is and how it is stored (ends with '\0') */
#include <stdio.h>

int main()
{
    char s1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  /* character by character */
    char s2[] = "Hello";                            /* string literal        */
    char s3[20] = "BCA";                            /* extra space unused    */
    int i;

    printf("s1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
    printf("sizeof(s2) = %zu (5 letters + 1 null)\n", sizeof(s2));

    printf("Characters of s2 with ASCII codes:\n");
    for (i = 0; s2[i] != '\0'; i++)
        printf("s2[%d] = '%c' (%d)\n", i, s2[i], s2[i]);
    return 0;
}
