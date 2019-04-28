#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
printf("Enter the value b:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d",a);
printf("\nb=%d",b);
getch();
}
