#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,c;
clrscr();
printf("please enter two integers");
scanf("%d %d",&a,&b);
if(a>b)
{
c=a;
a=b;
b=c;
}
for(i=a+1;i<b;i++)
{
if(i%2!=0)
printf("%d  ",i);
}
getch();
}