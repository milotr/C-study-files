// 10. Converts inches to centimeters.

#include <stdio.h>

float inchtocm(float a);

int main(){
    float x = inchtocm(2.5);
    printf("Centimeters: %f \n", x);
    return 0;
}

float inchtocm(float a){
    float result = a * 2.54;
    return result;
}