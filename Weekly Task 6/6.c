#include <stdio.h>
#include <string.h>

int main () {
    char url[] = "//centria.fi";
    const char protocal[] = "https";
    char *pointer;

    pointer = strstr(url, protocal);

    if (pointer != NULL)
    {
        printf("The protocal is https.\n");
    }
    else
    {
        printf("The protocal is http or not provided.\n");
    }
    
    return (0);
}
