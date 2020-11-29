#include <stdio.h>

int main(){
    int r,c;
    int array[6][5]={1, 5, 6, 6, 7, 7, 2, 4, 6, 8, 8, 8,3, 5, 5, 8, 6, 8,4, 9, 6, 8, 5, 8, 5, 7, 6, 7, 8, 10};
    for (r=0;r <2;r++)
        {
            for (c=0;c<4;c++)
                printf("%d", array[6][5]);

            printf("\n");
        }
    return 0;
}