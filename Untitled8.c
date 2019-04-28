#include<stdio.h>
#include<conio.h>
int main()
{

int i,j,n;
printf("enter n::::");
scanf("%d",&n);
n=n+1;

    for(i=20;i<(n+20);i++)
    {printf("\n");
    for(j=20;j<i;j++)
    {
        printf("%c",j);
    }
    }
 getch();

}
