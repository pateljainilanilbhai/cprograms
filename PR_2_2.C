#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,key,c=0,low,high,mid;
	//clrscr();
	printf("Enter numbers you want to add in array");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int) * n);
	printf("\n enter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter element you want to search");
	scanf("%d",&key);
	printf("\n applying binary search .....");
    low=0;
    high=n;
        while(low<=high)
    {
        mid=(low + high )/2;

        if(key==a[mid])
     {
           c=1;
         printf("\n Element is at position %d",mid);
        break;
    }
    else if(key<a[mid])
    {
        high = mid - 1;
    }
    else if(key>a[mid])
    {
        low = mid + 1;

    }
}
  if(c==0){
    printf("\n element not found");
  }
}
