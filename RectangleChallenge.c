//
// Created by Vasco Miguel Veenstra Soares on 15/08/2024.
//

#include <stdio.h>

int main(void){
    double rectangleWidth;
    double rectangleHeight;
    double rectanglePerimeter = 0.0;
    double rectangleArea = 0.0;

    printf("Insert width:");
    scanf("%lf", &rectangleWidth);
    printf("\n");
    printf("Insert Height:");
    scanf("%lf", &rectangleHeight);
    printf("\n");

    rectanglePerimeter = (rectangleWidth + rectangleHeight) * 2.0;
    rectangleArea = rectangleWidth * rectangleHeight;

    printf("The rectangle perimeter is: %.0f\n", rectanglePerimeter);
    printf("The rectangle area is: %.0f\n", rectangleArea);

    return 0;
}