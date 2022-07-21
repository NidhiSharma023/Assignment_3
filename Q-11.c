#include<stdio.h>
#include<conio.h>
int main()
{
    int eng,hindi,maths,sci,sst;
    printf("Enter Marks of 5 Subjects\n");
    printf("\nEnglish:");
    scanf("%d",&eng);
    printf("\nHindi:");
    scanf("%d",&hindi);
    printf("\nMaths:");
    scanf("%d",&maths);
    printf("\nScience:");
    scanf("%d",&sci);
    printf("\nSocial Studies:");
    scanf("%d",&sst);
    if((eng>=33)&&(hindi>=33)&&(maths>=33)&&(sci>=33)&&(sst>=33))
    {
        printf("\nThis Student is pass.");
    }
    else
    {
        printf("\nThis Student is fail.");
    }
    getch();
    return 0;
}
