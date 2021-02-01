#include <stdio.h>
#include <string.h>

int main(){
    char string[17] = "dkm";
    char string2[17];
    strcpy(string2, string);
    char *strrev(char *string2);
    int compare;
    compare = strcmp(string,string2); // strcmp uses int 

    if (compare == 0)
    {
        printf("It is palindrome.\n");
    }
    else
    {
        printf("It's not.");
    }
    
    return 0;
}