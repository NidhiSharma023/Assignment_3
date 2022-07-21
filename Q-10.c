#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,p,l;
    printf("Enter a Cost Price = ");
    scanf("%f",&a);
    printf("Enter a Selling Price = ");
    scanf("%f",&b);
    if(b>a)
    {
        p=b-a;
        printf("Profit = %f",p);
        printf("\nProfit Percentage = %f",p*100/a);
    }
    else
    {
        l=a-b;
        printf("Loss = %f",l);
        printf("\nLoss Percentage = %f",l*100/a);
    }
    getch();
    return 0;
}
