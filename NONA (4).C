#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c;
printf("write the dividend");
scanf("%d", &a);
printf("write the divisor");
scanf("%d", &b);
c=a%b;
if(c==0)
{
printf("the %d is divisible by %d",a,b); getch();
}
else
{
printf("the %d is not divisible by %d",a,b);
getch();
}
}