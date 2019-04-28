#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("\n enter value of b:");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("\n value of a is %d value of b is %d",a,b);
	getch();
	return 0;
}
