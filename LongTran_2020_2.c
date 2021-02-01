/*
Student name: Long Tran
Student code: 1903387
Name of the codefile:
Date: 01/12/2020
Comments of the task:
e.g. was it easy or difficult ... (free comments)
And answer to the question "DO you want to take a resit exam or not?"
*/

#include <stdio.h>
#include <string.h>

int main(){
    int uppercases;
    char alpha[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char text[] = "The EEA includes EU countries and also Iceland, Liechtenstein and Norway. It allows them to be part of the EU’s single market. Switzerland is not an EU or EEA member but is part of the single market. This means Swiss nationals have the same rights to live and work in the UK as other EEA nationals.";
    for (int i = 0; i < strlen(text); i++){
        for (int j = 0; j < strlen(alpha); j++){
        if (text[i] == alpha[j])
        uppercases++;
        }
    }
    printf("\n Total uppers: %d \n", uppercases);
    return 0;
}