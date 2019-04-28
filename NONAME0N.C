#include<stdio.h>
#include<conio.h>
void main()
{
int i,total=0;
int x[10];
clrscr();
printf("enter 10 integer number\n");
for(i=0;i<10;i++)
scanf("%d",&x[i]);
for(i=0;i<10;i++)
total=total+x[i];
printf("\n");
printf("the total of 10 integer is %d",total);  getch();
}
