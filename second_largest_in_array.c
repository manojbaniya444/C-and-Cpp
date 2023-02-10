#include <stdio.h>
int main()

{
    int a[100], n, i, j, temp, slarge;
    printf("Enter the number of elements you want in an array:\n");
    scanf("%d", &n);
    printf("Enter the elements in an array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])     //arranging in ascending order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The elements of an array in ascending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    slarge = a[n - 2];  //second large number in array is n-2
    printf("\nThe second largest element in an array is %d", slarge);
    return 0;
}