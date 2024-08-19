//
// Created by Vasco Miguel Veenstra Soares on 19/08/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* WELCOME_MESSAGE = "Welcome to the guessing game! I'm thinking of a number between %d-%d\n";
const char* LOSE_MESSAGE = "You ran out of lives! The number was %d. Better luck next time!\n";
const char* WIN_MESSAGE = "Congratulations! You've won the game!\n";
const char* REMAINING_ATTEMPTS_MESSAGE = "You have %d tries left.\n";
const char* OFF_RANGE = "The inserted number is off range! It should be between %d - %d\n";
const char* ENTER_GUESS = "Enter a guess:";
const char* MORE_KEYWORD = "more";
const char* LESS_KEYWORD = "less";
const char* FAILED_ATTEMPT = "Sorry, %d is wrong. My number is %s than that\n";
const unsigned short MINIMUM_NUMBER = 1;
const unsigned short MAXIMUM_NUMBER = 20;
const unsigned short MAXIMUM_TRIES = 5;

int main(void){
    srand(time(NULL));

    for (;;){
        printf(WELCOME_MESSAGE, MINIMUM_NUMBER, MAXIMUM_NUMBER);
        const unsigned short randomNumber = rand() % MAXIMUM_NUMBER + 1;
        unsigned short currentTries = 0;
        short int playerGuess = -1;

        while (1){
            printf("\n");
            printf(REMAINING_ATTEMPTS_MESSAGE, MAXIMUM_TRIES - currentTries);
            printf(ENTER_GUESS);
            scanf("%hi", &playerGuess);
            printf("\n");

            if (playerGuess < MINIMUM_NUMBER || playerGuess > MAXIMUM_NUMBER){
                printf(OFF_RANGE, MINIMUM_NUMBER, MAXIMUM_NUMBER);
                continue;
            }

            if (playerGuess == randomNumber){
                printf(WIN_MESSAGE);
                break;
            }

            if (currentTries >= MAXIMUM_TRIES){
                printf(LOSE_MESSAGE, randomNumber);
                break;
            }

            printf(FAILED_ATTEMPT, playerGuess, playerGuess < randomNumber ? MORE_KEYWORD : LESS_KEYWORD);
            currentTries++;
        }

        printf("\n\n");
    }

    return 0;
}