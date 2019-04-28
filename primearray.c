#include<conio.h>
#include<stdio.h>
int main()
{
	int a[100];    int i;   int j;
	for(i=0;i<100;i++)
	a[i]=i+1;

	for(i=1;i<100;i++)
	{if(a[i]!=0)
	for(j=2;j<(i);j++)
	{
	if((a[i]%j)==0)
	{a[i]=0;}
	}
	}
	for(i=1;i<100;i++)
	{
	if(a[i]!=0)
	{
	printf("%d  ",a[i]);
	}
	}
	getch();
	return 0;
	}
