#include<stdio.h>
//#include<conio.h>
int mul(int ,int );
int main()

{
	int m,n,result;
	//clrscr();
	printf("Enter 2 numbers for multiplication");
	scanf("%d %d",&m,&n);
	result =  mul(m,n);
	printf("\n result is : %d",result);
	//getch();
	return 0;

}

int mul(int m,int n)
{
	int f;
	if(n==1)
	{
		return m;
	}
	else
	{
		f=m+(mul(m,n-1));
		return f;
	}

}
