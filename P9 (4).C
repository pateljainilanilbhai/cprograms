#include<stdio.h>
#include<conio.h>
#define AREA(x)(3.14*x*x)
void main()
{
    float r1, r2, a1, a2;
    clrscr();
    printf("Enter first radius");
    scanf("%f",&r1);
    printf("Enter second radius");
    scanf("%f",&r2);
    a1=AREA(r1);
    a2=AREA(r2);
    printf("AREA of first circle is %f and area of second circle is %f",a1 ,a2);
    getch();
}