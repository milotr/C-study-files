#include <stdio.h>
int main()
{
    char digits[10] = "0306406152";
    int i, s = 0, t = 0;

        for (i = 0; i < 10; i++) {
                t += digits[i];
                s += t;
        }
        printf("%d \n", t);
        printf("%d \n", s);
        return s % 11;
}
