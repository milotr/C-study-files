#include <stdio.h>

int main()
{
    double v = sqrt(9);

    short a1 = -30000;
    unsigned short a2 = 20000;

    int a3 = -2000000000;
    unsigned int a4 = 4000000000;

    long a5 = -200000000000;
    unsigned long a6 = 400000000000;

    float a7 = 1234.1234;
    double a8 = 1234.12345678;

    char a9 = 'k';
    char a10 = 65; // ASCII code, it becomes character "A"

    printf("a1 is %d \n", a1);
    printf("a2 is %d \n", a2);
    printf("a3 is %d \n", a3);
    printf("a4 is %u \n", a4);
    printf("a5 is %ld \n", a5);
    printf("a6 is %ld \n", a6);
    printf("a7 is %f \n", a7);
    printf("a8 is %f \n", a8);
    printf("a9 is %c \n", a9);
    printf("a10 is %c \n", a10);

    int a = 10;
    int b = 6;
    int c = a + b;
    printf("c is %d \n", c);

    c = a % b;
    printf("c is %d \n", c);

    c = a / b;
    printf("c is %d \n", c);

    short kkk = 40000;
    printf("kkk is %d \n", kkk);

    unsigned short mmm = 70000;
    printf('mmm is %d \n', kkk);

    // ++ -- 
    int w1 = 10;
    w1++;
    prinf("w1 is %d", w1++);

    int r = w1 ++;
    printf("r is %d \n",r);

    return 0;
}