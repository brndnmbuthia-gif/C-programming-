#include <stdio.h>

// Function to calculate tax based on gross salary
float calculateTax(float gross_salary)
{
    float tax;

    if (gross_salary < 30000)
    {
        tax = gross_salary * 0.05;   
    }
    else if (gross_salary < 60000)
    {
        tax = gross_salary * 0.10;   
    }
    else
    {
        tax = gross_salary * 0.15;   
    }

    return tax;
}

int main(void)
{
    float gross_salary, tax, net_salary;

    
    printf("Enter the employee's gross salary: ");
    scanf("%f", &gross_salary);

    
    tax = calculateTax(gross_salary);

    
    net_salary = gross_salary - tax;

    
    printf("\nGross Salary: %.2f KSh\n", gross_salary);
    printf("Tax Amount:   %.2f KSh\n", tax);
    printf("Net Salary:   %.2f KSh\n", net_salary);

    return 0;
}