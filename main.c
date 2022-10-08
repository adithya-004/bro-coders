#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,bal;
    printf("user input amount:");
    scanf("%d",&a);
    printf("number of tickets:");
    scanf("%d",&b);
    if(a%5==0)
    {
        if(a==5)
        {
        printf("print tickets");
    }
    else if(a<5*b)
    {
        printf("the given amount is not enough");
    }
    else
    {
        bal=a-5*b;
        printf("print tickets");
        printf("\nbalance amount=%d",bal);
        }}
    else
    {
        printf("coin invalid");
    }
    getch();
    }
    
    