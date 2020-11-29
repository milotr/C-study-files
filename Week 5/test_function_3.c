#include <stdio.h>

void printThisSeveralTimes(char n[], int times);

int main(){
    printThisSeveralTimes("New York", 5);
}

void printThisSeveralTimes(char n[], int times){
    int i;
    for (i = 0; i < times; i++)
    printf("%s \n", n);
}