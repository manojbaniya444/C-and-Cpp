#include <stdio.h>
#include <conio.h>
int rec1(int);
int rec2(int);

int main()
{
    int n, k;
    printf("Enter the number : ");
    scanf("%d", &n);
    k = rec1(n);
    printf("The sum of the digits is %d", k);
    getch();
    return 0;
}

rec1(int n)
{
    int k;
    k = rec2(n);

    if (k >= 10)
        return rec1(k);
}

rec2(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + rec1(n / 10);
}
