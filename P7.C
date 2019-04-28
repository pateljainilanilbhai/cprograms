#include<stdio.h>
#include<conio.h>
void main()
{
float ratio;
int nof,nom;
clrscr();
printf("Enter the nof &nom:");
scanf("%d%d",&nof,&nom);
ratio=(float)nof/nom;
printf("%f",ratio);
getch();
}