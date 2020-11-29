#include <stdio.h>
#include <windows.h>

int main(){
    // 2. funciton converts text into morse code
    char message[] = "HELP";
    int size = strlen(message);

    int i;
    for (i=0; i<size; i++){
        switch(message[i]){
            case 'A': dot(); line(); space(); break;
            case 'B': line(); dot(); dot(); dot(); space(); break;
            case 'C': line(); dot(); line(); dot(); space(); break;
            case 'D': line(); dot(); dot(); space(); break;
            case 'E': dot(); space(); break;
            case 'F': dot(); dot(); line(); dot(); space(); break;
            case 'G': line(); line(); dot(); space(); break;
            case 'H': dot(); dot(); dot(); dot(); space(); break;
            case 'I': dot(); dot(); space(); break;
            case 'J': dot(); line(); line(); line(); space(); break;
            case 'K': line(); dot(); line(); space(); break;
            case 'L': dot(); line(); dot(); dot(); space(); break;
            case 'M': line(); line(); space(); break;
            case 'N': line(); dot(); space(); break;
            case 'O': line(); line(); line(); space(); break;
            case 'P': dot(); line(); line(); dot(); space(); break;
            case 'Q': line(); line(); dot(); line(); space(); break;
            case 'R': dot(); line(); dot(); space(); break;
            case 'S': dot(); dot(); dot(); space(); break;
            case 'T': line(); space(); break;
            case 'U': dot(); dot(); line(); space(); break;
            case 'V': dot(); dot(); dot(); line(); space(); break;
            case 'W': dot(); line(); line(); space(); break;
            case 'X': line(); dot(); dot(); line(); space(); break;
            case 'Y': line(); dot(); line(); line(); space(); break;
            case 'Z': line(); line(); dot(); dot(); space(); break;
            case '1': dot(); line(); line(); line(); line(); space(); break;
            case '2': dot() ; dot(); line(); line(); line(); space(); break;
            case '3': dot(); dot() ; dot(); line(); line(); space(); break;
        }
    }
    return 0;
}

void line(){
    printf("-");
}
void dot(){
    printf(".");
}
void space(){
}