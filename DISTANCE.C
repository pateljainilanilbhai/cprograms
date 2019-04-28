#include<stdio.h>
#include<conio.h>
int main()
{
	float ft,m,cm,km,inch;
	clrscr();
	printf("enter the distance between 2 cities:");
	scanf("%f",&km);
	m=km*1000;
	printf("distance in meter is %f \n",m);
	ft=m*3.28;
	printf("distance in feets is %f \n",ft);
	inch=m*39.37;
	printf("distance in inches is %f \n",inch);
	cm=m*100;
	printf("distance in centimetres is %f \n",cm);
	getch();
	return 0;
}