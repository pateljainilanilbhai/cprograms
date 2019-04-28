#include<stdio.h>
#include<conio.h>
void main()
{
float f,c;
clrscr();
printf("\nEnter the value of celcius:");
scanf("%f",&c);
f=((9.0/5)*c)+32;
printf("\nFahrenheit=%f",f);
getch();
}