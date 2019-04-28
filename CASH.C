#include<stdio.h>
#include<conio.h>
void main()
{
int no_of_hun,amount,no_of_fifty,no_of_ten;
clrscr();
printf("enter the amount:");
scanf("%d",&amount);
no_of_hun=amount/100;
amount=amount%100;
no_of_fifty=amount/50;
amount=amount%50;
no_of_ten=amount/10;
printf("%d",no_of_hun);
printf("\n%d",no_of_fifty);
printf("\n%d",no_of_ten);
getch();
}