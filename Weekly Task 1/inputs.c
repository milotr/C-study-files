#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &a);  
    printf("Enter an integer: ");
    scanf("%d", &b);  
    c = a+b;
    printf("Number = %d\n",c);
    return 0;
}