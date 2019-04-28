#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,l,n,m;
    printf("how many rows you want? \n");
    scanf("%d",&n);
    printf("\t \t \t \t \t PASCAL TRIANGLE \n");
    m=1;
    for(l=0;l<n;l++)
    {
        for(i=40-3*l;i>0;i--)
            printf(" ");

        for(j=0;j<=l;j++)
        {
            if ((j==0)||(i==0))
              {
                  m=1;
              }
               else
               {
                  m=(m*(l-j+1))/j;
               }
            printf(" %6d",m);

        }
        printf("\n");
    }
    getch();
}
