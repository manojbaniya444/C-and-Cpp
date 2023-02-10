#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("document.txt","w");

    if (fptr==NULL)
    {
        printf("File cannot be opened.");
    }
    
    return 0;
}