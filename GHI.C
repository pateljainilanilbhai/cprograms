#include<stdio.h>
#include<conio.h>
#define Area(r) (3.14*r*r)
void main()
{
float a,b,c,Ar1,Ar2,Ar3,area1,area2,area3;
clrscr();
printf("Enter a");
scanf("%f",&a);
printf("Enter b");
scanf("%f",&b);
printf("Enter c");
scanf("%f",&c);
Ar1=Area(a);
Ar2=Area(b);
Ar3=Area(c);
printf("The area of first circle is area1 %f",Ar1);
printf("The area of second circle is area2 %f",Ar2);
printf("The area of third circle is area3 %f",Ar3);
getch();
}
