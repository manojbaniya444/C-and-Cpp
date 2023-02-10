#include <stdio.h>
int main()
{
    int i, j, k, space;
    char name[5] = {"NEPAL"};
    space = 4;
    for (i = 0; i <5; i++)
    {
        for (j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i +1; k++)
        {
            printf("%c",name[i]);
        }
        space--;
        printf("\n");
    }
    return 0;
}