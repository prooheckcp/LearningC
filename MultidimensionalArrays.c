//
// Created by Vasco Miguel Veenstra Soares on 21/08/2024.
//

#include <stdio.h>

int main(void){
    // 1 dimensional
    int a[5] = {1, 2, 3};
    // 2 dimensional
    int matrix[10][10] = {
            {1, 2, 3},
            {4, 5, 6}
    };
    // 3 dimensional etc...
    int b[5][10][15] = {
            {{0, 1 ,2}},
            {{0, 1, 2}},
            {{1, 2, 3}},
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            matrix[i][j] = i * j;
    }

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            printf("|%d|", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}