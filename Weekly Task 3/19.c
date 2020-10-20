#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    for (a = 0; a < 100; a++){
        printf("%d\n", rand()%6);
    }
    return 0;
}