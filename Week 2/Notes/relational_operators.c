#include <stdio.h>

int main()
{
    // realtional operators
    // == != < > <= >=
    int a = 10;
    printf ("(a == 10)? %d \n",(a ==10));
    // 0 means false
    printf("(a != 10)? %d \n", (a != 10));

    printf("(a <= 10)? %d \n", (a <= 10));

    // dicision making 
    // if or if else

    if (a==10)
        printf("a is 10 \n");
    else
        printf("a is not 10 \n");


    return 0;
}