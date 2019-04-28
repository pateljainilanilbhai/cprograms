#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{       float bs,a;
	printf("please enter your basic salary:");
	scanf("%f",&bs);
	printf("ALLOWANCE \n \t DA = %f \n \t HRA = %f \n \t MA = %f \n \t TA = %f \n",0.70*bs,0.07*bs,0.02*bs,0.04*bs);
	printf("DEDEUCTION \n \t PF = %f \n \t IT=500 \n",12.0*bs);
	a=(0.83*bs)+bs+(12.0*bs)+500.00;
	printf("netsallaty=%f",a);
	getch();
	return 0;
	}