#include<stdio.h>
int main()
{
    int a,b ;
    char str[] = "I enjoy programming";
    double c = 123.55667788;
    printf("Enter the values of a and b.\n");
    scanf("%3d%2d",&a,&b);   //if the integer length is larger than 3 then the remaining integer will automatically assign to the b variable.
    printf("a=%5d\n b=%-7d",a,b);
    printf("\n%10.7s",str);
    printf("\n%0.3f",c);
    printf("\n%-10.6f",c);
    return 0;
}