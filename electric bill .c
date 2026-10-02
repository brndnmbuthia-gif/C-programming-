#include <stdio.h>

int main(void)
{
    int water_units;
    double total_bill;

    printf("Enter water units consumed: ");
    if (scanf("%d", &water_units) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (water_units <= 30) {
        total_bill = water_units * 20.0;
    } else if (water_units <= 60) {
        total_bill = 30 * 20.0 + (water_units - 30) * 25.0;
    } else {
        total_bill = 30 * 20.0 + 30 * 25.0 + (water_units - 60) * 30.0;
    }

    printf("Total water bill: %.2f KES\n", total_bill);

    return 0;
}