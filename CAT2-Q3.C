#include <stdio.h>


int main() {
    
    float hours_worked, hourly_wage, gross_pay, tax, net_pay;
    
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    
    
    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage; 
    } else {
        float regular_hours = 40;
        float overtime_hours = hours_worked - 40;
        gross_pay = (regular_hours * hourly_wage) + (overtime_hours * hourly_wage * 1.5); 
    }
    
    
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15; 
    } else {
        tax = 600 * 0.15 + (gross_pay - 600) * 0.20; 
    }
    
    
    net_pay = gross_pay - tax;
    
    
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);
    
    return 0;
}
