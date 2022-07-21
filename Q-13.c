#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if((a/3) & (a/2))
    {
        printf("%d is divisible by 2 and 3",a);
    }
    else
    {
        printf("%d is not divisible by 2 and 3",a);
    }
    getch();
    return 0;
}

