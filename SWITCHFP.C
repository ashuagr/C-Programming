#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();

	printf("\nChoose Option\n");
	printf("\t1.Factorial Number\n");
	printf("\t2.Prime Or Not\n");
	printf("\t3.Even Or Odd\n");

	int ch;
	printf("\nSelect Option:");
	scanf("%d",&ch);

	switch(ch)
	{
		case 3:
		int num;
		printf("\nEnter The Number:\n");
		scanf("%d",&num);

		if(num/2)
		{
			printf("\nIts Even Number");
		}
		else
		{
			printf("\nIts Odd");
		}
		break;

		default:
			printf("Invaild Option");
			break;
	}
		getch();
		return 0;
}
