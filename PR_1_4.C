#include<stdio.h>
#include<conio.h>
int sum(int ,int );
void main()

{
	int i,m,n,result;
	clrscr();
	printf("Enter 2 numbers for sum");
	scanf("%d %d",&m,&n);
	result = sum(m,n);
	printf("\n result is : %d",result);
	getch();

}

int sum(int m,int n)
{
	int f;
	if(n==0)
	{
		return m;
	}
	else
	{
		f=1+(sum(m,n-1));
		return f;
	}

}
