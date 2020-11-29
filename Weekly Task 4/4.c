#include <stdio.h>
#include <stdlib.h>

int main(){
    int r,c;
    int array[3][4];
    int i;

    for (r =0; r<3; r++){
        array[0][i] = rand() % 9 + 1;
        for (c=0; c < 4; c++)
            array[i][0] = rand() % 9 + 1;
    }
    for (r=0; r<3; r++){
        for (c=0; c<3; c++)
            printf("%d \n", array[r][c]);
    }
    return 0;

}