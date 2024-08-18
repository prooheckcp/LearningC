//
// Created by Vasco Miguel Veenstra Soares on 18/08/2024.
//

#include <stdio.h>

int main(void){
    int input;

    while (1) {
        printf("Insert Number: ");
        scanf("%d", &input);

        if(!(input % 2))
            printf("Is even\n");
        else
            printf("Is odd\n");
    }

    return 0;
}