// 8. Returns the biggest of 3 integers.

#include <stdio.h>
int biggest(int a, int b, int c);

int main(){
    int x = biggest(1900, 70, 3100);
    printf("The biggest is: %d \n", x);
    return 0;
}

int biggest(int a, int b, int c){
    int result;
    if(a > b){
        if (a > c){
            result = a;
        }
    }
    if (c > a){
        if (c > b){
            result = c;
        }
    }    
    if (b > a){
        if (b > c){
            result = b;
        }
    }    
    return result;
}