#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if((a>99)&&(a<999))
    {
        printf("%d is a three digit number.",a);
    }
    else
    {
        printf("%d is not a three digit number.",a);
    }
    getch();
    return 0;
}
