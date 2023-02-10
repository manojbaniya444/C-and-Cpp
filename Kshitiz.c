#include <stdio.h>
#include <string.h>

int main()
{

    int len, spc, i;
    char str[] = {"nepal"};
    len = strlen(str);
    spc = len-1;
    for (i=0; i < len; i++)
    {
        for (int j=0; j<spc; j++)
        {
            printf(" ");
        }
        for (int k =0; k < 2*i+1; k++)
        {
            printf("%c",str[i]);
        }
        spc --;
        printf("\n");
    }
    return 0;
}
