#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,D;
    printf("Enter a , b and c :");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        printf("D=%d\nRoots of Quadratic equation is Real and Distinct",D);
    }
    if(D<0)
    {
        printf("D=%d\nRoots of Quadratic equation is Imaginary",D);
    }
    else
    {
            printf("D=%d\nRoots of Quadratic equation is Real and Equal",D);
    }
    getch();
    return 0;
}

