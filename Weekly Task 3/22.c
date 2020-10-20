#include <stdio.h>

int main(){
    char mark = 'o';
    int a,b;
    int amax =2,bmax=4;
    for ( a = 0; a < amax; a++ ){
        for (b=0; b<bmax; b++){
            printf("%c", mark);
            printf("\n");
        }
    }
}