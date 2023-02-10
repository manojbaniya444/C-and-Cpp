#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;
    char a[8] = {"PULCHOWK"};
    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i + j < 7)
                putchar(' ');
            else
                putchar(a[j]);
        }
        putchar('\n');
    }
}