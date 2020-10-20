#include <stdio.h>

int main()
{
    int m;
    printf("Type in the month (1-12): ");
    scanf("%d", &m);
    
    if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m = 12))
    {
        printf("This month has 31 days\n");
    }
    else if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
    {
        printf("This month has 30 days\n");
    }
    else
    {
        printf("This month has 28 days\n");
    }
    
 return 0;
}