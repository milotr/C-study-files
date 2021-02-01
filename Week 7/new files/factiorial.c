#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    int k;
    if (n == 0 || n == 1)
     return(1);
    else
     return(n * fact(n-1));
    return 0;
}

int main(){
    printf("factorial of %d is %d \n", 5, fact(5));
}