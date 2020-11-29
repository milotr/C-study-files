#include <stdio.h>

void add20ToThis(int a);
void add20ReallyToThis (int * b);

int main(){
    int x = 50;

    add20ReallyToThis(&x); // &x means the address of variable x
    // passing by reference
    printf("x is %d \n", x);
}

void add20ReallyToThis(int * b)
{
 *b = *b + 20; // *b refers the memory place itself
}