#include<stdio.h>
#include<conio.h>
int main()
{
    char rank;
    printf("Enter your rank:\n");
    rank = getchar();   //getchar() function reads a character from a stadard input device
    printf("Your rank is :\n");
    putchar(rank);   //displays a character to the standard output device
    getch();
    return 0;

}