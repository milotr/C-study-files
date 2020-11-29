#include <stdio.h>

int main(){
    int i;
    int a[]={1, 2, 5, 8, 4, 2, 3, 22, 33, 11, 0, 5};
    for (i=0; i < 12; i++ )
        if(a[i] > 10)
            printf("\n %d bigger than 10\n", a[i]);
    return 0;
}