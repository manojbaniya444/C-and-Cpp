#include <stdio.h>
#include <conio.h>
void main()
{
    char a[5] = {"HELLO"};
    int i, j;
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (i >= j)
                putchar(a[j]);
            else
                putchar(' ');
        }

        putchar('\n');
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if(i+j<5)
                putchar(a[j]);
            else
                putchar(' ');
        }
        putchar('\n');
    }
}