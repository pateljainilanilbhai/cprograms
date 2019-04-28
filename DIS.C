#include<stdio.h>
#include<conio.h>
int main()
{       float km,m,inch,cm,feet;
	clrscr();
	printf("enter the distane in kilometers:");
	scanf("%f",&km);
	m=km*1000.0;
	cm=m*100.0;
	feet=m*3.28084;
	inch=m*39.3701;
	printf("in km %f \n in metre %f \n in cm %f \n  in inch %f \n in feet %f \n",km,m,cm,inch,feet);
	getch();
	return 0;
	}