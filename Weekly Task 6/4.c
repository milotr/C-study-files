#include <stdio.h>
#include <string.h>

int main()
{
    char email[] = "long.tran@centria.fi";
    char at[] = "@";
    char *pointer = strpbrk(email, at); // this functions reutrns 
    // a pointer to the chracter that mathes or NULL if no such 
    // chracter is found

    if (pointer != NULL)
    {
        printf("There is @ in the strings \n");
    }
    else
    {
        printf("There is no @ in the strings \n");
    }
    return 0;
}