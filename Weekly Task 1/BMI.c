#include <stdio.h>
int main()
{
    float weight,height,bmi;
    printf("Enter your weight(kg): ");
    scanf("%f", &weight);  
    printf("Enter your height(m): ");
    scanf("%f", &height);  
    bmi = weight / pow(height, 2.0);
    printf("Your BMI is %f\n", bmi);
    return 0;
}