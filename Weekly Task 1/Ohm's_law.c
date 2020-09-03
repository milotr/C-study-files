#include <stdio.h>
int main()
{
    int r;
    int v;
    int i;
    int testInteger;
    printf("Enter voltage: ");
    scanf("%d", &v);  
    printf("Enter current: ");
    scanf("%d", &i);  
    r=v/i;
    printf("Number = %d\n",r);
    return 0;
}