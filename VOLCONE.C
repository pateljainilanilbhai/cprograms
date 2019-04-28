#include<conio.h>
#include<stdio.h>
void main()
{
	int r,h;
	float v;

	clrscr();

	printf("\n\tEnter value of radius and height :");
	scanf("%d%d",&r,&h);

	v = (1.0/3)*(3.14)*(r*r*h);

	printf("\n\tVolume is %f :",v);
	getch();
}