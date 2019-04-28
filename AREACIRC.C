#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{	float area,r;
	clrscr();
	printf("enter the radius:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("area is %f:",area);
	getch();
	return 0;
}
