#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void swap(int *, int *);
void bubble_sort(int *,int );

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
	printf("\n APPLYING BUBBLE SORT..");
    bubble_sort(a,n);


    return 0;
}
void bubble_sort(int *a,int n)
{
    int i,j,k,*p,*q,f=0;
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(&(a[j]),&(a[j+1]));
                f++;
            }

        }
        if(f==0)
        {
            break;
        }

    }
    printf("\n sorted array..\n ");
    for(k=0;k<n;k++)
    {
        printf("\n%d",a[k]);
    }
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a =*b;
    *b =temp;
}




































