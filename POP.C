#include<stdio.h>
#include<conio.h>
void main()
{
long int tot_pop=80000,tot_men,tot_wom,tot_lit,tot_illmen,tot_illwom,tot_litwom,tot_litmen;
clrscr();
tot_men=(52*tot_pop)/100;
tot_lit=(48*tot_pop)/100;
tot_litmen=(35*tot_pop)/100;
tot_illmen=tot_men-tot_litmen;
tot_wom=tot_pop-tot_men;
tot_litwom=tot_lit-tot_litmen;
tot_illwom=tot_wom-tot_litwom;
printf("%d",tot_illwom);
printf("\n%d",tot_illmen);
getch();
}