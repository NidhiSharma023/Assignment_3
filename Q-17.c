#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("Valid Triangle.");
    }
    else
    {
        printf("Invalid Triangle.");
    }
    getch();
    return 0;
}

