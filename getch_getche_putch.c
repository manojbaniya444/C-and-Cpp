#include<stdio.h>
#include<conio.h>
int main()
{
    char c1,c2;
    printf("Enter a character.\n");
    c1 = getch();
    printf("Enter another character.\n");
    c2 = getche();

    printf("The first character is %c",c1);
    printf("\nThe second character is %c",c2);
    getch();
    return 0;
}