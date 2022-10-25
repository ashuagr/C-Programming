#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();

	int num;
	int i,j;
	printf("Enter The Number:\n");
	scanf("%d",&num);

	for(i=num; i>=1; i--)
	{
		printf("\n");
		for(j=i; j<=num; j++)
		{
			printf("%d",j);
		}
	}
	getch();
	return 0;
}
