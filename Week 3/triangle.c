#include <stdio.h>

int main()
{
    float b,h;

    printf("Give value of base: ");
    scanf("%f", &b);

    printf("Give value of height: ");
    scanf("%f", &h);

    float a;

    a = (b*h)/2;
    printf("Area of the triangle is %f\n", a);
    return 0;
}