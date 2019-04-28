#include<stdio.h>
#include<conio.h>
void main()
{
float ratio;
int nof,nom;
clrscr();
printf("enter nof:");
scanf("%d",&nof);
printf("enter nom;");
scanf("%d",&nom);
ratio=(float)nof/nom;
printf("%f",ratio);
getch();
}