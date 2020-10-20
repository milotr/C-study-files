#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Give the first number: ");
    scanf("%d", &a);
    printf("Give the second number: ");
    scanf("%d", &b);
    printf("Give the third number: ");
    scanf("%d", &c);

    if ((a > b) && (a > c))
    {
        printf("First number is the biggest.\n");
    }
    else if ((b > c) && (b > a))
    {
        printf("Second number is the biggest.\n");
    }
    else
    {
        printf("Third number is the biggest.\n");
    }
    return 0;
}