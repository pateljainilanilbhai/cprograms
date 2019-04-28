#include<conio.h>
#include<stdio.h>
int main()
{
	float a,b,c,d;
	clrscr();
	printf("enter value to change celsius to farenhit \n");
	scanf("%f",&a);
	b=(1.8*a)+(32);
	printf("temperature in farenhit is %f \n",b);
	printf("enter value to change farenhit to celsius \n");
	scanf("%f",&c);
	d=(c-32)/1.8;
	printf("temperature in celsius is %f",d);
	getch();
	return 0;
}