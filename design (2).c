/*program to print digit in pyramidal form
   1
  232
 34543
4567654
*/
#include<stdio.h>
    int i,j,k,l,m,n; i=1;
#include<conio.h>
int main()
{

    printf("\n How many lines you want?");
    scanf("%d",&n); n=n+1;
    for(l=1;l<n;l++)/*loop to print n lines*/
    {

        for(i=1;i<=n-l;i++)/*loop to print spaces*/

        {
            printf("      ");

        }
        m=l;
        for(j=1;j<=l;j++)
        {
            printf("%6d",m);
            m++;


        }

        m=m-2;
        for(k=1;k<l;k++)
        {
            printf("%6d",m);
            m--;
            }
        printf("\n");
        }
    getch();
}
