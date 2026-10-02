#include <stdio.h>

int main(void)
{
    int attendance;
    double average_marks;

    printf("Enter attendance percentage: ");
    if (scanf("%d", &attendance) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter average marks: ");
    if (scanf("%lf", &average_marks) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}