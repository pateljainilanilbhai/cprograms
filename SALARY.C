#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int s;
	float DA,HRA,MA,TA,PF,IT = 500,NTS,ALL,DED;


	clrscr();

	printf("\n\tEnter your basic salary : ");
	scanf("%d",&s);

	printf("\nAllowancies");

	DA = (0.7)*s;
	HRA = (0.07)*s;
	MA = (0.02)*s;
	TA = (0.04)*s;
	ALL = DA + HRA + MA + TA;

	printf("\n\t\tDA = %f",DA);
	printf("\n\t\tHRA = %f",HRA);
	printf("\n\t\tMA = %f",MA);
	printf("\n\t\tTA = %f",TA);

	printf("\nDeduction");

	PF = (0.12)*s;
	IT = 500;

	DED = PF + IT;
	printf("\n\t\tPF = %f",PF);
	printf("\n\t\tIT = %f",IT);

	printf("\n-----------------------------------------------");

	NTS = s + ALL - DED;

	printf("\n\tNet Salary = %f",NTS);
	getch();
}
