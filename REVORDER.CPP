#include<stdio.h>
#include<conio.h>
int main()
{
	/*program to accept a number
	and print that number in reverse order.

	Ex:- 1234
	Output:- 4321*/

	clrscr();

	int num;
	int reverse=0;
	int reminder;

	printf("Enter the number:");
	scanf("%d",&num);

	while(num!=0)
	{
		reminder=num%10;
		reverse=reverse*10+reminder;
		num=num/10;
	}
	printf("Reverse Is:%d",reverse);
	getch();
	return 0;
}