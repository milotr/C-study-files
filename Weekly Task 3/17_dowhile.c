#include <stdio.h>

int main(){
    int a = 5;
    int sum = 0;
    do {
        sum = sum + a;
        a = a + 5;
    }while (a <= 100);
    printf("%d\n",sum);
    return 0;
}