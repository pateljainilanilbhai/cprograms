#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,l,n,m; int row; int o; int ans; int column; int space; int q;
    printf("how many rows you want? \n");
    scanf("%d",&n);
    printf("\t \t \t \t \t PASCAL TRIANGLE \n");

    for(row=0;row<n;row++)
        {
            for(i=50-3*row;i>0;i--)
            printf(" ");

            for(column=0;column<=(row);column++)
            {

              m=1;q=1;o=1;
                 for(j=1;j<=row;j++)
                       m=m*j;
                        for(i=1;i<=(row-column);i++)
                            q=q*i;
                             for(l=1;l<=column;l++)
                                 o=o*l;



                                 ans=m/(q*o);
                                 printf("%6d",ans);
            }
            printf("\n");
        }
}



