#include<stdio.h>
#include<conio.h>
int main()
{       float a,b,c;
	clrscr();
	printf("enter a:");
	scanf("%f",&a);
	printf("enter b:");
	scanf("%f",&b);
	printf("enter c:");
	scanf("%f",&c);
	printf("the biggest value is %f",a>b?(a>c?a:c):(b>c?b:c));
	getch();
	return 0;
}