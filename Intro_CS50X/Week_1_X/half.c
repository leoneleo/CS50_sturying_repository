// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    printf("Bill before tax and tip: ");
    float bill_amount = 0.0;
    scanf("%f", &bill_amount);

    printf("Sale Tax Percent: ");
    float tax_percent = 0.0;
    scanf("%f", &tax_percent);

    printf("Tip percent: ");
    int tip_percent = 0;
    scanf("%i", &tip_percent);

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float value;
    
    printf("%.5f",tax/100);
    printf("%i", 1+tip/100);
    value = bill*(100+tax)/100*(100+tip)/100/2;

    return value;
}