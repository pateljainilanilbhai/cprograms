#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	int aa,bb,cc;
	char x[1000];
	clrscr();
	printf("what do you want to do?");
	printf("\n write 1 for additon write 2 for subtraction write 3 for multiplication write 4 for division");
	scanf("%d",&a);
	printf("enter first number");
	scanf("%d",&b);
	printf("enter second number");
	scanf("%d",&c);
	if (a=1)
	{aa=b+c;}
	if (a=2)
	{aa=b-c;
	}
	if (a=3)
	{aa=b*c;
	}

	if (a=4);
	{aa=b/c;
	}

	  printf("your result is %d",aa);

	getch();
	return 0;  getch();
	}
