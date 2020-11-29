#include <stdio.h>

int main(){
    //pointers 
    int * p1;
    int weight = 100; 
    printf("weight is %d \n", weight);
    p1 = &weight;
    *p1 = 110;
    printf("weight is %d \n", weight);
    printf("The pointer p1 has the value of %X \n", p1);
    return 0;
}