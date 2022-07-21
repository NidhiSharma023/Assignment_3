#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("This is Even number.");
    }
    else
    {
        printf("This is Odd number.");
    }
    getch();
    return 0;
}


