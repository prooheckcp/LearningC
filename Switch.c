//
// Created by Vasco Miguel Veenstra Soares on 18/08/2024.
//

#include <stdio.h>

int main(void){
    int x = 2;

    switch(x){
        case 2:
        case 3:
            printf("It's 2 or 3\n");
            break;
        default:
            printf("This is default\n");
            break;
    }

    return 0;
}