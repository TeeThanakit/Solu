// Lab 3.2: Complex if-else
#include <stdio.h>

int main() {
    float grossSalary, taxRate, taxAmount, bonus = 0, netSalary;
    int performanceRating;

    scanf("%f", &grossSalary);

    if (grossSalary < 0) {
        printf("Gross salary must be positive");
        return 1;
    }

    scanf("%f", &taxRate);

    if (taxRate < 0) {
        printf("Tax rate out of range");
        return 1;
    }

    scanf("%d", &performanceRating);


    if (performanceRating < 1 || performanceRating > 5) {
        printf("Performance rating out of range");
        return 1;
    }

    taxAmount = (taxRate / 100) * grossSalary;

    if (performanceRating == 5) {
        bonus = 0.20 * grossSalary;
    } else if (performanceRating == 4) {
        bonus = 0.10 * grossSalary;
    } else if (performanceRating == 3) {
        bonus = 0.05 * grossSalary;
    }

    netSalary = grossSalary - taxAmount + bonus;

    printf("%.2f", netSalary);

    return 0;
}
