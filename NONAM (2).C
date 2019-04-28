#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int i,j,k;
	int d=1; int a;
	int e=0;
	char b[30];
	int c;
	long int z; z=0;
	printf("toll tax program \n");
	printf("toll tax program \n");
	printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");printf("toll tax program \n");






	getch();
	clrscr();
	a=0;

	for (d=1;a<7;e++)
	{
	 printf("\n enter the car no:\n");
	scanf("%s",&b);
	 printf("1. ahmedabad to nadiad 40 rs: \n2. ahmedabad to nadiad and return:70rs  \n3.ahmedabad to anand 50 rs \n4.ahmedabad to anand and return 100 rs \n5. ahmedabad to surat 150 rs; \n 6 ahmedabad to surat and return 290 rs");
	scanf("%d",&a);
	clrscr();
	if (a==1)
	{printf("happy journey");
	printf("\n drive safely");
	printf("\n ahmedabad to nadiad");
	printf("\n paid cash");
	printf("\nyour car no is: %s\n",b);
	c=40;
	}
	if (a==2)
	{  printf("happy journey");
	printf("\n drive safely");
	printf("\n ahmedabad to nadiad return");
	printf("\n paid cash");
	printf("\nyour car no is: %s\n",b);
	c=70;
	}
	if (a==3)
	{printf("happy journey");
	printf("\n drive safely");
	printf("\n ahmedabad to anand");
	printf("\n paid cash");
	printf("\nyour car no is: %s\n",b);
	c=50;
	}
	if (a==4)
	{printf("happy journey");
	printf("\n drive safely");
	printf("\n ahmedabad to anand return");
	printf("\n paid cash");
	printf("\nyour car no is: %s\n",b);
	c=100;
	}
	if (a==5)
	{printf("happy journey");
	printf("\n drive safely");
	printf("\n ahmedabad to surat");
	printf("\n paid cash");
	printf("\nyour car no is: %s\n",b);
	c=150;
	}
	if (a==6)
	{printf("happy journey");
	printf("\n drive safely");
	printf("\n ahmedabad to surat");
	printf("\n paid cash");
	printf("\nyour car no is: %s\n",b);
	c=290;
	}
	}
	z=z+c;
	printf("total income= %d",z);
	printf("total vehicles gone = %d",e-1);
	getch();
	return 0;
	}