#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void swap(int *, int *);
void selection_sort(int *,int );

int main()
{
	int *a,n,i;
	//clrscr();
	printf("Enter numbers you want to add in array");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int) * n);
	printf("\n enter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n APPLYING SELECTION SORT..");
	selection_sort(a,n);

	return 0;
}
void selection_sort(int a[],int n)
{
    int min_index,i,j;
    for(i=0;i<n;i++)
    {
        min_index = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[min_index])
            {

                min_index=j;
            }
        }

        if(min_index != i)
        {
            swap(&(a[i]),&(a[min_index]));
        }


    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }

}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

