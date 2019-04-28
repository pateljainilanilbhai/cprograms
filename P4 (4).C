#include<stdio.h>
#include<conio.h>
void main()
{
int no_of_hund,amount,no_of_fif,no_of_tens;
clrscr();
printf("Enter the amount:");
scanf("%d",&amount);
no_of_hund=amount/100;
amount=amount%100;
no_of_fif=amount/50;
amount=amount%50;
no_of_tens=amount/10;
amount=amount%10;
printf("%d",no_of_hund);
printf("\n%d",no_of_fif);
printf("\n%d",no_of_tens);
getch();
}