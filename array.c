#include<stdio.h>
int main()
{

    int z; long int n;  int i; int mul; i=0; int j; int k; int sum=0; mul=1;
    for(j=0;j>-1;j++)
    {

    printf("enter 0 to end the program|||||this program is for only summing many number or subracting: for subtraction insert - ahead of number");
    scanf("%d",&z);
    if(z==0)
        break;
        printf("enter how long array would cont \n");
        scanf("%d",&n);
        char a[n];
    printf("enter no in arrays \n");
    for(i=0;i<n;i++)
    {
        scanf("%d \n ",&a[i]);
    }
    for(k=0;k<n;k++)
    {
        sum=sum+a[k];
    }

    for(k=0;k<n;k++)
    {

        mul=mul*a[k];
    }
    printf("******************");

    printf("************************** \n");
    printf("sum=%d \n",sum);
    printf("mul=%d  \n",mul);
    sum=0;
    mul=1;
    getch();

    }

    getch();
}
