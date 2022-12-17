#include<stdio.h>
#include<conio.h>
int main()
{ 
       Program to accept two value of
         a & b and swap their value. 
       
      clrscr();
      
      int a;
      printf("Enter The 1st Number:");
      scanf("%d",&a);
      
      int b;
      printf("Enter The 2st Number:");
      scanf("%d",&b);

      int temp;
      temp=a;
      a=b;
      b=temp;
      
      printf("\n After Swapping");
      printf("\n A=%d, B=%d",a,b);
      getch();
      return 0;
  }     
