#include <stdio.h>

int main(){
    int a = 2;
    int sum = 0;
    while (a <= 40){
        sum = sum + a;
        a = a + 2;
    }
    printf ("%d\n", sum);
    return 0;
}