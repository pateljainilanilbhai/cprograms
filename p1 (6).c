#include<stdio.h>

int main()
{

	int *a,i,min;
	//clrscr();
	a=(int *)malloc(sizeof(int) * 10);
	printf("Enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);

	}
	min = *a;
	printf("\n min from all numbers");
	for(i=1;i<10;i++)
	{
		if(min>a[i])
		{
		  min=a[i];

		}

	 }
	 printf("\n min number is %d",min);
	 //getch();


}

