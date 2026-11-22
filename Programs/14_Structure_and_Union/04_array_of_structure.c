/* Topic: Structure - array of structures (read and print details of n cars)
   Note: 17.89 may print as 17.889999 because float has ~7 significant digits. */
#include <stdio.h>

struct car {
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main()
{
    struct car cars[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Enter the car %d fuel tank capacity: ", i + 1);
        scanf("%d", &cars[i].fuel_tank_cap);
        printf("Enter the car %d seating capacity: ", i + 1);
        scanf("%d", &cars[i].seating_cap);
        printf("Enter the car %d city mileage: ", i + 1);
        scanf("%f", &cars[i].city_mileage);
    }

    printf("\n%-5s %-10s %-8s %-8s\n", "Car", "Tank(L)", "Seats", "Mileage");
    for (i = 0; i < 2; i++)
        printf("%-5d %-10d %-8d %-8.2f\n", i + 1, cars[i].fuel_tank_cap,
               cars[i].seating_cap, cars[i].city_mileage);
    return 0;
}
