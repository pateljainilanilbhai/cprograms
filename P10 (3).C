#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
if(a>0)
{
printf("positive");
}
else if(a==0)
{
printf("Zero");
}
else
{
printf("negative");
}
getch();
}
