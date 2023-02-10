#include<stdio.h>
int main()
{
    int a[100],even=0,odd=0;
    for(int i=0;i<100;i++)
    {
        printf("Enter a number : \t");
        scanf("%d",&a[i]);

        if(a[i]!=-1)
        {
          if(a[i]%2==0)
          even++;
          else if(a[i]%2!=0)
          odd++;
        }
        else
        break;
    }
    printf("The total numbers of odd numbers entered is %d\n",odd);
    printf("The total numbers of even numbers entered is %d",even);

    return 0;
}