#include<stdio.h>
#include<conio.h>
#define Area(x) (3.14*x*x)
int main()
{
float c1,r1,c2,r2;

printf("enter the value of r1:");
scanf("%f",&r1);
printf("enter the value of r2:");
scanf("%f",&r2);
c1=Area(r1);
c2=Area(r2);
printf("\n%f",c1);
printf("\n%f",c2);
getch();
return 0;
}
