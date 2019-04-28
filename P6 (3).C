#include<stdio.h>
#include<conio.h>
void main()
{
float amount;
int Rs,Ps;
clrscr();
printf("ENTER THE AMOUNT:");
scanf("%f",&amount);
Rs=amount;
Ps=(amount-Rs)*100;
printf("%d",Rs);
printf("\n%d",Ps);
getch();
}