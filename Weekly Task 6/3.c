#include <stdio.h>
#include <strings.h>

int main()
{
    char postcode[] = "67100";
    int len = strlen(postcode);
    if (len == 5)
    {
        printf("There are 5 numbers in postcode. \n");
    }
    else
    {
        printf("There must be 5 numbers in postcode. \n");
    }
    
    return 0;
}