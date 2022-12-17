#include<stdio.h>
#include<conio.h>

int main()
{
    clrscr();
    
    int principle;
    printf("Enter The Principle Value:");
    scanf("%d",&principle);
    
    int rate;
    printf("Enter The Rate:");
    scanf("%d",&rate);
    
    int time;
    printf("Enter The Time:");
    scanf("%d",&time);
    
    int SI;
    si=(principle*rate*time)/100;
    printf("Simple Interest=%d",SI);
    getch();
    return 0;
 }   
