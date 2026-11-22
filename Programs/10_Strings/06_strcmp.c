/* Topic: Strings - strcmp (0 if equal, <0 or >0 otherwise) */
#include <stdio.h>
#include <string.h>

int main()
{
    char pass[20];
    printf("strcmp(\"apple\", \"apple\")  = %d\n", strcmp("apple", "apple"));
    printf("strcmp(\"apple\", \"banana\") < 0 ? %d\n", strcmp("apple", "banana") < 0);
    printf("strcmp(\"cat\", \"bat\")      > 0 ? %d\n", strcmp("cat", "bat") > 0);

    printf("\nEnter password: ");
    scanf("%19s", pass);
    if (strcmp(pass, "bca2026") == 0)
        printf("Access granted\n");
    else
        printf("Wrong password\n");
    return 0;
}
