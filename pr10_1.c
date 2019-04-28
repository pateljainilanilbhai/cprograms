#include<stdio.h>
void quick_sort(int *,int ,int );

int main()
{
	int *a,n,i,k;

	printf("Enter numbers you want to add in array");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int) * n);
	int f = 0;
	int l = n-1;

	printf("\n enter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n APPLYING QUICK SORT..");
    quick_sort(a,0,n-1);
    printf("*****");
    for(k=0;k<n;k++)
    {
        printf("\n %d",a[k]);
    }

    return 0;
}

void quick_sort(int *a,int first,int last)
{
    int i= first;
    int j= last;
    int pivot = first;
    int k;
    while(i<j)
    {
        while(a[i]<=a[pivot] && i<last)
        {
            i++;
        }
        while(a[j]>=a[pivot])
        {
            j--;
        }
    if(i<=j)
    {
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }

else{
    k = a[pivot];
    a[pivot] = a[j];
    a[j] = k;
    }
    quick_sort(a,first,j-1);
    quick_sort(a,j+1,last);


}

}






























