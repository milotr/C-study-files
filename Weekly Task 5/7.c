#include <stdio.h>

// Returns the biggest of 2 integers.
int biggest(int a, int b);

int main(){
    int x = biggest(19, 70);
    printf("The biggest is: %d \n", x);
    return 0;
}

int biggest(int a, int b){
    int result;
    if(a>b) {
        result = a;
    }
    else {
        result = b;
    }
    return result;
}