#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter an alphabet:");
    scanf("%c",&a);
    if((a>='a')&&(a<='z'))
    {
        printf("Lower case");
    }
    else if((a>='A')&&(a<='Z'))
    {
        printf("Upper case");
    }
    else if((a>='1')&&(a<='9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    getch();
    return 0;
}




