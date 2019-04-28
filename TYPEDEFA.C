#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
	typedef float circle;
	circle area,r,r2,area2;
	clrscr();
	printf("enter the radius:");
	scanf("%f",&r);
	printf("enter the second radius:");
	scanf("%f",&r2);
	area=pi*r*r;
	area2=pi*r2*r2;
	printf("area is %f:",area);
	printf("area is %f:",area2);
	getch();
	return 0;
}
