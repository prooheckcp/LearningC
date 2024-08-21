//
// Created by Vasco Miguel Veenstra Soares on 20/08/2024.
//

#include <stdio.h>

unsigned const GRADE_COUNT = 10;

int main(void){
    int grades[GRADE_COUNT];
    int totalGrades = 0;

    // try mixed ones and print them out!
    int example[4] = {2, 3 ,4 ,[3] = 5};

    printf("Array size: %ld\nInt Size %ld\n", sizeof(grades), sizeof(int));

    for (int i = 0; i < (sizeof(grades)/sizeof(int)); i++){
        printf("Insert grade %d>", i + 1);
        scanf("%d", &grades[i]);
        totalGrades += grades[i];
    }

    printf("The total average grade of %d grades is %.2f", GRADE_COUNT, (float)totalGrades/(float)GRADE_COUNT);

    return 0;
}