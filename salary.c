#include <stdio.h>

int main() {
    float basic, allowance, deduction, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter Total Allowances: ");
    scanf("%f", &allowance);

    printf("Enter Total Deductions: ");
    scanf("%f", &deduction);
    netSalary = basic + allowance - deduction;


    printf("\nNet Salary = %.2f\n", netSalary);

    return 0;
}
