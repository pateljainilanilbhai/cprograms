#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z ;
 clrscr();
 printf("Enter the value of x&y: \n");
 scanf("%d%d", &x,&y );
 z=x+y;
 printf("the value of addition of %d and %d is %d \n",x,y,z);
 printf("Enter the value of x&y: \n");
 scanf("%d%d", &x,&y );

 z=x*y;
 printf("the value of multiplication of %d and %d is %d \n",x,y,z);
 printf("Enter the value of x&y: \n");
 scanf("%d%d", &x,&y );
 z=x-y;
 printf("the value of division of %d and %d is %d \n",x,y,z);
 printf("Enter the value of x&y: \n");
 scanf("%d%d", &x,&y );
 z=x/y;
 printf("the value of substraction of %d and %d is %d \n",x,y,z);

 getch();
 }