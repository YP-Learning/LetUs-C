#include <stdio.h>

int main(){
    int base_salary;
    float gross_salary, dreamness_allowance = 0.4, house_rent_allowance = 0.2; // dreamness_allowance 40%, house_rent_allowance 20%
    
    printf("Please enter Base Salary:(in ₹ without `,`) ₹");
    scanf("%i",&base_salary);
    
    gross_salary = base_salary + base_salary * dreamness_allowance + base_salary * house_rent_allowance;

    printf("Gross Salary: ₹%.2f\n", gross_salary);
}
