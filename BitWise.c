//
// Created by Vasco Miguel Veenstra Soares on 17/08/2024.
//

#include <stdio.h>

int main(void){
    int a = 60;     // 0011 1100
    int b = 13;     // 0000 1101
    int result = 0; // 0000 1100

    result = a & b;

    printf("Int: %d", result);

    return 0;
}