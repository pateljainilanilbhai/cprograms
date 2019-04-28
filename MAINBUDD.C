#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
int sum=0;
int i;
clrscr();
printf("please enter first small integer");
scanf("%d",&a);
printf("please enter another integer");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
sum+=i;
}printf("the sum between %d and %d is %d",a,b,sum);
getch();
}
