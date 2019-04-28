#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,n,temp;
    printf("enter the value of change in decsending order(like 100,50..):\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter your rupees:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n>=a[i])
        {
         temp=a[i];
         n=n-temp;
         printf("%d\t",temp);
        }
    }
}

