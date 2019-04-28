#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float p,r,n,si; clrscr();
	printf("enter the principal amount");
	scanf("%f",&p);
	printf("enter the rate:");
	scanf("%f",&r);
	printf("enter the period");
	scanf("%f",&n);
	si=((p*r*n)/100.0);
	printf("simple interest is %f",si);
	getch();
	return 0;
	}