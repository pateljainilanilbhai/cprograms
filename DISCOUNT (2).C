#include<math.h>
#include<conio.h>
#include<stdio.h>
void main()
{
  int q,p,tp,dp;
  float da;
  clrscr();
  printf("Enter the price of item:");
  scanf("%d",&p);
  printf("\nEnter the quantity of item:");
  scanf("%d",&q);
  tp=p*q;
  printf("The total price is %d\n",tp);

  if(q>=1000)
  {
	printf("Enter the discount percentage:");
	scanf("%d",dp);
	da=(dp/100)*tp;
	printf("The discounted amount is %f",da);
  }
  else
  {
	printf("Since the quantity below 1000,you have to pay %d",tp);
  }
  getch();

}

