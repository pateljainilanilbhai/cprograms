#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void swap(int *,int *);
void quick_sort(int *,int ,int );

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
    quick_sort(a,0,n-1);
     for(k=0;k<n;k++)
    {
        printf("\n %d",a[k]);
    }


    return 0;
}
void quick_sort(int *a,int first,int last)
{
    int pivot = last;       //first or last as pivot
    int i=first , j=last,k;
    while(i < j)
    {
        while(a[i] <= a[pivot] && i<last)
        {
                i++;
        }
        while(a[j] > a[pivot])
        {
                j--;
        }
        if(i<j)
        {
            swap(&(a[i]),&(a[j]));
        }
        swap(&(a[pivot]),&(a[j]));

        quick_sort(a,first,j-1);
        quick_sort(a,j+1,last);
    }


}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}



















