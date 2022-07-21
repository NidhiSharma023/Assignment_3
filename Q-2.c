#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("This is divisible by 5.");
    }
    else
    {
        printf("This is not divisible by 5.");
    }
    getch();
    return 0;
}

