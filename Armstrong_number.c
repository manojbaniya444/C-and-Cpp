#include<stdio.h>
int armstrong(int);

int main()
{
    int num,check;
    printf("Enter any number:\n");
    scanf("%d",&num);
    check = armstrong(num);
    if (check==num)
    {
        printf("The number %d is armstrong number:",num);
    }
    else
    {
        printf("The number %d is not armstrong number:",num);
    }
    return 0;

}

armstrong(int n)
{int sum=0;
    while(n!=0)
    {
        int r;
        r=n%10;
        
        sum+=r*r*r;
        n=n/10;
        
    }
    return sum;
}
