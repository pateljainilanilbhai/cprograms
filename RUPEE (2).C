#include<stdio.h>
#include<conio.h>
int main()
{       int c,b; float a;
	clrscr();
	printf("ENTER THE AMOUNT TO SEPRATE IT:");
	scanf("%f",&a);
	b=(int)a;
	printf("ruppes are %d\n",b);
	c=((float)a-(float)b)*100;
	printf("paisa are %d",c);
	getch();
	return 0;
	}
