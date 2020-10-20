#include <stdio.h>

int main(){
    int a = 2;
    int sum = 0;
    do {
        sum = sum + a;
        a = a + 2;
    }while (a <= 40);
    printf("%d\n", sum);
    return 0;
}