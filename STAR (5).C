#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a;
	clrscr();
	printf("good morning \n");

	printf("how many rows you want?");
	scanf("%d",&a);
	a=a+2;
	for(i=1;i<a;i++)
	{printf("\n"); getch();

	for(j=1;j<i;j++)
	{printf("*");getch();
	}
	}
	getch();
	return 0;
	}

