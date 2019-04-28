#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define area(x) (3.14*x*x)
int main()
{	float r,a;
	clrscr();
	printf("enter the radius:");
	scanf("%f",&r);
	 a=area(r);
	printf("area is %d",a);
	getch();
	return 0;
	}