#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double a,b,c,x1,x2,D,rp,ip;
clrscr();
printf("enter the value of a:");
scanf("%lf",&a);
printf("enter the value of b:");
scanf("%lf",&b);
printf("enter the value of c:");
scanf("%lf",&c);
D=pow(b,2)-4*a*c;
if (D>0)
{
printf("ROOTS ARE REAL AND DISTINCT");
x1=(-b+sqrt(D))/2*a;
x2=(-b-sqrt(D))/2*a;
printf("\n%lf+%lfi",x1);
printf("\n%lf+%lfi",x2);
}
else if(D==0)
{
printf("ROOTS ARE EQUAL");
x1=x2=-b/2*a;
printf("%lf",x1);
}
else
{
printf("ROOTS ARE COMPLEX AND DISTINCT");
rp=-b/2*a;
ip=sqrt(-D)/2*a;
printf("\n%lf+%lfi",rp,ip);
printf("\n%lf-%lfi",rp,ip);
}
getch();
}
