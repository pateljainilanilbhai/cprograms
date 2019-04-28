#include<stdio.h>
#include<conio.h>
int main()
{
 int jy,cy,b;     char name[300];
 clrscr();
 printf("please enter your name or id sorry don't use spaces");
 scanf("%s",&name);
 printf(" \n please Enter the current year:");
 scanf("%d",&cy);

 printf("\n Enter the joining year:");
 scanf("%d",&jy);
	  b=cy-jy;
	  printf("you worked for %d years \n ",b);
 if (b>3)
 {
       clrscr();	printf("*************congrats %s************** \n you get bonus of rs.2500",name);
 }
 else
 {
	clrscr(); printf("sorry %s \n you are not eligible for bonus",name);
 }
 getch();
 }
