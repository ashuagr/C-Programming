#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int num,i;
	int max=0;
	int min=0;

	printf("Enter The Number:\n");
	for(i=1; i<=5; i++)
	{
		scanf("%d",&num);

		max=num;
		num=max;
		if(num>max)
		{
			max=num;
		}
		else if(num<min)
		{
		       min=num;
		}
	}
	printf("Biggest Number Is: %d\n",max);
	printf("Smallest Number Is: %d\n",min);
	getch();
	return 0;
}
