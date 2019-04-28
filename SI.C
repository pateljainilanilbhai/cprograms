#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
       int p,n; float r,si;
       clrscr();
       printf("enter the principle amount");
       scanf("%d",&p);
       printf("enter the rate");
       scanf("%f",&r);
       printf("enter the period");
       scanf("%d",&n);
       si=(p*r*n)/100;
       printf("simple interest is %f",si);
       getch();
       return 0;
}

