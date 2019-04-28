#include<conio.h>
#include<stdio.h>
int main()
{       int year; long int second;
	printf("enter your age: \n");
	scanf("%d",&year);
	second=365*24*60*60*(long int)year;

	printf("you lived for %ld seconds",second);
	getch();
	return 0;
	}