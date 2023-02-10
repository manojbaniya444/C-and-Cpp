#include<stdio.h>
// #include<conio.h>

int main()
{

    int n,space,i;
    printf("Enter n");
    scanf("%d",&n);

    // space = n-1;

    for(i=1;i<=n;i++)
    {
        space = n-i;
        for(int j=1;j<=space;j++)
        {
            printf(" ");

        }

        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        // space--;
        printf("\n");
    }
    // getch();
    return 0;

}