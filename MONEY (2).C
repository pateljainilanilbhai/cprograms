#include<stdio.h>
#include<conio.h>
int main()
{            int q; float p; float total;   float discount;
clrscr();
printf("enter the quantity you purchased: \n ");
scanf("%d",&q);
printf("enter per item price:");
scanf("%f",&p);
total=p*q;
if (q>1000)
{
clrscr();
printf("congrats you get 10 percent discount \n");
discount=0.1*total;
total=total-discount;
printf("your bill is %f",total);
getch();
}
if (q<=1000)
{      clrscr();
  printf("sorry you dont get any discount \n");
printf("your bill is %f",total);
getch();

}
getch();
return 0;
}


