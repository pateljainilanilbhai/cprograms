#include<stdio.h>
#include<conio.h>
void main()
{
	int *a,n,m,i,key,c=0,d;
	clrscr();
	printf("Enter numbers you want to add in array");
	scanf("%d",&n);
	m=n+1;
	a=(int *)malloc(sizeof(int) * m);
	printf("\n enter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter element you want to search");
	scanf("%d",&key);
	a[m]=key;
	printf("\n applying linear search .....");
	//	printf("\n ......");
	for(i=0;i<m;i++)
	{
	   if(key == a[i])
	   {
		c=1;
		break;
	   }
	}
	d = i;

	if(d==m)
	{
		printf("\n element not found");
	}
	else
	{
		printf("\n element found at position %d",i);
	}



      getch();
}














