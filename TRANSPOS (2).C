#include<stdio.h>
#include<conio.h>

int main()
{
	int a[4][4]; int i; int j;

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{	printf("enter value of a[%d] [%d] \n",i+1,j+1);
			scanf("%d",&a[i][j]);
			}
			}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{printf("%d \t ",a[j][i]);}
		printf("\n");
		}
		getch();
		return 0;
		}
