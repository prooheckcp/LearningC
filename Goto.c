//
// Created by Vasco Miguel Veenstra Soares on 18/08/2024.
//

#include <stdio.h>

int main(void){
    int counter = 0;

    while(1){
        if (counter > 10)
            goto printing;

        counter++;
    }

    printing:
    printf("Hello World %d", counter);

    return 0;
}