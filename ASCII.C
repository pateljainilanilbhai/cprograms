#include<conio.h>
#include<stdio.h>
int main()
{
	char a,b;
	clrscr();
	printf("enter the character:");
	scanf("%c",&a);
	printf("the ascii value is %d \n",a);
	printf("enter the ascii value:",b);
	scanf("%c",&b);
	printf("char is %c",b);
	getch();
	return 0;
}