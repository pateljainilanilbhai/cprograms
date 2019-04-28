#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d;
printf("please enter the value of principle interest");
scanf("%f", &a);
printf("please enter the value of rate of interest in percentage");
scanf("%f", &b);
printf("please enter the number of years");
scanf("%f", &c);
d=(a*b*c)/100;
printf("simple int for rs %f and rate %f and for %f years is %f", a,b,c,d);
getch();
}