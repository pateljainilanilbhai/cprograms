#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d;
clrscr();
printf("Enter the input amount");
scanf("%f",&a);
b=(int)a;
c=a-b;
d=c*100;
printf("The amount of rupees are %f",b);
printf("The amount of paise are %f",d);
getch();
}