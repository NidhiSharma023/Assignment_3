#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("This is a positive number.");
    }
    else
    {
        printf("This is a non-positive number.");
    }
    getch();
    return 0;
}
