#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,temp;
 clrscr();
 printf("enter the value for a:");
 scanf("%d",&a);
 printf("\nenter the value for b:");
 scanf("%d",&b);
 temp=a;
 a=b;
 b=temp;
 printf("\nthe value of a is:");
 printf("%d",a);
 printf("\nthe value of b is:");
 printf("%d",b);
 getch();
}