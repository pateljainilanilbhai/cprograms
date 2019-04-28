#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a,b,c;
 float r1,r2,det;
 clrscr();
 printf("Enter the value of a,b,c");
 scanf("%d%d%d",&a,&b,&c);
 det=(float)(b*b)-(4*a*c);
 sqrt(det);
 printf("delta is %d\n",det);
 r1=(-b+sqrt(det))/(2*a);
 printf("the value of r1:%f\n",r1);
 r2=(-b-sqrt(det))/(2*a);
 printf("the value of r2:%f",r2);
 getch();
 }