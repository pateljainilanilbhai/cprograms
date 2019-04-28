#include<stdio.h>
#include<conio.h>
#define pi 3.1415
void main()
{
float a1,a2,r1,r2;
clrscr();
printf("Enter the value r1 and r2:");
scanf("%f%f",&r1,&r2);
a1=pi*r1*r1;
a2=pi*r2*r2;
printf("%f",a1);
printf("\n%f",a2);
getch();
}