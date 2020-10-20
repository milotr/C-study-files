#include <stdio.h>

int main(){
    int a = 5 ;
    int sum = 0;
    while (a <= 100){
        sum = sum + a;
        a = a + 5;
    }
    printf ("%d\n",sum);
    return 0;
}