//
// Created by Vasco Miguel Veenstra Soares on 18/08/2024.
//

#include <stdio.h>

int main(void){
    int a = 0 ? 2 : 0 ? 2 : 5;

    printf("My value is %d", a);

    return 0;
}