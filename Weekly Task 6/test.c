#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int num[10];
    char str[] = "2, 3.5, 1, 5.8, 10";
    char *token;
    token = strtok(str,",");
    for (int i = 0; i < 5; i++ )
    {
        num[i] = atoi[token];
        token = strtok(NULL,",");
    }
    printf("These are the numbers: %d \n", num);
    return 0;
}