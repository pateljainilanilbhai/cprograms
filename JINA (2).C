#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
float r1,r2,r3,ar1,ar2,ar3;
clrscr();
printf("enter radius 1:");
scanf("%f",&r1);
printf("enter radius 2:");
scanf("%f",&r2);
printf("enter radius :3");
scanf("%f",&r3);
ar1=PI*r1*r1;
ar2=PI*r2*r2;
ar3=PI*r3*r3;
printf("Area of first circle is:%f",ar1);
printf("\nArea of second circle is:%f",ar2);
printf("\nArea of third circle is:%f",ar3);
getch();
}