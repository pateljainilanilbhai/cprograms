/*program to print digit in pyramidal form
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
#include<conio.h>
int main()
{

    int i,j,k,l,m,n; i=1;
    printf("\n How many lines you want?");
    scanf("%d",&n); n=n+1;
    for(l=1;l<n;l++)/*loop to print n lines*/
    {

        for(i=1;i<=n-l;i++)/*loop to print spaces*/

        {
            printf(" ");

        }


        m=l;
        for(j=1;j<=l;j++)
        {
            printf("*");
            m++;


        }

        m=m-2;
        for(k=1;k<l;k++)
        {
            printf("*");
            m--;
            }
        printf("\n");
        }
    getch();
}
