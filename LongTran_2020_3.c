/*
Student name: Long Tran
Student code: 1903387
Name of the codefile:
Date: 01/12/2020
Comments of the task:
e.g. was it easy or difficult ... (free comments)
And answer to the question "DO you want to take a resit exam or not?"
*/

#include <stdio.h>
#include <stdlib.h>
int main(){

    int choice = 0;
    printf("\nMenu");
    printf("\n1. Print 50 dice values.");
    printf("\n2. Print the smallest of 5 values.");
    printf("\n3. Add your name and student code to a file called me.txt\n");
    scanf("%d", &choice);

    switch (choice){
    case 1:
        for ( int i = 0; i < 50; i++){
        int x = rand(); // included in stdlib.h 
        int n = x % 6 + 1; // +1 because computer does 0-5 so +1 makes it 1-6 
        printf("%d ", n);
        break;
    }
    case 2:
        printf("I have no time to finish this.\n");
        break;
    default:
        printf("Wrong number. It is only 1-3.\n");
    }
    return 0;
}