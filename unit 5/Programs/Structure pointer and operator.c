// prog3_structure_pointer.c
#include <stdio.h>

struct car {
    int fuel_tank_cap;
    float mileage;
};

int main(void) {
    struct car c1 = {45, 18.5f};
    struct car *ptr = &c1;

    printf("Fuel tank capacity: %d L\n", ptr->fuel_tank_cap);
    printf("Mileage: %.2f km/L\n", ptr->mileage);

    return 0;
}
// This program defines a structure 'car' with members for fuel tank capacity and mileage.
// It then creates an instance of the structure and a pointer to that instance.
// The program accesses and prints the structure members using the pointer and the '->' operator.
