#include<stdio.h>
#include<conio.h>
int main()
{
    int a,x;
    printf("Enter a number:");
    scanf("%d",&a);
    x=a&1;
    if(x==1)
    {
        printf("%d is a odd number",a);
    }
    else
    {
        printf("%d is a even number",a);
    }
    getch();
    return 0;
}


