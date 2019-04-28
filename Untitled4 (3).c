#include<stdio.h>
#include<conio.h>
int main()
{
    int n; int space; int num=0;
    printf("enter the no of rows");
    scanf("%d",&n);
    for(space=n-1;space>=0;space--)
    {
        printf(" ");
        s:

        printf("%d",num);
        num=num+1;
        goto s;

    }
}
