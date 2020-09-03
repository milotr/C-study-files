#include <stdio.h>
int main()
{
    float r;
    float v;
    float i;
    printf("Enter voltage: ");
    scanf("%f", &v);  
    printf("Enter current: ");
    scanf("%f", &i);  
    r=v/i;
    printf("Number = %f\n",r);
    return 0;
}