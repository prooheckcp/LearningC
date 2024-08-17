//
// Created by Vasco Miguel Veenstra Soares on 17/08/2024.
//

#include <stdio.h>
#include <math.h>

double MINUTES_IN_YEAR = 60 * 24 * 365;
double MINUTES_IN_DAY = 60 * 24;

int main(void){
    double minutes = 0.0;
    double years = 0.0;
    double days = 0.0;

    printf("Insert amount of minutes: ");
    scanf("%lf", &minutes);

    years = minutes/MINUTES_IN_YEAR;
    days =  minutes/MINUTES_IN_DAY;

    printf("Years: %.2lf\nDays: %.2lf", years, days);

    return 0;
}