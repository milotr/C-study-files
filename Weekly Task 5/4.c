#include <stdio.h>
// 4. Average of 4 floats
float ave(float a, float b, float c, float d);

int main(){
    float x = ave(10.20 , 20.25, 2.25, 3.60);
    printf("The average is: %f \n", x);
}

float ave(float a, float b, float c, float d){
    float result = ( a + b + c + d) / 2;
    return result;
}