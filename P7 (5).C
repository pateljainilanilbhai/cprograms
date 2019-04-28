#include<stdio.h>
#include<conio.h>
void main()
{
   int amount, h, f, t;
   clrscr();
   printf("Enter the value of amount");
   scanf("%d",&amount);
   h=amount/100;
   amount=amount-(h*100);
   f=amount/50;
   amount=amount-(f*50);
   t=amount/10;
   printf("hundreds=%d , Fifties=%d, Tens=%d",h,f,t);
   getch();
}