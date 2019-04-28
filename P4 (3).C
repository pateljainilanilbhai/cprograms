#include<stdio.h>
#include<conio.h>
void main()
{
float r,h,area,c;
clrscr();
printf("Enter the value of radius=");
scanf("%f",&r);
area=3.14*r*r;
printf("\nArea of circle is %f",area);
printf("\nEnter the height=");
scanf("%f",&h);
c=(3.14*r*r*h)/3;
printf("Volume of cones=%f",c);
getch();
}
