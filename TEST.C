#include<conio.h>
#include<stdio.h>
int main()
{
float a;               clrscr();
printf("enter a just 0.7:");
scanf("%f",&a);
if (a>=0.7)
{
printf("a is greater than 0.7");
}
if (a<0.7)
{
 printf("a is less than 0.7");
}
 printf("\n you entered %f",a);


getch();
return 0;
}
