#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int c=0;
int binary_srch(int *,int ,int,int );
int main()
{
	int *a,n,i,key,low,high,mid,result;
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
    result = binary_srch(a,key,low,high);
    if(key == a[result])
    {
        printf("\n element found at position %d",result);
    }
    else
       printf("\n element not found ");
        return 0;
}
int binary_srch(int *a,int key,int low,int high)
{
    int mid;

     if(low<=high)
     {
          mid = (low + high)/2;
            if(key<a[mid])
            {
                return binary_srch(a,key,low,high-1);

            }
            else if(key>a[mid])
            {

                return binary_srch(a,key,low+1,high);
            }
            else if(key == a[mid])
            {
                //c=1;
                return mid;
            }
     }

}

