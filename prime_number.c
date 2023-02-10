#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;

printf("Enter a number you want to test: \n");
scanf("%d",&n);

for (i=2;i<n;i++)
{
    if (n%i==0)
    {
        printf("Not prime");
        break;
    }
    else
    {
        printf("Prime");
        break;
    }
}
// if(i==n)
// {
//     printf("Prime");
// }
getch();
return 0;

}