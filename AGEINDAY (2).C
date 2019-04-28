#include<conio.h>
#include<stdio.h>
int main()
{
	int b,c,d,e;
	long int a;
	clrscr();
	printf("enter your age in days");
	scanf("%ld",&a);
	b=a/365;
	c=a%365;
	d=c/30;
	e=c%30;
	printf("age in years is %d \n",b);
	printf("in months is %d \n",d);
	printf("in days is %d \n",e);
	getch();
	return 0;
}