#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int num;
	printf("Enter The Number:\n");
	scanf("%d",&num);

	for(int i=1; i<num; i++);
	{
		int raised;
		raised=num*i;
		printf("raised Value is:%d",raised);
	}
	getch();
	return 0;
}