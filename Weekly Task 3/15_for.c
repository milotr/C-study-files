#include <stdio.h>

int main(){
    //for
    int a;
    int sum = 0;
    for ( a = 1; a <= 5; a++){
        sum = sum + a;
    }
    printf("%d\n", sum);
    return 0;
}