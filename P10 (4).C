#include<stdio.h>
#include<conio.h>
void main()
{
   float a;
   int r, p;
   clrscr();
   printf("Enter the amount");
   scanf("%f",&a);
   r=a;
   printf("Ruppees=%d",r);
   p=(a-r)*100;
   printf("\n paise=%d",p);
   getch();
}