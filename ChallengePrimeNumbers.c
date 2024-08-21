//
// Created by Vasco Miguel Veenstra Soares on 21/08/2024.
//

#include <stdio.h>

const int MAX_PRIME_NUMBER = 101;

int main(void){
    int currentIndex = 2;
    int primeNumbers[25] = {2, 3};

    for (int p = 5; p < MAX_PRIME_NUMBER; p += 2){
        _Bool isDividable = 0;
        for (int i = 0; i <= currentIndex; ++i){
            if (p % primeNumbers[i] == 0){
                isDividable = 1;
                break;
            }
        }

        if (!isDividable){
            primeNumbers[currentIndex] = p;
            currentIndex++;
        }
    }

    for (int i = 0; i < 25; i++){
        printf("My prime number is: %d\n", primeNumbers[i]);
    }

    return 0;
}