#include <stdio.h>

int main() {
    float basicSalary, idrPercentage, idsPercentage, taPercentage, grossSalary;
    
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    printf("Enter IDR%%, IDS%%, TA%% (separated by spaces): ");
    scanf("%f %f %f", &idrPercentage, &idsPercentage, &taPercentage);
    
    grossSalary = basicSalary + (basicSalary * idrPercentage / 100)  + (basicSalary * idsPercentage / 100) + (basicSalary * taPercentage / 100);
    
    printf("Gross Salary: ₹%f\n", grossSalary);
    
    return 0;
}
