/*The current year & the year is which the employee joined the organization are enterd to the keyboard.If the no. of years for which the employee has served the organization is greater than 3,then a bonus of rs.2500 is givan to the the employee.If the years of service are not grater than 3,than print a message that you are not eligible for bonus now.Use if...else statement */
#include<stdio.h>
#include<conio.h>
void main()
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
 }
