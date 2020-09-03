#include <stdio.h>
int main()
{
    float d;
    float s;
    float t;
    printf("Enter speed(km/h): ");
    scanf("%f", &s);  
    printf("Enter distance(km): ");
    scanf("%f", &d);
    t=d/s;
    int whole_hours = (int) t;
    float minutes = (t - whole_hours) * 60;
    printf("It takes %f\n",t);
    printf("It takes %d whole hours and %f minutes\n", whole_hours, minutes);
    return 0;
}