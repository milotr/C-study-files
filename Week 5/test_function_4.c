#include <stdio.h>

int getRemainder(int a, int b);

int main(){
    int x = getRemainder(9, 5);
    printf("x is %d \n", x);
}

int getRemainder(int a, int b)
{
 int result = a % b;
 return result;
}