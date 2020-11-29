#include <stdio.h>

// 1 2. Calculates the sum of 2 integers and prints out the result.

int sum (int a, int b);

int main(){
    int x = sum(10, 20);
    printf("The sum is: %d \n", x);
}

int sum (int a, int b){
    int result = a + b;
    return result;
}