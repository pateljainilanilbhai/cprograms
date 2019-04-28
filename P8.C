#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double a,b,c,x1,x2,d,rp,ip;
clrscr();
printf("Enter the value a,b & c:");
scanf("%lf%lf%lf",&a,&b,&c);
d=pow(b,2)-4*a*c;
if(d>0)
{
printf("roots are real and distinct");
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("%lf",x1);
printf("%lf",x2);
}
else if(d==0)
{
printf("roots are real and equal");
x1=x2=-b/(2*a);
printf("%lf",x1);
}
else
{
printf("roots are complex");
rp=-b/(2*a);
ip=sqrt(-d)/(2*a);
printf("%lf+%lfi and %lf-%lfi",rp,ip,rp,ip);
}
getch();
}