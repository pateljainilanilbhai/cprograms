#include<stdio.h>
#include<conio.h>
int main()
{       float a;             int b;  int c;  int d;
	printf("enter the amount to be separated: \n");
	scanf("%f",&a);
	b=(int)a;
	printf("rupee= %d \n",b);

	c=((float)a-(float)b)*100;
	printf("paise= %d",c);

	getch();
	return 0;
	}