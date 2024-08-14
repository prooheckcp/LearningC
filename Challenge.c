//
// Created by Vasco Miguel Veenstra Soares on 14/08/2024.
//

#include <stdio.h>

enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

int main(){
    enum Company firstCompany = XEROX;
    enum Company secondCompany = GOOGLE;
    enum Company thirdCompany = EBAY;

    printf("%d\n%d\n%d\n", firstCompany, secondCompany, thirdCompany);

    return 0;
}