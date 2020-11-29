#include <stdio.h>

int main(){
    int i;
    int x = 2;
    int y;
    int a[]={1, 2, 5, 8, 4, 2, 3, 22, 33, 11, 0, 5};
    for (i = 0; i < 12; i++){
        y = a[i] * x;
        printf(" %d \n", y);}
    return 0;
}