#include<stdio.h>
#include<conio.h>
void main()
{
   int m, f;
   float r;
   clrscr();
   printf("Enter number of female");
   scanf("%d",&f);
   printf("Enter the number of male");
   scanf("%d",&m);
   r=(float)f/m;
   printf("Ratio of female to male is %f",r);
   getch();
}