//
// Created by Vasco Miguel Veenstra Soares on 18/08/2024.
//

#include <stdio.h>

const int WEEKLY_HOURS = 40;
const int HOURLY_RATE = 12;
const float OVERTIME_MULTIPLIER  = 1.5f;

const float TAX_BRACKET1 = 0.15f;
const float TAX_BRACKET2 = 0.2f;
const float TAX_BRACKET3 = 0.25f;

const float TAX_BRACKET1_LIMIT = 300;
const float TAX_BRACKET2_LIMIT = 150;

int main(void){
    int workedHours;

    printf("Insert worked hours: ");
    scanf("%d", &workedHours);
    printf("\n");

    int regularPayHours = workedHours <= WEEKLY_HOURS ? workedHours : WEEKLY_HOURS;
    int overtimePayHours = workedHours <= WEEKLY_HOURS ? 0 : workedHours - WEEKLY_HOURS;
    float grossPay = (float)(regularPayHours * HOURLY_RATE) + ((float)overtimePayHours * (float)HOURLY_RATE * OVERTIME_MULTIPLIER);
    float tax1 = TAX_BRACKET1_LIMIT * TAX_BRACKET1;
    float tax2 = 0;
    float tax3 = 0;

    if (grossPay <= TAX_BRACKET1_LIMIT)
        tax1 = grossPay * TAX_BRACKET1;
    else if (grossPay <= TAX_BRACKET1_LIMIT + TAX_BRACKET2_LIMIT){
        tax2 = (grossPay - TAX_BRACKET1_LIMIT) * TAX_BRACKET2;
    }
    else{
        tax2 = TAX_BRACKET2_LIMIT * TAX_BRACKET2;
        tax3 = (grossPay - TAX_BRACKET1_LIMIT - TAX_BRACKET2_LIMIT) * TAX_BRACKET3;
    }

    float totalTax = tax1 + tax2 + tax3;

    printf(
            "You have worked a total of %d hours of regular time and %d of overtime wich gets you a gross salary of %.2f€\n",
           regularPayHours,
           overtimePayHours,
           grossPay);

    printf("This requires a pay of %.2f€ in Taxes! That means your net salary is %.2f€\n", totalTax, grossPay - totalTax);

    return 0;
}