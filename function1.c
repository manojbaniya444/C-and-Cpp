#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
    int c = a+b ;
    return c;
}

int main()
{
    int x,y,ans;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&x,&y);
    ans = add(x,y);
    printf("The sum of %d and %d is %d",x,y,ans);
    getch();
    return 0;
}