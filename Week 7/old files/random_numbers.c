#include <stdio.h>
#include <stdlib.h>

int main(){
    for ( int i = 0; i < 10; i++){
        int x = rand();
        printf("x is %d \n", x);
    }



// print 10 dice values (1-6)
    for ( int i = 0; i < 10; i++){
        int x = rand();
        int n = x % 6 + 1; //remaider 2000 % 6 => 0 - 5 + 1 => 1 - 6
        printf("%d \n", n);
    }
    return 0;
}