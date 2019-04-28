#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{       int a,b,c,d,e,f,g;
	clrscr();
	printf("your quadratic equation is ax^2+bx+c=0\n");
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	d=pow(b,2)-(4*a*c);
	e=sqrt(d);
	f=(-b-e)/(2*a);
	g=(-b+e)/(2*a);
	printf("first root is %d and second
	root is %d",f,g);
	getch();
	return 0;
	}
