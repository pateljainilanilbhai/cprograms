#include<stdio.h>
#include<conio.h>
int main()
{

int m; int n; int i; int j;

    printf("enter value of m \n");

    scanf("%d",&m);

    printf("enter value of n \n");
    scanf("%d",&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    if (m>=n)
    {
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        printf("give value of a[%d][%d]",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }
    if (m<n)
        {
    for(j=0;j<m;j++)
        for(i=0;i<n;i++)
    {
        printf("give value of a[%d][%d]",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }



        if (m>=n)
    {
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        printf("give value of b[%d][%d]",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    }
    if (m<n)
        {
    for(j=0;j<m;j++)
        for(i=0;i<n;i++)
    {
        printf("give value of b[%d][%d]",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    }




                if (m>=n)
    {
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    }
    if (m<n)
        {
    for(j=0;j<m;j++)
        for(i=0;i<n;i++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }
    }

        printf("***********************************************\n");
        printf("the addition is \n \n \n \n");


    if(m>=n)
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
        {

            printf("%d    ",c[i][j]);
            if(j==n-1)
            {
                printf("\n");
            }
        }
        if(m<n)
        for(j=0;j<m;j++)
            for(i=0;i<n;i++)
        {

            printf("%d    ",c[i][j]);

            if(i==n-1)
            {
                printf("\n");
            }
        }

















                if (m>=n)
    {
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]-b[i][j];
    }
    }
    if (m<n)
        {
    for(j=0;j<m;j++)
        for(i=0;i<n;i++)
    {
    c[i][j]=a[i][j]-b[i][j];
    }
    }

        printf("\n ***********************************************\n");
        printf("the subtraction is \n \n \n \n");


    if(m>=n)
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
        {

            printf("%d    ",c[i][j]);
            if(j==n-1)
            {
                printf("\n");
            }
        }
        if(m<n)
        for(j=0;j<m;j++)
            for(i=0;i<n;i++)
        {

            printf("%d    ",c[i][j]);

            if(i==n-1)
            {
                printf("\n");
            }
        }


}
