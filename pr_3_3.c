#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>


void incertion_sort(int *,int );

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
	printf("\n APPLYING INSERTION SORT..");
    incertion_sort(a,n);

    return 0;
}
void incertion_sort(int *a,int n)
{
    int temp,i,j;

    for(i=0;i<n;i++)
    {
        j=i-1;
        temp=a[i];
        while(j>=0 && temp <= a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }

}
