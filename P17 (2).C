#include<stdio.h>
#include<conio.h>
void main()
{
   float pi=3.14, r, h, v;
   clrscr();
   printf("ENTER THE RADIUS AND HEIGHT RESPECTIVELY:");
   scanf("%f%f",&r,&h);
   v=(1.0/3)*pi*r*r*h;
   printf("VOLUME=%f",v);
   getch();
}