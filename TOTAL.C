#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	clrscr();
	printf("enter the 3 digit number");
	scanf("%d",&a);
	b=a%100;
	c=b%10;
	d=b-c;
	e=d/10;
	f=(a-b)/100;
	g=f+c+e;
	printf("total of digits is %d",g);
	getch();
	return 0;
}