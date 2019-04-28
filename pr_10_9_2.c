#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void swap(int *,int *);
void msort_sort(int *,int ,int );

int main()
{
	int *a,n,i,k;
	//clrscr();
	printf("Enter numbers you want to add in array");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int) * n);
	printf("\n enter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n APPLYING QUICK SORT..");
    msort_sort(a,0,n-1);
     for(k=0;k<n;k++)
    {
        printf("\n %d",a[k]);
    }


    return 0;
}
void msort(int *a,int i,int j)
{
    while()
}
