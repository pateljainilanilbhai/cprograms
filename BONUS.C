#include<stdio.h>
#include<conio.h>
int main()
{
 int jy,cy,wy;
 clrscr();
 printf("Enter the current year:");
 scanf("%d",&cy);

 printf("\nEnter the joining year:");
 scanf("%d",&jy);
 wy=cy-jy;
 printf("\nYou are working here since %d years",wy);

 if(wy>=3)
 {

	printf("\nYou get bonus of rs.2500");
 }
 else
 {
	printf("\nYou are not eligible for bonus");
 }
 getch();
 return 0;
 }
