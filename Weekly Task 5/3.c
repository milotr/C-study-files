#include <stdio.h>
// 3. Returns the average of 2 integers
int average(int a, int b);

int main(){
    int x = average(10, 20);
    printf("The average is: %d \n", x);
}

int average(int a, int b){
    int result = ( a + b) / 2;
    return result;
}