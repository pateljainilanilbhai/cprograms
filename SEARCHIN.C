#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10];   int i; int n;     int count=0;
	clrscr();

	for(i=0;i<10;i++)
	{printf("enter num: %d :",i);
	scanf("%d",&a[i]);
	printf("\n");


	}
	printf("enter the number you want to search: \n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
	if(a[i]==n)
	{count=count+1;
	printf("found at index %d \n",i);
	getch();
	}

	}
	{
	if (count==0)
	printf("element not found");
	else
	printf("total count=%d \n",count);}

	getch();
	return 0;
	}

