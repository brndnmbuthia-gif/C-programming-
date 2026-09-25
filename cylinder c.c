#include <stdio.h>

int main() {
    float radius = 2.1;
    float height = 2.1;
    double pie = 3.142;
    double volume;
    double surface_area;

    printf("The radius is %f\n", radius);
    printf("The height is %f\n", height);
    printf("Value of pie is %lf\n", pie);

    volume = pie * radius * radius * height;
    surface_area = (2 * pie * radius * radius) + (2 * pie * radius * height);

    printf("Volume of the cylinder: %lf\n", volume);
    printf("Surface area of the cylinder: %lf\n", surface_area);

    return 0;
}
