/* Topic: Structure - initialising variables and accessing members with dot (.)
   NOT allowed: struct abc { int p = 23; };  (no initialisation inside the template) */
#include <stdio.h>
#include <string.h>

struct car {
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main()
{
    struct car c1 = {"DDiS 190 Engine", "Diesel", 37, 5, 19.74f};
    struct car c2;

    strcpy(c2.engine, "1.2 L Kappa");       /* assign members one by one */
    strcpy(c2.fuel_type, "Petrol");
    c2.fuel_tank_cap = 35;
    c2.seating_cap = 5;
    c2.city_mileage = 17.5f;

    printf("Car 1: %s, %s, %d L, %d seats, %.2f km/l\n", c1.engine, c1.fuel_type,
           c1.fuel_tank_cap, c1.seating_cap, c1.city_mileage);
    printf("Car 2: %s, %s, %d L, %d seats, %.2f km/l\n", c2.engine, c2.fuel_type,
           c2.fuel_tank_cap, c2.seating_cap, c2.city_mileage);
    return 0;
}
