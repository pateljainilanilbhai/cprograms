#include<stdio.h>
#include<conio.h>
void main()
{
 int amt,h,f,t;
 clrscr();
 printf("Please Enter The Amount:");
 scanf("%d",&amt);
 h=amt/100;
 amt=amt%100;
 f=amt/50;
 amt=amt%50;
 t=amt/10;
 printf("hundred note=%d \n",h);
 printf("fifty note=%d \n",f);
 printf("ten note=%d",t);
 getch();
 }
