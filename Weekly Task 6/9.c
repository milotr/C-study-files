#include <stdio.h>
#include <strings.h>


int main(){
    char num[] = "2, 3.5, 1, 5.8, 10";
    int sum = 0;
    int len = strlen(num);
    for (int i = 0; i < len; i++)
    {
        sum += num[i];
    }
    printf ("The sum is: %d\n", sum);
    return 0;
}
