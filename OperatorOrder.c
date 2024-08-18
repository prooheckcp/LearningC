//
// Created by Vasco Miguel Veenstra Soares on 18/08/2024.
//

#include <stdio.h>

int main(){
    int i = 0;
    int j = i++ + i;
    printf("%d\n", j);

    if (1 == 2 != 3){
        printf("It was true!");
    }
    return 0;
}