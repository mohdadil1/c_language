/* Topic: Structure - group different types into one user-defined type
   Problem: storing phone details (brand, model, price, RAM) for a shop.  */
#include <stdio.h>

struct phone {
    char brand[20];
    char model[20];
    float price;
    int ram;
};

int main()
{
    struct phone p1 = {"Samsung", "Galaxy M34", 16999.0f, 6};
    struct phone p2 = {"Redmi", "Note 13", 17999.0f, 8};

    printf("%-8s %-12s Rs.%.2f %dGB\n", p1.brand, p1.model, p1.price, p1.ram);
    printf("%-8s %-12s Rs.%.2f %dGB\n", p2.brand, p2.model, p2.price, p2.ram);
    printf("sizeof(struct phone) = %zu bytes\n", sizeof(struct phone));
    return 0;
}
