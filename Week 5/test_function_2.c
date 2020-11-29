#include <stdio.h>

void printThis(char n[]);

int main(){
    printThis("Vaasa");
    printThis("Helsinki");
    return 0;
}

void printThis(char n[])
{
 printf("%s \n", n);
} 