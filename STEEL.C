#include<stdio.h>
#include<conio.h>
int main()
{

	int h,t; float c; clrscr();
	printf("enter the value of hardness \n ");
	scanf("%d",&h);
	printf("enter value of carbon \n");
	scanf("%f",&c);
	printf("enter value of tensile strength: \n ");
	scanf("%d",&t);
	if (h>=50&&c<=0.7&&t>=5600)
	{
	printf("your steel grade is 10");
	}
	else if (h>50&&c<0.7)
	{
	printf("your steel grade is  9");
	}
	else if (c<0.7&&t>5600)
	{
	printf("your steel grade is 8");
	}
	else if (t>5600&&h>50)
	{
	printf("your steel grade is 7");
	}
	else if (h>50)
	{
	printf("your steel grade is 6");
	}
	else if (c<0.7)
	{
	printf("your steel grade is 6");
	}
	else if (t>5600)
	{
	printf("your steel grade is 6");
	}

	else
	{
	printf("your steel grade is 5");
	}

	getch();
	return 0;
	}