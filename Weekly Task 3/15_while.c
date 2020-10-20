#include <stdio.h>

int main(){
    //while
    int b = 1;
    int sumB = 0;
    while (b <= 5){
        sumB = sumB + b;
        b++;
    }
    printf("%d\n", sumB);
    return 0;
}