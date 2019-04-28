#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i;
clrscr();
printf("enter the 10 values");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("\n");
printf("the values are");
for(i=0;i<10;i++)
printf("%d\t",a[i]);  getch();
}