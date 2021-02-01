#include <stdio.h>

int main(){
    int k = 1;
    do // this will run at least once 
    {
        printf("%d ", k);
        k++;
    }
    while (k <= 10);
    return 0;
}