#include <stdio.h>

int main() {
    int basicSalary;
    int yearsOfService;
    char city;
    int additionalAllowance = 0;
    float bonus = 0.0;
    float grossRemuneration;

    printf("Enter the basic salary: ");
    scanf("%d", &basicSalary);

    printf("Enter the number of years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the city (C for Colombo): ");
    scanf(" %c", &city);

    if (yearsOfService > 5) {
        additionalAllowance = 0.1 * basicSalary;
    }

    if (city == 'C') {
        additionalAllowance += 2500;
    }

    if (basicSalary <= 25000) {
        bonus = 0.1 * basicSalary;
    } else if (basicSalary <= 50000) {
        bonus = 0.12 * basicSalary;
    } else {
        bonus = 0.15 * basicSalary;
    }

    grossRemuneration = basicSalary + additionalAllowance + bonus;

    printf("Gross monthly remuneration: %.2f\n", grossRemuneration);

    return 0;
}
