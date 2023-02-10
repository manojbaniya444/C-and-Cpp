#include <stdio.h>
int main()
{
    float a, b, ans;
    int operator;
    printf("Enter the two numbers\n");
    scanf("%f%f", &a, &b);
    printf("Enter 1 for addition, 2 for subraction ,3 for multiplication and 4 for division.\n");
    scanf(" %d", &operator);
    
    switch(operator)
    {
    case 1:
        ans = a + b;
        printf("%f", ans);
        break;
    case 2:
        ans = a - b;
        printf("%f", ans);
        break;
    case 3:
        ans = a * b;
        printf("%f", ans);
        break;
    case 4:
        ans = a / b;
        printf("%f", ans);
        break;
    default:
        printf("Invalid");
    }
    return 0;
}