#include <stdio.h>
#include <conio.h>

int main()
{
    char names[5][15];
    int i;
    printf("Enter the names of five persons :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &names[i]);
    }

    printf("The entered names are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t", names[i]);
    }
    getch();
    return 0;
}