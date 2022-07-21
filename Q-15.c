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
    else if(a<0)
    {
        printf("This is a negative number.");
    }
    else if(a==0)
    {
        printf("This is a Zero.");
    }
    getch();
    return 0;
}
