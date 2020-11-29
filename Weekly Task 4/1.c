#include <stdio.h>
#include <stdlib.h>

//generating random numbers
int main(){
    int size = 10;
    int i;
    int array[size];
    int sum = 0;
    int min,max;
    float average;
    for (i = 0; i < size; i++)
     array[i] = rand() % 10 + 1;

    for (i = 0; i < size; i++)
     printf("- %d ", array[i]);

    for (i = 0; i < size; i++)
        sum = sum + array[i]; 

    min = array[0];
    for (i = 0; i < size; i++)
        if(array[i] < min)
            min = array[i];

    max = array[0];
    for (i = 0; i < size; i++)
        if(array[i] > max)
            max = array[i];

    // specific values - x
    int result = -1; // this is position of the value if it's being found
    int x = 4; // replacing values of x to find it
    for (i = 1; i <= size; i++)
        if (array[i] == x){
            result = i;
            printf("\n It's on the %d slot of the array", result);
            break;
        }
        
        if (result == -1) // if the result stay the same then nothing is being found
            printf("Not found \n");


    average = sum / size;
    printf("\n The sum of the array is %d \n", sum);
    printf("\n The average is %f \n", average);
    printf("\n The minimum value is %d \n", min);
    printf("\n The maximum value is %d \n", max);
    return 0;
}