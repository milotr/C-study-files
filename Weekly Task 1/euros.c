#include <stdio.h>
int main()
{
    float euros,dollars;
    printf("Enter euros: ");
    scanf("%f", &euros);  
    dollars = euros * 1.1835;
    printf("Equals to %f\n",dollars);
    return 0;
}