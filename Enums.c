//
// Created by Vasco Miguel Veenstra Soares on 14/08/2024.
//

#include <stdio.h>

enum myColor {Red, Green, Blue};
enum myDirection {Left, Right = 3, Up, Down};

int main(void){
    enum myColor color = Red;
    enum myDirection direction = Left;
    char* example = "\n";

    if (Left == Red) {
        printf("They are equal!");
    }

    if (color == Red) {
        printf("Is Red!");
    }
    else if(color == Green){
        printf("Is Green!");
    }
    else if(color == Blue) {
        printf("Is Blue!");
    }

    return 0;
}