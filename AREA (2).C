#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main()
{
float d1,d2,r1,r2;
printf("enter the value of r1:");
scanf("%f",&r1);
printf("\nenter the value of r2:");
scanf("%f",&r2);
d1=pi*r1*r1;
d2=pi*r2*r2;
printf("\n%f",d1);
printf("\n%f",d2);
getch();
}
