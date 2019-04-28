#include<conio.h>
#include<stdio.h>
int main()
{

    int a[10]; int i; int n; int count=0;
    for(i=0;i<10;i++)
    {
        printf("enter %d th number",i+1);
        scanf("%d",&a[i]);

    }
    printf("enter the number you want to search");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if (a[i]==n)
           {

            printf("number is present at %d \n",i+1);
            count=count+1;}

    }
    printf("no is present for %d times",count);
    getch();
    return 0;
}
