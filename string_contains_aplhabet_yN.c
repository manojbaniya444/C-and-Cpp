#include<stdio.h>

void check(char string[])
{
    int i;
    for(i=0;i<20;i++)
    {
        if ((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z')) 
        {
            printf("the entered string contains alphabet:");
           break;
        }
        else
        {
            printf("No the entered string does not contain alphabet:");
        }
        break;
    }
}
int main()
{
    char str[20];
    printf("Enter any word\n");
    scanf("%s",&str);
    check(str);
    return 0;
}