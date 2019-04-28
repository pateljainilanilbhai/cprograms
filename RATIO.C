#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b; float c;
	clrscr();
	printf("enter the number of females;");
	scanf("%d",&a);
	printf("enter the number of males:");
	scanf("%d",&b);
	c=(float)a/(float)b;
	printf("ratio is %f",c);
	getch();
	return 0;
}