#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("\n enter value of b:");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("swapped a is %d b is %d",a,b);
	getch();
	return 0;

	}