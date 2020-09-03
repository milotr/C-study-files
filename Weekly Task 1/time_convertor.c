#include <stdio.h>
int main()
{
    float time, hours, minutes, mili;
    printf("Enter time in seconds: ");
    scanf("%f", &time);  
    minutes = time / 60;
    printf("Minutes %f\n", minutes);
    hours = time / 3600;
    printf("Hours %f\n", hours);
    mili = time * 1000;
    printf("Miliseconds %f\n", mili);
    return 0;
}