#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c,d,e,f,g,h;  clrscr();
printf("enter the value of three digit whose sum you want \n");
scanf("%d",&a);
b=a%100;
c=b%10;
d=b-c;
e=d/10;
f=a-b;
g=f/100;
h=c+e+g;
printf("the sum is %d",h);
getch();
return 0;
}