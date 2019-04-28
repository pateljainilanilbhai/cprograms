#include<stdio.h>
#include<conio.h>
int main()
{   int n,temp,i,j;
    printf("how many numbers you wanted to sort? \n ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    printf("enter the values of a [%d] \n",i);
    scanf("%d",&a[i]);
    }
    printf("applying sorting \n ");

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        printf("\n Numbers in assending order");
        for(i=0;i<n;i++)
        {
            printf("%5d",a[i]);

        }
         for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        printf("\n Numbers in dessending order");
        for(i=0;i<n;i++)
        {
            printf("%5d",a[i]);

        }
    getch();
}
