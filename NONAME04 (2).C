#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d;
clrscr();
printf("enter number:");
scanf("%f",&a);
b=(int)a;
c=a-b;
d=c*100;
printf("\n the number of rupees are: %f",b);
printf("\n the numer of paise are:%f",d);
getch();
}