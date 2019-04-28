#include<stdio.h>
#include<conio.h>

void main()
{int amt,a,a1,b,b1,c;
clrscr();
 printf("enter the withdrawl amount:");
 scanf("%d",&amt);
 a=amt/100;
 printf("\n the number of 100 rupees note to be paid is:%d",a);
 a1=amt%100;
 b=a1/50;
 printf("\n the number of 50 rupees notes to be paid is:%d",b);
 b1=a1%50;
 c=b1/10;
 printf("\n the number of10 rupees notes to be paid is:%d",c);
 getch();

}


