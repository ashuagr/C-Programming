#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i;
	int arr[5];
	int pos=0;
	int neg=0;
	int zero=0;
	int even=0;
	int odd=0;

	printf("Enter the Number:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0; i<5; i++)
	{
		if(arr[i]>0)
		{
			pos++;
		}
		else if(arr[i]<0)
		{
			neg++;
		}
		else if(arr[i]==0)
		{
			zero++;
		}
		if (arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Positive Is: %d\n",pos);
	printf("Negative Is: %d\n",neg);
	printf("Zero Is: %d\n",zero);
	printf("Even Is: %d\n",even);
	printf("Odd Is: %d\n",odd);
	getch();
	return 0;
}
