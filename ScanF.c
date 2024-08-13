//
// Created by Vasco Miguel Veenstra Soares on 13/08/2024.
//

#include <stdio.h>

int main(){
    char str[100];
    int i;

    printf("Enter your value: ");
    scanf("%s, %d", str, &i);

    printf("%s %i", str, i);

    return 0;
}