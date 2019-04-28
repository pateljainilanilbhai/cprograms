#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define area(x) (3.14*x*x)
int main()
{	float r,a,r2,a2;
	clrscr();
	printf("enter the radius:");
	scanf("%f",&r);
	a=area(r);
	printf("area is %f",a);
	printf("enter the radius:");
	scanf("%f",&r2);
	a2=area(r2);
	printf("area is %f",a2);
	getch();
	return 0;
		 }