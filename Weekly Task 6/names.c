#include <stdio.h>
#include <strings.h>
#include <string.h>

int main(){
    char *names[50] = {"Linh","Trang","Nguyen","Anh","Thu","\0"};
    char find[] = "Thu";
    
    for (int i = 0; i < 5; i++)
    {
        printf ("\n %s \n", names[i]);
        if (find == names[i])
        {
            printf("\n Position: %s", names[i]);
        }
    }
    return 0;
}