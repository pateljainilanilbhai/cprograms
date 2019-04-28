#include<conio.h>
#include<stdio.h>
int main()
{        int year,month; float a; int c,d;       long int day;
clrscr();
printf("enter days:");
scanf("%ld",&day);
year=day/365;
c=day%365;
month=c/30;

d=c%30;
printf(" year = %d \n month = %d \n days = %d ",year,month,d);
getch();
return 0;
}