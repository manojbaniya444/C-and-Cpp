#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    char a[5] = {"hello"};
    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if ((i + j) < 5)
                putchar(a[j]);
            else
                putchar(' ');
        }
        putchar('\n');
    }
}