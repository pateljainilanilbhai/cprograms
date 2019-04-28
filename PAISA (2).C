#include<stdio.h>
#include<conio.h>
void main()
{
float amount;
int rs,paisa;
clrscr();
printf("enter the amount:");
scanf("%f",&amount);
rs=amount;
paisa=(amount-rs)*100;
printf("\n%d",rs);
printf("\n%d",paisa);
getch();
}


