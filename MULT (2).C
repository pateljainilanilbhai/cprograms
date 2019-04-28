#include<stdio.h>
#include<conio.h>
int main()
{float m,n,a;
clrscr();
printf("enter the value of m");
scanf("%f",&m);
printf("enter the value of n");
scanf("%f",&n);
a=(int)m%(int)n;
if (a==0)
{printf("%f is multiple of %f",m,n);}
else
{printf("%f is not a multiple of %f",m,n);}
getch();
return 0;
}

