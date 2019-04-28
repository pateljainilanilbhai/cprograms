#include<stdio.h>
#include<conio.h>
void main()
{
    float pi, r, a;
    pi=3.14;
    clrscr();
    printf("Enter the value or Radius");
    scanf("%f",&r);
    a=pi*r*r;
    printf("Area is %f",a);
    getch();
}