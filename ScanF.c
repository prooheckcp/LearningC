//
// Created by Vasco Miguel Veenstra Soares on 13/08/2024.
//

#include <stdio.h>

int main(){
    char str[100];
    double d;

    printf("Enter your value: ");
    scanf("%s %lf", str, &d);

    printf("%s %d", str, d);

    return 0;
}