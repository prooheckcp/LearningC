//
// Created by Vasco Miguel Veenstra Soares on 21/08/2024.
//

#include <stdio.h>

#define MONTH_COUNT 12
#define YEAR_COUNT 5
#define INITIAL_YEAR 2020

int main(void){
    char* monthsNames[MONTH_COUNT] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    float rainfallData[YEAR_COUNT][MONTH_COUNT] = {
            //2020
            {78.2f, 62.1f, 91.3f, 102.4f, 85.6f, 150.2f, 220.5f, 200.3f, 180.7f, 140.2f, 110.3f, 95.4f},
            //2021
            {82.1f,	66.5f,	88.7f,	98.3f,	90.2f,	155.8f,	230.1f,	210.4f,	185.5f,	135.7f,	115.2f,	92.8f},
            //2022
            {75.4f,	70.2f,	94.6f,	105.1f,	87.3f,	145.6f,	225.4f,	205.2f,	175.6f,	130.8f,	120.5f,	97.3f},
            //2023
            {80.9f,	65.8f,	92.4f,	100.7f,	82.9f,	160.3f,	235.7f,	215.6f,	190.2f,	145.3f,	112.4f,	90.1f},
            //2024
            {77.5f,	68.9f,	90.8f,	103.5f,	88.1f,	152.7f,	240.2f,	220.1f,	185.9f,	138.4f, 118.7f,	94.6f}
    };
    float monthlyTotal[MONTH_COUNT] = {0}; //The total rain for each month
    float yearTotal[YEAR_COUNT] = {0}; //The total rain for each year
    float allYearsTotal = 0;

    for(int year = 0; year < YEAR_COUNT; year++){
        for(int month = 0; month < MONTH_COUNT; month++){
            monthlyTotal[month] += rainfallData[year][month];
            yearTotal[year] += rainfallData[year][month];
            allYearsTotal += rainfallData[year][month];
        }
    }

    // Print yearly averages
    printf("YEAR\tRAINFALL (inches)\n");
    for (int year = 0; year < YEAR_COUNT; year++)
        printf("%d\t%.1f\n", INITIAL_YEAR + year, yearTotal[year]/MONTH_COUNT);

    printf("\nThe yearly average is %.1f inches\n", (allYearsTotal/YEAR_COUNT)/MONTH_COUNT);

    // Months averages
    printf("\nMONTHLY AVERAGES:\n\n");
    for (int month = 0; month < MONTH_COUNT; month++)
        printf("%s\t\t",monthsNames[month]);
    printf("\n");
    for (int month = 0; month < MONTH_COUNT; month++){
        printf("%.1f\t", monthlyTotal[month]/MONTH_COUNT);
    }

}