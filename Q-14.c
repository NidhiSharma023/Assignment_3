#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%3==0||n%7==0)
        {
            printf("%d is divisible by 3 or 7",n);
        }
    else
        {
            printf("%d is not divisible by 3 or 7",n);
        }
    getch();
    return 0;
}


