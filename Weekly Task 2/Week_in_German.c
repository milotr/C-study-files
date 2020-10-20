#include <stdio.h>

int main()
{
    int input;
    printf("Type in the weekday 2-6: ");
    scanf("%d", &input);

    if (input == 2)
    {
        printf("der Montag\n");
    }
    else if (input == 3)
    {
        printf("der Dienstag\n");
    }
    else if (input == 4)
    {
        printf("der Mittwoch\n");
    }
    else if (input == 5)
    {
        printf("der Donnerstag\n");
    }
    else if (input == 6)
    {
        printf("der Freitag\n");
    }
}