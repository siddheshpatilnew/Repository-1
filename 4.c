#include <stdio.h>

int main() {
    float basicpay, hra, ta, grosssalary, tax, netsalary;

    // Input basic pay
    printf("Enter Basic pay: ");
    scanf("%f", &basicpay);

    // Calculations
    hra = 0.10 * basicpay;
    ta = 0.05 * basicpay;
    grosssalary = basicpay + hra + ta;
    tax = 0.02 * grosssalary;
    netsalary = grosssalary - tax;

    // Output results
    printf("\nHRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nGross Salary = %.2f", grosssalary);
    printf("\nProfessional Tax = %.2f", tax);
    printf("\nNet Salary = %.2f", netsalary);

    return 0;
}
