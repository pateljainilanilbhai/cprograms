#include<stdio.h>
#include<conio.h>
int main()
{

    int a[3][3];
    int i,j,k;
    int b[3][3];
    int c[3][3];
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { c[i][j]=0;}
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("enter value of a[%d][%d] \n",i,j);
           scanf("%d",&a[i][j]);
        }

    }

    printf("\n \n \n \n \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("enter value of b[%d][%d] \n",i,j);
           scanf("%d",&b[i][j]);
        }

    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("    %d    ",c[i][j]);

        }
        printf("\n");
    }

}
